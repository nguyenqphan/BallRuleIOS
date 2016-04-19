using UnityEngine;
using System.Collections;
using UnityEngine.Advertisements;

public class UnityAdsManager : MonoBehaviour {

	[HideInInspector]
	public string gameID = "1060465";

	// Use this for initialization
	void Awake () {
		Advertisement.Initialize(gameID, true);
	}


	public void ShowAds()
	{
		if(Advertisement.IsReady())
		{
			Advertisement.Show();
		}
	}

}


