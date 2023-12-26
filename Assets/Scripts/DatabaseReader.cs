using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase;
using Firebase.Database;
using Firebase.Extensions;

public class DatabaseReader : MonoBehaviour
{
    private DatabaseReference _reference;
    private string urlValue;

    public event Action OnURLFetched;

    public string URLValue => urlValue;
    private void Start() 
    {
        _reference = FirebaseDatabase.DefaultInstance.RootReference;
        GetURL();
    }

    
    private IEnumerator GetURLRoutine()
    {
        var url = _reference.Child("URL").GetValueAsync();
        yield return new WaitUntil(predicate: () => url.IsCompleted);

        if (url != null)
        {
            var snapShot = url.Result;
            urlValue = snapShot.Value.ToString();
            OnURLFetched?.Invoke();
        }
    }

    private void GetURL()
    {
        StartCoroutine(GetURLRoutine());
    }
}
