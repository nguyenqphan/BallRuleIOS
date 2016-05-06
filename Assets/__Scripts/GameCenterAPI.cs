using UnityEngine;
using System.Collections;
using UnityEngine.SocialPlatforms;
using UnityEngine.SocialPlatforms.GameCenter;
using GooglePlayGames;


public class GameCenterAPI : MonoBehaviour {

	void Awake()
	{
		#if UNITY_ANDROID
		PlayGamesPlatform.Activate ();

		#endif


	}

	void Start()
	{
		Social.localUser.Authenticate (success => {
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
		#if UNITY_IPHONE
		if(GameStateManager.Instance.IsChallenged)
		{
			Social.ReportScore(GameStateManager.Instance.BestChallengeScore, "challenge_leaderboard", UniversalLBCallback);
		}else if(GameStateManager.Instance.IsObstacle){
			Social.ReportScore(GameStateManager.Instance.BestObstacleScore, "obstacles_leaderboard", UniversalLBCallback);
		} else{
			Social.ReportScore(GameStateManager.Instance.BestScore, "universal_leaderboard", UniversalLBCallback);

		}
		#endif
		#if UNITY_ANDROID
		if(GameStateManager.Instance.IsChallenged)
		{
			Social.ReportScore(GameStateManager.Instance.BestChallengeScore, GPSBallRule.leaderboard_challenge, UniversalLBCallback);
		}else if(GameStateManager.Instance.IsObstacle){
			Social.ReportScore(GameStateManager.Instance.BestObstacleScore, GPSBallRule.leaderboard_obstacles, UniversalLBCallback);
		} else{
			Social.ReportScore(GameStateManager.Instance.BestScore, GPSBallRule.leaderboard_universal, UniversalLBCallback);

		}
		#endif
	}
		
	public void GCReportSupporterScore()
	{
		#if UNITY_IPHONE
		Social.ReportScore(GameStateManager.Instance.EarnAdsPoint, "supporters_leaderboard", UniversalLBCallback);
		#endif

		#if UNITY_ANDROID
		Social.ReportScore(GameStateManager.Instance.EarnAdsPoint, GPSBallRule.leaderboard_supporters, UniversalLBCallback);
		#endif
//		GameCenterPlatform.ShowLeaderboardUI("supporters_leaderboard", TimeScope.AllTime);
	}

	public static void GCReportAchievement()
	{
		#if UNITY_IPHONE
		if (GameStateManager.HighScore > 99) {
			if (!GameStateManager.Instance.IsChallenged) {
				Social.ReportProgress ("advance_achievement", 100.0d, CallbackAchievement);
			} else {
				Social.ReportProgress ("expert_achivement", 100.0d, CallbackAchievement);
			}
		} else if (GameStateManager.HighScore > 59) {
			Social.ReportProgress ("proficient_achivement", 100.0d, CallbackAchievement);
		} else if (GameStateManager.HighScore > 39) {
			Social.ReportProgress ("intermediate_achievement", 100.0d, CallbackAchievement);
		} else if (GameStateManager.HighScore > 19) {
			Social.ReportProgress ("newbie_achievement", 100.0d, CallbackAchievement);
		}
		#endif

		#if UNITY_ANDROID
		if(GameStateManager.HighScore  > 99)
		{
			if (!GameStateManager.Instance.IsChallenged) {
				Social.ReportProgress (GPSBallRule.achievement_advance, 100.0d, CallbackAchievement);
			}
			else 
			{
				Social.ReportProgress(GPSBallRule.achievement_expert, 100.0d, CallbackAchievement);
			}
		}else if(GameStateManager.HighScore > 59) {
			Social.ReportProgress(GPSBallRule.achievement_proficient, 100.0d, CallbackAchievement);
		}else if(GameStateManager.HighScore > 39){
			Social.ReportProgress(GPSBallRule.achievement_intermediate, 100.0d, CallbackAchievement);
		}else if(GameStateManager.HighScore > 19){
			Social.ReportProgress(GPSBallRule.achievement_newbie, 100.0d, CallbackAchievement);
		}
		#endif
	}

	public static void CallbackAchievement(bool success)
	{
		
	}
}
