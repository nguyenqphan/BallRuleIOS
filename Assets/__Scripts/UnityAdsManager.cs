using UnityEngine;
using System.Collections;
using UnityEngine.Advertisements;


public class UnityAdsManager : MonoBehaviour {

	private GameCenterAPI gameCenterAPI;

	[HideInInspector]
	public string gameID = null;
	ShowPanels showPanels;

	[SerializeField] string iosGameId = "1060473";
	[SerializeField] string androidGameId = "1060172";
	[SerializeField] bool enableTestMode = true;

	// Use this for initialization
	void Awake () {
		showPanels = GameObject.FindWithTag("UI").GetComponent<ShowPanels>();
		gameCenterAPI = GameObject.FindWithTag("GameManager").GetComponent<GameCenterAPI>();

//		Advertisement.Initialize(gameID, true);
	}

	void Start()
	{
		string gameId = null;

		#if UNITY_IOS // If build platform is set to iOS...
		gameId = iosGameId;
		#elif UNITY_ANDROID // Else if build platform is set to Android...
		gameId = androidGameId;
		#endif

		Advertisement.Initialize(gameId, enableTestMode);
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
//			Debug.Log(GameStateManager.Instance.EarnAdsPoint);
			GameStateManager.Instance.Save();
			gameCenterAPI.GCReportSupporterScore();

			break;
		case ShowResult.Failed:
			break;
		}
	}
}


