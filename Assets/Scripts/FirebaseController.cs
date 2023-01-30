using Firebase.Extensions;
using Firebase;
using System.Collections.Generic;
using System;
using UnityEngine;
using System.Threading.Tasks;

public enum FirebaseStatus
{
    Waiting = 0,
    Connected = 1,
    Failed = 2
}

public static class FirebaseController
{
    public static FirebaseStatus FbStatus = FirebaseStatus.Waiting;
    public static void SendRequest(string[] keys)
    {
        FbStatus = FirebaseStatus.Waiting;
        Debug.Log("Requested " + keys[0]);
        Dictionary<string, object> defaults = new Dictionary<string, object>();
        foreach (string key in keys)
            defaults.Add(key, new object());
        FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(task =>
        {
            var dependencyStatus = task.Result;
            if (dependencyStatus == Firebase.DependencyStatus.Available)
            {
                try
                {
                    Firebase.RemoteConfig.FirebaseRemoteConfig.DefaultInstance.SetDefaultsAsync(defaults)
                      .ContinueWithOnMainThread(task =>
                      {
                          FetchDataAsync();
                      });
                }
                catch (Exception e)
                {
                    Debug.LogError(e.Message);
                }
            }
            else
            {
                Debug.LogError(System.String.Format(
                  "Could not resolve all Firebase dependencies: {0}", dependencyStatus));
            }
        });
    }
    public static Task FetchDataAsync()
    {
        System.Threading.Tasks.Task fetchTask =
        Firebase.RemoteConfig.FirebaseRemoteConfig.DefaultInstance.FetchAsync(
            TimeSpan.Zero);

        return fetchTask.ContinueWithOnMainThread(FetchComplete);
    }

    static void FetchComplete(Task fetchTask)
    {
        if (fetchTask.IsCanceled)
        {
            FbStatus = FirebaseStatus.Failed;
        }
        else if (fetchTask.IsFaulted)
        {
            FbStatus = FirebaseStatus.Failed;
        }
        else if (fetchTask.IsCompleted)
        {
            FbStatus = FirebaseStatus.Connected;
        }

        var info = Firebase.RemoteConfig.FirebaseRemoteConfig.DefaultInstance.Info;
        switch (info.LastFetchStatus)
        {
            case Firebase.RemoteConfig.LastFetchStatus.Success:
                Firebase.RemoteConfig.FirebaseRemoteConfig.DefaultInstance.ActivateAsync()
                .ContinueWithOnMainThread(task => {
                    Debug.Log("Succes!");
                    //DebugLog(String.Format("Remote data loaded and ready (last fetch time {0}).",
                    //               info.FetchTime));
                });
                break;
            case Firebase.RemoteConfig.LastFetchStatus.Failure:
                switch (info.LastFetchFailureReason)
                {
                    case Firebase.RemoteConfig.FetchFailureReason.Error:
                        //DebugLog("Fetch failed for unknown reason");
                        break;
                    case Firebase.RemoteConfig.FetchFailureReason.Throttled:
                        //DebugLog("Fetch throttled until " + info.ThrottledEndTime);
                        break;
                }
                break;
            case Firebase.RemoteConfig.LastFetchStatus.Pending:
                //DebugLog("Latest Fetch call still pending.");
                break;
        }
    }
}