using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{ 
    
    [SerializeField] private DatabaseReader dbReader;

    [SerializeField] private URLPreview URLPreview;
    
    private DateTime timeToShow = new DateTime(2023, 12, 26, 17, 03, 00);

    private Coroutine waitRoutine;

    private void Awake()
    {
        if (DateTime.Now >= timeToShow)
        {
            dbReader.OnURLFetched += OnURLFetched;
        }
        else
        {
            StartWaiting();
        }
        
        Debug.Log(DateTime.Now >= timeToShow);
    }

    private void OnURLFetched()
    {
        URLPreview.ShowUrlFullScreen(dbReader.URLValue);
    }

    private void StartWaiting()
    {
        if(waitRoutine != null) return;
        waitRoutine = StartCoroutine(CheckForTime());
    }

    private void StopWaiting()
    {
        if(waitRoutine == null) return;
        StopCoroutine(waitRoutine);
        waitRoutine = null;
    }

    private IEnumerator CheckForTime()
    {
        while (true)
        {
            if (DateTime.Now >= timeToShow)
            {
                OnURLFetched();
                StopWaiting();
            }
            Debug.Log("WAITING");

            yield return new WaitForSeconds(5f);
        }
    }
}
