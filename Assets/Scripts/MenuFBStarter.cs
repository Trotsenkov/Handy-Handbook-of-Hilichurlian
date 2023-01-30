using Firebase.RemoteConfig;
using System.Collections;
using TMPro;
using UnityEngine;


public class MenuFBStarter : MonoBehaviour
{
    [SerializeField] Transform canvas;

    static int lsns = 0;
    void Awake()
    {
        if (lsns > 0)
        {
            DrawButtons();
            return;
        }
        FirebaseController.SendRequest(new string[] { "lsns" });
        StartCoroutine(waitForLessons());
    }

    IEnumerator waitForLessons()
    {
        while (FirebaseController.FbStatus != FirebaseStatus.Connected)
            yield return null;

        lsns = (int)FirebaseRemoteConfig.DefaultInstance.GetValue("lsns").LongValue;
        DrawButtons();
    }
    void DrawButtons()
    {
        GameObject lessonButtonPrefab = Resources.Load<GameObject>("LessonButton");
        gameObject.transform.Find("Text (TMP)").gameObject.SetActive(false);
        for (int i = 0; i < lsns; i++)
        {
            var button = Instantiate(lessonButtonPrefab, gameObject.transform);
            button.transform.position += new Vector3(0, -150 * i);
            button.transform.Find("Text (TMP)").GetComponent<TMP_Text>().text = "lsn" + (i + 1);
        }
    }
}