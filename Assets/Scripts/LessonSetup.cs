using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Localization.Settings;
using UnityEngine.SceneManagement;

public class LessonSetup : MonoBehaviour
{
    public byte number;
    public void GoToLesson()
    {
        CheckAnswer.lsnKey = "lsn" + number + LocalizationManager.CurrentLocaleCode;
        SceneManager.LoadScene("SampleScene");
    }
}
