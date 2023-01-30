using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LessonSetup : MonoBehaviour
{
    public void  GoToLesson()
    {
        CheckAnswer.lsnKey = transform.GetChild(0).GetComponent<TMP_Text>().text;
        SceneManager.LoadScene("SampleScene");
    }
}
