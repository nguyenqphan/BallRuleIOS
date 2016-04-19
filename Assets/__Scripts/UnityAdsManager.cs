using UnityEngine;
using System.Collections;
using UnityEngine.Advertisements;

public class UnityAdsManager : MonoBehaviour {

	[HideInInspector]
	public string gameID = "1060473";
	ShowPanels showPanels;

	// Use this for initialization
	void Awake () {
		showPanels = GameObject.FindWithTag("UI").GetComponent<ShowPanels>();
		Advertisement.Initialize(gameID, true);
	}


	public void ShowAds()
	{
		if(Advertisement.IsReady())
		{
			Advertisement.Show();
		}
	}


	public void ShowRewardAds()
	{
		GameStateManager.Instance.IsWatched = true;

		ShowOptions options = new ShowOptions();
		options.resultCallback = AdsCallBackHandler;

		if(Advertisement.IsReady("rewardedVideo"))
		{
			Advertisement.Show("rewardedVideo", options);
		}

		showPanels.ShowHideAdButton();
	}

	void AdsCallBackHandler(ShowResult result)
	{
		switch(result)
		{
		case ShowResult.Finished:
			GameStateManager.Instance.Load();
			GameStateManager.Instance.EarnAdsPoint++;
			Debug.Log(GameStateManager.Instance.EarnAdsPoint);
			GameStateManager.Instance.Save();
			break;
		case ShowResult.Failed:
			GameStateManager.Instance.Load();
			GameStateManager.Instance.EarnAdsPoint++;
			GameStateManager.Instance.Save();
			break;
		}
	}
}


