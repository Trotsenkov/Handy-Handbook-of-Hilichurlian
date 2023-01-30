using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class AnswerButton : MonoBehaviour
{
    public void Check()
    {
        CheckAnswer.Check(transform.GetChild(0).GetComponent<TMP_Text>().text);
    }

}
