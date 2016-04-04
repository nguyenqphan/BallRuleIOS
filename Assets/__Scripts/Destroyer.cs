using UnityEngine;
using System.Collections;


//F6938FB14437B26D61E4DE240EF670B5C216AAFC

public class Destroyer : MonoBehaviour {

	private ShowPanels showUI;
	private SoundBreaking soundBallDrop;
	private UpdateScore updateScore;
	private CubeManager cubeManager;

	void Awake()
	{
		soundBallDrop = GameObject.FindWithTag("GameManager").GetComponent<SoundBreaking>();
		cubeManager = GameObject.FindWithTag("GameManager").GetComponent<CubeManager>();
		updateScore = GameObject.FindWithTag("UI").GetComponent<UpdateScore>();
		showUI = GameObject.FindWithTag("UI").GetComponent<ShowPanels>();

	}

	void Start()
	{
		if(GameStateManager.Instance.IsChallenged){
			StartCoroutine("TimerChallengeCounter");
		}
	}

	void UpdateBestChallengeScore ()
	{
		if (GameStateManager.Instance.BestChallengeScore < GameStateManager.HighScore) {
			GameStateManager.Instance.BestChallengeScore = GameStateManager.HighScore;
			GameStateManager.Instance.Save ();
		}
	}

	void OnTriggerEnter(Collider collider)
	{
		if(collider.gameObject.CompareTag("Player"))
		{
			soundBallDrop.PlayWaterSound();
			GameStateManager.Instance.IsStarted = true;
			collider.gameObject.SetActive(false);

			showUI.ShowMenu();
			showUI.scaleText.SetActive(false);
			GameStateManager.Instance.Load();

			if (!GameStateManager.Instance.IsChallenged)
			{
				if (GameStateManager.Instance.BestScore < GameStateManager.HighScore) 
				{
					GameStateManager.Instance.BestScore = GameStateManager.HighScore;
					GameStateManager.Instance.Save ();
				}
			}else{
				UpdateBestChallengeScore ();
				showUI.liveChallengeTime.SetActive(false);
			}
		
			updateScore.EndGameScore();
			
		}
	}

	IEnumerator TimerChallengeCounter()
	{
		while(GameStateManager.Instance.ChallengeTimer > 0)
		{
			yield return new WaitForSeconds(1f);
			GameStateManager.Instance.ChallengeTimer--;
			updateScore.TimerChallenge();
		}
		cubeManager.cubeLayerMask = 2;
		showUI.outOfTimeText.SetActive(true);
		GameStateManager.Instance.IsOutOfTime = true;

	}


	public void ResetTimerChallenge(){
		StopCoroutine("TimerChallengeCounter");
		StartCoroutine("TimerChallengeCounter");
	}

}
