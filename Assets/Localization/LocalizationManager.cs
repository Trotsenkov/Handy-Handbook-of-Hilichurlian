using System.Collections;
using UnityEngine;
using UnityEngine.Localization.Settings;

public class LocalizationManager : MonoBehaviour
{
    public static bool working { get; private set; }
    public static int CurrentLocaleID { get; private set; }

    public static string CurrentLocaleCode { get
        {
            return LocalizationSettings.AvailableLocales.Locales[CurrentLocaleID].Identifier.Code;
        }
    }

    public void ChangeLocale(int localeID)
    {
        if (working)
            return;
        CurrentLocaleID = localeID;
        StartCoroutine(SetLocale());
    }

    static IEnumerator SetLocale()
    {
        working = true;
        yield return LocalizationSettings.InitializationOperation;
        LocalizationSettings.SelectedLocale = LocalizationSettings.AvailableLocales.Locales[CurrentLocaleID];
        PlayerPrefs.SetInt("Locale", CurrentLocaleID);
        MenuFBStarter.lsns = null;
        working = false;
    }
}