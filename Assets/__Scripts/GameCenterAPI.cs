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
			if (success) {
				Debug.Log ("Authentication successful");
				string userInfo = "Username: " + Social.localUser.userName + 
					"\nUser ID: " + Social.localUser.id + 
					"\nIsUnderage: " + Social.localUser.underage;
				Debug.Log (userInfo);
			}
			else
				Debug.Log ("Authentication failed");
		});



	}

	void UniversalLBCallback(bool success)
	{
		
	}

	public void GClogin() {
		Social.localUser.Authenticate (success => {
			if (success) {
				Debug.Log ("Authentication successful");
				string userInfo = "Username: " + Social.localUser.userName + 
					"\nUser ID: " + Social.localUser.id + 
					"\nIsUnderage: " + Social.localUser.underage;
				Debug.Log (userInfo);
			}
			else
				Debug.Log ("Authentication failed");
		});

		Social.ShowLeaderboardUI();
	}

	public void GCShowLeaderBoard()
	{
		
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

		GameCenterPlatform.ShowLeaderboardUI("supporters_leaderboard", TimeScope.AllTime);
	}
}
