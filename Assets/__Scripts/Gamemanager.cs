using UnityEngine;
using System.Collections;

public class Gamemanager : MonoBehaviour {

//	private StartOptions startOption;
//	private ShowPanels showPanell;
	private Pause pause;
	private CubeManager cubeManager;
//	private Destroyer destroyer;

	void Awake()
	{
//		startOption = GameObject.FindWithTag("UI").GetComponent<StartOptions>();
//		showPanell = GameObject.FindWithTag("UI").GetComponent<ShowPanels>();
		pause = GameObject.FindWithTag("UI").GetComponent<Pause>();
		cubeManager = GetComponent<CubeManager>();
//		destroyer = GameObject.FindWithTag("DestroyerBall").GetComponent<Destroyer>();
	}

	// Use this for initialization
	void Start () {

	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void UniversalMode()
	{
		GameStateManager.Instance.IsChallenged = false;
//		cubeManager.cubeLayerMask = 8192;
//		destroyer.StopTimerChallenge();
		pause.UnPause();

//		startOption.RefleshButtonClicked();
//		showPanell.pausePanel.SetActive(false);
//		showPanell.outOfTimeText.SetActive(false);
//		showPanell.liveChallengeTime.SetActive(false);
	}

	public void ChallengeMode()
	{
		GameStateManager.Instance.IsChallenged = true;
		pause.UnPause();
//		cubeManager.cubeLayerMask = 8192;
	}
}
