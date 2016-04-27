using UnityEngine;
using System.Collections;

public class GPSManager : MonoBehaviour {

	// Use this for initialization

	void Awake()
	{
	}

	void Start () {
		Social.localUser.Authenticate((bool success) => {
			if(success){
				Debug.Log("You've Logged In");
			}
			else{
				Debug.Log("Loggin Failed");
			}
		});

//		Debug.Log("Login from GPS");
	}

	public void DisplayLeaderBoard()
	{
		Social.localUser.Authenticate (success => {
			if (success) {
				Social.ShowLeaderboardUI();
			}
		});
	}

	public void DisplayAchievementBoard()
	{
		Social.localUser.Authenticate (success => {
			if (success) {
				Social.ShowAchievementsUI();
			}
		});
	}

	public static void GPSReportScore()
	{
		if(GameStateManager.Instance.IsChallenged)
		{
			Social.ReportScore(GameStateManager.Instance.BestChallengeScore, GPSBallRule.leaderboard_challenge, GPSUniversalLBCallback);
		}else if(GameStateManager.Instance.IsObstacle){
			Social.ReportScore(GameStateManager.Instance.BestObstacleScore, GPSBallRule.leaderboard_obstacles, GPSUniversalLBCallback);
		} else{
			Social.ReportScore(GameStateManager.Instance.BestScore, GPSBallRule.leaderboard_universal, GPSUniversalLBCallback);

		}

	}

	public static void GPSUniversalLBCallback(bool success)
	{
		//Callback from ReportScore
	}

	public static void GPSCallbackAchievement(bool success)
	{

	}

	public void GPSReportSupporterScore()
	{
		Social.ReportScore(GameStateManager.Instance.EarnAdsPoint, GPSBallRule.leaderboard_supporters, GPSUniversalLBCallback);
	}

	public static void GPSReportAchivement()
	{
		if(GameStateManager.HighScore  > 99)
		{
			if (!GameStateManager.Instance.IsChallenged) {
				Social.ReportProgress (GPSBallRule.achievement_advance, 100.0d, GPSCallbackAchievement);
			}
			else 
			{
				Social.ReportProgress(GPSBallRule.achievement_expert, 100.0d, GPSCallbackAchievement);
			}
		}else if(GameStateManager.HighScore > 59) {
			Social.ReportProgress(GPSBallRule.achievement_proficient, 100.0d, GPSCallbackAchievement);
		}else if(GameStateManager.HighScore > 39){
			Social.ReportProgress(GPSBallRule.achievement_intermediate, 100.0d, GPSCallbackAchievement);
		}else if(GameStateManager.HighScore > 19){
			Social.ReportProgress(GPSBallRule.achievement_newbie, 100.0d, GPSCallbackAchievement);
		}
	}

	// Update is called once per frame
//	void Update () {
//		if(GameStateManager.HighScore > 4)
//		{
//			Social.ReportProgress(GPSBallRule.achievement_newbie, 100.0f, (bool success) =>{
//				
//			});
//		}
//		if(GameStateManager.HighScore > 9)
//		{
//			Social.ReportProgress(GPSBallRule.achievement_skilled, 100.0f, (bool success) =>{
//
//			});
//		}
//		if(GameStateManager.HighScore > 14)
//		{
//			Social.ReportProgress(GPSBallRule.achievement_intermediate, 100.0f, (bool success) =>{
//
//			});
//		}
//		if(GameStateManager.HighScore > 19)
//		{
//			Social.ReportProgress(GPSBallRule.achievement_proficient, 100.0f, (bool success) =>{
//
//			});
//		}
//		if(GameStateManager.HighScore > 24)
//		{
//			Social.ReportProgress(GPSBallRule.achievement_advanced, 100.0f, (bool success) =>{
//
//			});
//		}
//	}
}
