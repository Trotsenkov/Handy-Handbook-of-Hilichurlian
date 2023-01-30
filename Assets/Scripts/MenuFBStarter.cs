using Firebase.RemoteConfig;
using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.Localization.Settings;

public class MenuFBStarter : MonoBehaviour
{
    [SerializeField] Transform canvas;
    public static string[] lsns;
    void Awake()
    {
        if (lsns != null)
        {
            DrawButtons();
            return;
        }
        FirebaseController.SendRequest(new string[] { "lsns" + LocalizationManager.CurrentLocaleCode });
        StartCoroutine(waitForLessons());
    }

    IEnumerator waitForLessons()
    {
        while (FirebaseController.FbStatus != FirebaseStatus.Connected)
            yield return null;

        lsns = FirebaseRemoteConfig.DefaultInstance.
            GetValue("lsns" + LocalizationManager.CurrentLocaleCode).StringValue.Split('\n');
        DrawButtons();
    }
    void DrawButtons()
    {
        GameObject lessonButtonPrefab = Resources.Load<GameObject>("LessonButton");
        gameObject.transform.Find("Text (TMP)").gameObject.SetActive(false);
        for (byte i = 0; i < lsns.Length; )
        {
            var button = Instantiate(lessonButtonPrefab, gameObject.transform);
            button.transform.position += new Vector3(0, -150 * i);
            button.transform.Find("Text (TMP)").GetComponent<TMP_Text>().text = lsns[i];
            button.GetComponent<LessonSetup>().number = ++i;
        }
    }
}