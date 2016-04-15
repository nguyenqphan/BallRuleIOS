using UnityEngine;
using System.Collections;

public class Gamemanager : MonoBehaviour {

//	private StartOptions startOption;
//	private ShowPanels showPanell;
	private Pause pause;							//Store a reference to the Pause class
	private CubeManager cubeManager;				//Store a reference to the CubeManager class
	private PlayMusic playMusic;					//Store a reference to the PlayMusic class
//	private Destroyer destroyer;
//	public GameObject challengeLock;
//	public GameObject obstacleLock;


	void Awake()
	{
		
//		startOption = GameObject.FindWithTag("UI").GetComponent<StartOptions>();
//		showPanell = GameObject.FindWithTag("UI").GetComponent<ShowPanels>();
		pause = GameObject.FindWithTag("UI").GetComponent<Pause>();
		cubeManager = GetComponent<CubeManager>();
		playMusic = GameObject.FindWithTag("UI").GetComponent<PlayMusic>();
//		destroyer = GameObject.FindWithTag("DestroyerBall").GetComponent<Destroyer>();
	}


	//This function is called when the player click the Universal Button in the UI
	public void UniversalMode()
	{
		
		GameStateManager.Instance.IsChallenged = false;				//Set the Challenge mode to false
		GameStateManager.Instance.IsObstacle = false;				//Set the Obstacle mode to false
		playMusic.FadeDown(1f);										
		playMusic.PlaySelectedMusic(1);								//Choose music to play	
		playMusic.FadeUp(1f);
//		cubeManager.cubeLayerMask = 8192;
//		destroyer.StopTimerChallenge();
		pause.UnPause();											//Hide the PausePanel

//		startOption.RefleshButtonClicked();
//		showPanell.pausePanel.SetActive(false);
//		showPanell.outOfTimeText.SetActive(false);
//		showPanell.liveChallengeTime.SetActive(false);
	}


	//The function is called when player clicks the Challenge Mode button in the UI
	public void ChallengeMode()
	{

		//The condition to enable challenge mode
		if (GameStateManager.Instance.BestScore > 10) {
			GameStateManager.Instance.IsChallenged = true;			//set the challenge mode to true
			GameStateManager.Instance.IsObstacle = false;			//set the obstacle mode to false
			playMusic.FadeDown (1f);
			playMusic.PlaySelectedMusic (1);						//choose the music to play
			playMusic.FadeUp (1f);
			pause.UnPause ();										//Hide the Pause Panel
		}
//		cubeManager.cubeLayerMask = 8192;
	}
		
	//This functions is called when player clicks the obstacle mode button in the UI
	public void ObstacleMode()
	{
		//Condition to enable Obstacle Mode 
		if (GameStateManager.Instance.BestChallengeScore > 10) {
			GameStateManager.Instance.IsObstacle = true;			//set the obstacle mode to true
			GameStateManager.Instance.IsChallenged = false;			//set the challenge mode to false
			playMusic.FadeDown (1f);
			playMusic.PlaySelectedMusic (1);						//choose the music to play
			playMusic.FadeUp (1f);
			pause.UnPause ();										//Hide the pause panel
		}
	}
}
