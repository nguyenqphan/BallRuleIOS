using UnityEngine;
using System.Collections;
using UnityEngine.SocialPlatforms;
using UnityEngine.SocialPlatforms.GameCenter;
public class GameCenterAPI : MonoBehaviour {

	void Start()
	{

	
//		ILeaderboard  gcUniversalLB = Social.CreateLeaderboard();
////		ILeaderboard gcChallengeLB = Social.CreateLeaderboard();
//		ILeaderboard gcObstaclesLB = Social.CreateLeaderboard();
////		ILeaderboard gcSupportersLB = Social.CreateLeaderboard();
////
//		gcUniversalLB.id = "universal_leaderboard";
////		gcChallengeLB.id = "obstacles_leaderboard";
//		gcObstaclesLB.id = "obstacles_leaderboard";
////		gcSupportersLB.id = "supporters_leaderboard";
//
//		Social.ReportScore(5, "universal_leaderboard", UniversalLBCallback);

		Social.localUser.Authenticate (success => {
//			if (success) {
//				Debug.Log ("Authentication successful");
//				string userInfo = "Username: " + Social.localUser.userName + 
//					"\nUser ID: " + Social.localUser.id + 
//					"\nIsUnderage: " + Social.localUser.underage;
//				Debug.Log (userInfo);
//			}
//			else
//				Debug.Log ("Authentication failed");
		});



	}

	void UniversalLBCallback(bool success)
	{
		//Callback from ReportScore
	}

	public void GCShowLeaderBoard()
	{
		Social.localUser.Authenticate (success => {
			if (success) {
				Social.ShowLeaderboardUI();
			}
		});

	}

	public void GCShowAchievement()
	{
		Social.localUser.Authenticate (success => {
			if (success) {
				Social.ShowAchievementsUI();
			}
		});
	}

	public void GCReportScore()
	{
		if(GameStateManager.Instance.IsChallenged)
		{
			Social.ReportScore(GameStateManager.Instance.BestChallengeScore, "challenge_leaderboard", UniversalLBCallback);
		}else if(GameStateManager.Instance.IsObstacle){
			Social.ReportScore(GameStateManager.Instance.BestObstacleScore, "obstacles_leaderboard", UniversalLBCallback);
		} else{
			Social.ReportScore(GameStateManager.Instance.BestScore, "universal_leaderboard", UniversalLBCallback);

		}
	}
		
	public void GCReportSupporterScore()
	{
		Social.ReportScore(GameStateManager.Instance.EarnAdsPoint, "supporters_leaderboard", UniversalLBCallback);

//		GameCenterPlatform.ShowLeaderboardUI("supporters_leaderboard", TimeScope.AllTime);
	}

	public static void GCReportAchievement()
	{
		if(GameStateManager.HighScore  > 99)
		{
			if (!GameStateManager.Instance.IsChallenged) {
				Social.ReportProgress ("advance_achievement", 100.0d, CallbackAchievement);
			}
			else 
			{
				Social.ReportProgress("expert_achivement", 100.0d, CallbackAchievement);
			}
		}else if(GameStateManager.HighScore > 59) {
			Social.ReportProgress("proficient_achivement", 100.0d, CallbackAchievement);
		}else if(GameStateManager.HighScore > 39){
			Social.ReportProgress("intermediate_achievement", 100.0d, CallbackAchievement);
		}else if(GameStateManager.HighScore > 19){
			Social.ReportProgress("newbie_achievement", 100.0d, CallbackAchievement);
		}
	}

	public static void CallbackAchievement(bool success)
	{
		
	}
}
