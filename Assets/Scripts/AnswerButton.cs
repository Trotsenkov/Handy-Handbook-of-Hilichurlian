using UnityEngine;
using TMPro;

public class AnswerButton : MonoBehaviour
{
    public void Check()
    {
        CheckAnswer.Instance.Check(transform.GetChild(0).GetComponent<TMP_Text>().text);
    }

}
