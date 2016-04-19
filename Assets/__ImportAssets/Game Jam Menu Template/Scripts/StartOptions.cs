﻿using UnityEngine;
using System.Collections;
using UnityEngine.Audio;
using UnityEngine.SceneManagement;


public class StartOptions : MonoBehaviour {

	public int sceneToStart = 1;										//Index number in build settings of scene to load if changeScenes is true
	public bool changeScenes;											//If true, load a new scene when Start is pressed, if false, fade out UI and continue in single scene
	public bool changeMusicOnStart;										//Choose whether to continue playing menu music or start a new music clip


	[HideInInspector] public bool inMainMenu = true;					//If true, pause button disabled in main menu (Cancel in input manager, default escape key)
	[HideInInspector] public Animator animColorFade; 					//Reference to animator which will fade to and from black when starting game.
	[HideInInspector] public Animator animMenuAlpha;					//Reference to animator that will fade out alpha of MenuPanel canvas group
	 public AnimationClip fadeColorAnimationClip;		//Animation clip fading to color (black default) when changing scenes
	[HideInInspector] public AnimationClip fadeAlphaAnimationClip;		//Animation clip fading out UI elements alpha


	private PlayMusic playMusic;										//Reference to PlayMusic script
	private float fastFadeIn = .01f;									//Very short fade time (10 milliseconds) to start playing music immediately without a click/glitch
	private ShowPanels showPanels;										//Reference to ShowPanels script on UI GameObject, to show and hide panels
	private TextColor textColor;
	private UpdateScore updateScore;
	private CubeManager cubeManager;
	private UnityAdsManager unityAdsManager;

	void Awake()
	{
		//Get a reference to ShowPanels attached to UI object
		showPanels = GetComponent<ShowPanels> ();

		//Get a reference to PlayMusic attached to UI object
		playMusic = GetComponent<PlayMusic> ();

		textColor = GetComponent<TextColor>();

		updateScore = GetComponent<UpdateScore>();

		cubeManager = GameObject.FindWithTag("GameManager").GetComponent<CubeManager>();

		unityAdsManager = GameObject.FindWithTag("GameManager").GetComponent<UnityAdsManager>();

	}


	public void StartButtonClicked()
	{
		System.GC.Collect();
//		playMusic.FadeDown(0.5f);
//		playMusic.PlaySelectedMusic(1);
//		playMusic.FadeUp(0.5f);
		cubeManager.cubeLayerMask.value = 8192;	
		if(GameStateManager.Instance.IsChallenged)
		{
			GameStateManager.Instance.ChallengeTimer = 15;
			showPanels.outOfTimeText.SetActive(false);
		
			showPanels.liveChallengeTime.SetActive(true);
			//updateScore.TimerChallege();
		}

	
//		GameStateManager.Instance.NumBerOfGame = 0;
	
		showPanels.gameTitleText.SetActive(false);
		GameStateManager.Instance.IsStarted = true;						//keep loading the starting scene
		GameStateManager.Instance.StartGame();
//		Debug.Log(GameStateManager.HighScore);
		GameStateManager.Instance.Restart();
		updateScore.ChangeLiveScore();

		textColor.ChooseTextColor();
		//If changeMusicOnStart is true, fade out volume of music group of AudioMixer by calling FadeDown function of PlayMusic, using length of fadeColorAnimationClip as time. 
		//To change fade time, change length of animation "FadeToColor"
		if (changeMusicOnStart) 
		{
			playMusic.FadeDown(fadeColorAnimationClip.length);
		}

		//If changeScenes is true, start fading and change scenes halfway through animation when screen is blocked by FadeImage
		if (changeScenes) 
		{
			//Use invoke to delay calling of LoadDelayed by half the length of fadeColorAnimationClip
			Invoke ("LoadDelayed", fadeColorAnimationClip.length * .5f);

			//Set the trigger of Animator animColorFade to start transition to the FadeToOpaque state.
			animColorFade.SetTrigger ("fade");
		} 

		//If changeScenes is false, call StartGameInScene
		else 
		{
			//Call the StartGameInScene function to start game without loading a new scene.
			StartGameInScene();
		}

	}

	public void RefleshButtonClicked()
	{


//		playMusic.FadeDown(0.1f);
//		playMusic.PlaySelectedMusic(1);
//		playMusic.FadeUp(0.1f);
//		GameStateManager.Instance.Load();
		cubeManager.cubeLayerMask.value = 8192;	
//		GameStateManager.Instance.NumBerOfGame++;
//		if(GameStateManager.Instance.NumBerOfGame %3 == 0)
//		{
//			unityAdsManager.ShowAds();
//		}

		if(GameStateManager.Instance.IsChallenged)
		{
			GameStateManager.Instance.IsOutOfTime = false;
			GameStateManager.Instance.ChallengeTimer = 15;
			showPanels.liveChallengeTime.SetActive(true);
			updateScore.TimerChallenge();
			showPanels.outOfTimeText.SetActive(false);
			//updateScore.TimerChallege();
		}

		showPanels.outOfTimeText.SetActive(false);

		//showPanels.HideMenu();
		if(GameStateManager.Instance.SceneMaterialNum < 5 && GameStateManager.Instance.NumBerOfGame%3 == 0)
		{
			GameStateManager.Instance.SceneMaterialNum++;
		}
		else if(GameStateManager.Instance.SceneMaterialNum >=5)
		{
			GameStateManager.Instance.SceneMaterialNum = 0;
		}

		textColor.ChooseTextColor();

		showPanels.liveScore.SetActive(true);
		showPanels.scaleText.SetActive(false);
//		GameStateManager.Instance.BallTimer = 3f;
		GameStateManager.Instance.IsStarted = true;						
		GameStateManager.Instance.StartGame();
		GameStateManager.Instance.Restart();
		updateScore.ChangeLiveScore();
		GameStateManager.Instance.BallTimer = 20;
		updateScore.LiveTime();

//		GameStateManager.Instance.TestIndex++;
//		Debug.Log(GameStateManager.Instance.TestIndex);
		LoadDelayed();

		//Load Scene to play
		//showPanels.HideMenu();


	}


	//Once the level has loaded, check if we want to call PlayLevelMusic
	void OnLevelWasLoaded()
	{
		//if changeMusicOnStart is true, call the PlayLevelMusic function of playMusic
		if (changeMusicOnStart)
		{
//			playMusic.PlayLevelMusic ();
		}	
	}


	public void LoadDelayed()
	{
		//Pause button now works if escape is pressed since we are no longer in Main menu.
		inMainMenu = false;

		//Hide the main menu UI element
		showPanels.HideMenu ();

		//Load the selected scene, by scene index number in build settings
		SceneManager.LoadScene (sceneToStart);
//		Time.timeScale = 1;
	}

	public void HideDelayed()
	{
		//Hide the main menu UI element after fading out menu for start game in scene
		showPanels.HideMenu();
	}

	public void StartGameInScene()
	{
		//Pause button now works if escape is pressed since we are no longer in Main menu.
		inMainMenu = false;

		//If changeMusicOnStart is true, fade out volume of music group of AudioMixer by calling FadeDown function of PlayMusic, using length of fadeColorAnimationClip as time. 
		//To change fade time, change length of animation "FadeToColor"
		if (changeMusicOnStart) 
		{
			//Wait until game has started, then play new music
			Invoke ("PlayNewMusic", fadeAlphaAnimationClip.length);
		}
		//Set trigger for animator to start animation fading out Menu UI
		animMenuAlpha.SetTrigger ("fade");
		Invoke("HideDelayed", fadeAlphaAnimationClip.length);
		Debug.Log ("Game started in same scene! Put your game starting stuff here.");
	}


	public void PlayNewMusic()
	{
		//Fade up music nearly instantly without a click 
		playMusic.FadeUp (fastFadeIn);
		//Play music clip assigned to mainMusic in PlayMusic script
		playMusic.PlaySelectedMusic (1);
	}
}
