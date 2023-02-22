using UnityEngine;
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
