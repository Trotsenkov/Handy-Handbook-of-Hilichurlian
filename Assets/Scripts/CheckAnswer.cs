using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using Firebase.RemoteConfig;
using Random = UnityEngine.Random;

public class CheckAnswer : MonoBehaviour
{
    public static CheckAnswer Instance { get; private set; }
    GameObject ButtonPrefab;
    [SerializeField] private GameObject win;
    [SerializeField] private GameObject lose;
    static AudioClip winClip, loseClip, endClip;
    [SerializeField] private TMP_Text questText;
    static quest current;
    List<Button> buttons;
    public static string lsnKey = "lsn1";
    public string winText { get; set; }

    string lsn;
    public struct quest
    {
        public string question;
        public List<string> answers;
    }

    public static List<quest> quests = new List<quest>();

    void Awake()
    {
        Instance = this;

        FirebaseController.SendRequest(new string[] { lsnKey });
        winClip = Resources.Load<AudioClip>("Win");
        loseClip = Resources.Load<AudioClip>("Lose");
        endClip = Resources.Load<AudioClip>("End Song");

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
        transform.Find("Loading").gameObject.SetActive(false);
        transform.Find("Game").gameObject.SetActive(true);
        SetQuestions();
    }

    void SetQuestions()
    {
        if (quests.Count == 0)
        {
            questText.text = winText;
            GetComponent<AudioSource>().clip = endClip;
            GetComponent<AudioSource>().Play();
            return;
        }
        current = quests[Random.Range(0, quests.Count)];
        questText.text = current.question;
        List<string> answers = new List<string>(current.answers);
        buttons = new List<Button>();
        int n = 0;
        while(answers.Count > 0)
        {
            string s;
            answers.Remove(s = answers[Random.Range(0, answers.Count)]);
            GameObject button = Instantiate(ButtonPrefab, new Vector3(n * 200 + 150, 500), new Quaternion(), transform);
            button.transform.GetChild(0).GetComponent<TMP_Text>().text = s;
            buttons.Add(button.GetComponent<Button>());
            n++;
        }
    }

    public void Check(string answer)
    {
        foreach (Button button in buttons)
            button.interactable = false;
        if (current.answers[0] == answer)
        {
            win.SetActive(true);
            GetComponent<AudioSource>().clip = winClip;
            GetComponent<AudioSource>().Play();
            quests.Remove(current);
        }
        else
        {
            GetComponent<AudioSource>().clip = loseClip;
            GetComponent<AudioSource>().Play();
            lose.SetActive(true);
            lose.transform.Find("Correct answer").GetComponent<TMP_Text>().text = current.answers[0];
        }
    }

    public void Continue()
    {
        foreach (Button button in buttons)
            Destroy(button.gameObject);
        win.SetActive(false);
        lose.SetActive(false);
        SetQuestions();
    }
}
