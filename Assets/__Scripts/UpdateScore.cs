using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class UpdateScore : MonoBehaviour {

	public Text scoreLabel;
	public Text bestScoreLabel;
	public Text liveScoreLable;
	public Text timerLabel;
	public Text timerChallenge;

	public void TimerChallenge()
	{
		if(GameStateManager.Instance.ChallengeTimer < 4){
			timerChallenge.color = Color.red;
		}
		else{
			timerChallenge.color = Color.white;
		}
		timerChallenge.text = FormatTime(GameStateManager.Instance.ChallengeTimer);

	}

	public void LiveTime()
	{
		timerLabel.text = FormatTime(GameStateManager.Instance.BallTimer);
	}

	public void ChangeLiveScore()
	{
		liveScoreLable.text = GameStateManager.HighScore.ToString(); 
	}

	public void EndGameScore()
	{
		scoreLabel.text = GameStateManager.HighScore.ToString();
		if (!GameStateManager.Instance.IsChallenged) {
			bestScoreLabel.text = GameStateManager.Instance.BestScore.ToString ();
		}else{
			bestScoreLabel.text = GameStateManager.Instance.BestChallengeScore.ToString();
		}

	}
		
	private string FormatTime(float timeInSeconds)
	{
		return string.Format("{0}:{1:00}", Mathf.FloorToInt(timeInSeconds/60), Mathf.FloorToInt(timeInSeconds%60)); 
	}


}
