using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using Firebase.RemoteConfig;
using System;
using Random = UnityEngine.Random;

public class CheckAnswer : MonoBehaviour
{
    GameObject ButtonPrefab;
    static Transform canvas;
    [SerializeField] private GameObject win;
    [SerializeField] private GameObject lose;
    static AudioClip winClip, loseClip, endClip;
    [SerializeField] private TMP_Text questText;
    static quest current;
    List<Button> buttons;
    public static string lsnKey = "lsn1";

    string lsn;
    public struct quest
    {
        public string question;
        public List<string> answers;
    }

    public static List<quest> quests = new List<quest>();

    void Start()
    {
        FirebaseController.SendRequest(new string[] { lsnKey });
        winClip = Resources.Load<AudioClip>("Win");
        loseClip = Resources.Load<AudioClip>("Lose");
        endClip = Resources.Load<AudioClip>("End Song");

        canvas = transform;
        ButtonPrefab = Resources.Load<GameObject>("AnswerButton");
        StartCoroutine(GetQuests());
    }
    IEnumerator GetQuests()
    {
        while (FirebaseController.FbStatus != FirebaseStatus.Connected)
            yield return null;
            lsn = FirebaseRemoteConfig.DefaultInstance.GetValue(lsnKey).StringValue;

            List<string> x = new List<string>(lsn.Split('\n'));
            quests = new List<quest>();
            for (int i = 0; i < x.Count; i++)
            {
                string[] y = x[i].Split(':');
                quests.Add(new quest() { question = y[0], answers = new List<string>(y[1].Split(';')) });
            }
        canvas.Find("Loading").gameObject.SetActive(false);
        canvas.Find("Game").gameObject.SetActive(true);
        SetQuestions();
    }
    void SetQuestions()
    {
        if (quests.Count == 0)
        {
            canvas.GetComponent<CheckAnswer>().questText.text = "Это все, ты молодец!";
            canvas.GetComponent<AudioSource>().clip = endClip;
            canvas.GetComponent<AudioSource>().Play();
            return;
        }
        current = quests[Random.Range(0, quests.Count)];
        canvas.GetComponent<CheckAnswer>().questText.text = current.question;
        List<string> answers = new List<string>(current.answers);
        buttons = new List<Button>();
        int n = 0;
        while(answers.Count > 0)
        {
            string s;
            answers.Remove(s = answers[Random.Range(0, answers.Count)]);
            GameObject button = Instantiate(ButtonPrefab, new Vector3(n * 200 + 150, 500), new Quaternion(), canvas);
            button.transform.GetChild(0).GetComponent<TMP_Text>().text = s;
            buttons.Add(button.GetComponent<Button>());
            n++;
        }
    }

    public static void Check(string answer)
    {
        foreach (Button button in canvas.GetComponent<CheckAnswer>().buttons)
            button.interactable = false;
        if (current.answers[0] == answer)
        {
            canvas.GetComponent<CheckAnswer>().win.SetActive(true);
            canvas.GetComponent<AudioSource>().clip = winClip;
            canvas.GetComponent<AudioSource>().Play();
            quests.Remove(current);
        }
        else
        {
            canvas.GetComponent<AudioSource>().clip = loseClip;
            canvas.GetComponent<AudioSource>().Play();
            canvas.GetComponent<CheckAnswer>().lose.SetActive(true);
        }
    }

    public void Continue()
    {
        foreach (Button button in buttons)
            Destroy(button.gameObject);
        canvas.GetComponent<CheckAnswer>().win.SetActive(false);
        canvas.GetComponent<CheckAnswer>().lose.SetActive(false);
        SetQuestions();
    }
}
