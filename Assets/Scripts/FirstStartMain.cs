using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class FirstStartMain : MonoBehaviour
{
    [SerializeField] Button ENG;
    [SerializeField] Button RU;
    public void Menu()
    {
        SceneManager.LoadScene("Menu");
    }

    private void Start()
    {
        int loc;
        loc = PlayerPrefs.GetInt("Locale", -1);
        switch (loc) {
            case 1:
                RU.onClick.Invoke();
                break;
            default:
                ENG.onClick.Invoke();
                break;
        }
        StartCoroutine(LocaleWaiter(loc != -1));
    }

    IEnumerator LocaleWaiter(bool loc)
    {
        while (LocalizationManager.working)
            yield return null;
        if (loc)
            Menu();
        else
        {
            transform.Find("LangChose").gameObject.SetActive(true);
            transform.Find("Logo").gameObject.SetActive(false);
        }
    }
}
