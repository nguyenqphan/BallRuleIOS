using UnityEngine;
using System.Collections;

public class ShowPanels : MonoBehaviour {

	public GameObject optionsPanel;							//Store a reference to the Game Object OptionsPanel 
	public GameObject optionsTint;							//Store a reference to the Game Object OptionsTint 
	public GameObject menuPanel;							//Store a reference to the Game Object MenuPanel 
	public GameObject pausePanel;							//Store a reference to the Game Object PausePanel 
	public GameObject startButton;
	public GameObject refreshButton;
	public GameObject noAdsButton;
	public GameObject askButton;
	public GameObject rateButton;
	public GameObject fBshareButton;
	public GameObject scorePanel;
	public GameObject liveScore;
	public GameObject scaleText;
	public GameObject gameTitleText;
	public GameObject liveChallengeTime;
	public GameObject outOfTimeText;
	public GameObject challengeLockImage;
	public GameObject obstacleLockImage;
	public GameObject instructionPanel;

	private CubeManager cubeManager;

//	private PlayMusic playMusic;

	void Awake()
	{
		cubeManager = GameObject.FindWithTag("GameManager").GetComponent<CubeManager>();

//		playMusic = GetComponent<PlayMusic>();
	}

	void Start()
	{
		if(GameStateManager.Instance.IsChallenged)
		{
			liveChallengeTime.SetActive(true);
		}

		ShowMenu();

	}

	//Call this function to activate and display the Options panel during the main menu
	public void ShowOptionsPanel()
	{
		GameStateManager.Instance.Load();
		if(GameStateManager.Instance.BestScore > 10)
		{
			HideChallLockImage();
		}
		if(GameStateManager.Instance.BestChallengeScore > 10)
		{
			HideObsLockImage();
		}
		cubeManager.cubeLayerMask.value = 2;
		Time.timeScale = 0;
		optionsPanel.SetActive(true);
		optionsTint.SetActive(true);
	}

	//Call this function to deactivate and hide the Options panel during the main menu
	public void HideOptionsPanel()
	{
		optionsPanel.SetActive(false);
		optionsTint.SetActive(false);
	}

	//Call this function to activate and display the main menu panel during the main menu
	public void ShowMenu()
	{
		cubeManager.cubeLayerMask.value = 2;
		menuPanel.SetActive (true);
		if(GameStateManager.Instance.IsStarted)
		{
			startButton.SetActive(false);
			refreshButton.SetActive(true);
//			noAdsButton.SetActive(true);
//			askButton.SetActive(false);
			fBshareButton.SetActive(true);
			scorePanel.SetActive(true);
			liveScore.SetActive(false);

		}
		else{
			startButton.SetActive(true);
			refreshButton.SetActive(false);
//			askButton.SetActive(true);
//			noAdsButton.SetActive(true);
			fBshareButton.SetActive(false);
			scorePanel.SetActive(false);
			liveScore.SetActive(true);
		}

		GameStateManager.Instance.Load();
		Debug.Log(GameStateManager.Instance.NumOfPlay);
		if(GameStateManager.Instance.NumOfPlay > 40)
		{
			askButton.SetActive(false);
			rateButton.SetActive(true);
		}
	}

	//Call this function to deactivate and hide the main menu panel during the main menu
	public void HideMenu()
	{
		menuPanel.SetActive (false);
	}
	
	//Call this function to activate and display the Pause panel during game play
	public void ShowPausePanel()
	{
		pausePanel.SetActive (true);
		optionsTint.SetActive(true);


	}

	//Call this function to deactivate and hide the Pause panel during game play
	public void HidePausePanel()
	{
		pausePanel.SetActive (false);
		optionsTint.SetActive(false);

	}

	public void HideChallLockImage()
	{
		challengeLockImage.SetActive(false);
	}

	public void HideObsLockImage()
	{
		obstacleLockImage.SetActive(false);
	}

	public void ShowInstruction()
	{
		instructionPanel.SetActive(true);
	}

	public void HideInstruction()
	{
		instructionPanel.SetActive(false);
	}
}
