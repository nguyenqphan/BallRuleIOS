using UnityEngine;
using System.Collections;


//F6938FB14437B26D61E4DE240EF670B5C216AAFC


//Attach to the Destroyer gameobject to set all objects, that collides with it, to inactive
public class Destroyer : MonoBehaviour {

	private ShowPanels showUI;							//Reference to the ShowPanels in UI
	private SoundBreaking soundBallDrop;				//Reference to the SoundBreaking class in GameManager
	private UpdateScore updateScore;					//reference to the UpdateScore class
	private CubeManager cubeManager;					//Reference to the Cubemanager;
	private bool isTimeRunning;							//If the challenge time is running
	private UnityAdsManager unityAdsManager;

	void Awake()
	{
		soundBallDrop = GameObject.FindWithTag("GameManager").GetComponent<SoundBreaking>();
		cubeManager = GameObject.FindWithTag("GameManager").GetComponent<CubeManager>();
		updateScore = GameObject.FindWithTag("UI").GetComponent<UpdateScore>();
		showUI = GameObject.FindWithTag("UI").GetComponent<ShowPanels>();
		unityAdsManager = GameObject.FindWithTag("GameManager").GetComponent<UnityAdsManager>();


	}

	void Start()
	{

		//Call TimeChallengeCounter if the challenge mode is on
		if(GameStateManager.Instance.IsChallenged){
			StartCoroutine("TimerChallengeCounter");
		}
	}

	//Update the best score in challenge mode
	void UpdateBestChallengeScore ()
	{
		if (GameStateManager.Instance.BestChallengeScore < GameStateManager.HighScore) {
			GameStateManager.Instance.BestChallengeScore = GameStateManager.HighScore;
		}
	}

	void UpdateUniversalScore()
	{
		if (GameStateManager.Instance.BestScore < GameStateManager.HighScore) 			
		{
			GameStateManager.Instance.BestScore = GameStateManager.HighScore;
		}
	}

	void UpdateObstacleScore()
	{
		if(GameStateManager.Instance.BestObstacleScore < GameStateManager.HighScore)
		{
			GameStateManager.Instance.BestObstacleScore = GameStateManager.HighScore;
		}
	}
		
	void OnTriggerEnter(Collider collider)
	{
		if(collider.gameObject.CompareTag("Player"))
		{
			soundBallDrop.PlayWaterSound();														//Play sound effect
			GameStateManager.Instance.IsStarted = true;											
			collider.gameObject.SetActive(false);												//Deactivate the gameobject that collides with the Destroyer

			showUI.ShowMenu();																	//Show the Menu
			showUI.scaleText.SetActive(false);													//set the scale time text inactive
//			GameStateManager.Instance.Save();													//Save the number of Play first
			GameStateManager.Instance.Load();				
			GameStateManager.Instance.NumOfPlay++;

			if (!GameStateManager.Instance.IsObstacle) {
				if (!GameStateManager.Instance.IsChallenged) {
					UpdateUniversalScore ();
				} else {
					UpdateBestChallengeScore ();
					if (isTimeRunning) {
						StopTimerChallenge ();
					}
					showUI.liveChallengeTime.SetActive (false);
				
				}
			}
			else{
				UpdateObstacleScore();
			}



			GameStateManager.Instance.Save ();
			updateScore.EndGameScore();



			
		}
		else{
//			soundBallDrop.PlayLowWaterSound();
			collider.gameObject.SetActive(false);
		}
	}

	IEnumerator TimerChallengeCounter()
	{
		isTimeRunning = true;
		while(GameStateManager.Instance.ChallengeTimer > 0)
		{
			yield return new WaitForSeconds(1f);
			GameStateManager.Instance.ChallengeTimer--;
			updateScore.TimerChallenge();
		}

		isTimeRunning = false;
		cubeManager.cubeLayerMask = 2;
		showUI.outOfTimeText.SetActive(true);
		GameStateManager.Instance.IsOutOfTime = true;

	}

	public void StopTimerChallenge()
	{
		StopCoroutine("TimerChallengeCounter");
	}


	public void ResetTimerChallenge(){
		StopCoroutine("TimerChallengeCounter");
		StartCoroutine("TimerChallengeCounter");
	}

}
