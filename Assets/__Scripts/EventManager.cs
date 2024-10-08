﻿using UnityEngine;
using System.Collections;

public class EventManager : MonoBehaviour {

	public delegate void EventAction();
	public static event EventAction OnCamMove;
	public static event EventAction OnPlayerEnter;

	private SoundBreaking soundDropBall;
	private UpdateScore updateScore;

	private MainCube mainCube;

	[HideInInspector]
	public bool isCollided = false; 

	void Awake()
	{
		soundDropBall = GameObject.FindWithTag("GameManager").GetComponent<SoundBreaking>();
		updateScore = GameObject.FindWithTag("UI").GetComponent<UpdateScore>();
		mainCube = GetComponentInParent<MainCube>();

//		Debug.Log(cube);
//		Debug.Log(mainCube);

	}

	void OnCollisionEnter(Collision collider)
	{
//		if (!isCollided)
//		{
		if (collider.gameObject.CompareTag("Player") && !isCollided) {
				soundDropBall.PlayDropBall ();
				GameStateManager.HighScore++;
				updateScore.ChangeLiveScore ();
			mainCube.PulseCube();

				if (OnCamMove != null) {
					OnCamMove ();
				}
				if (OnPlayerEnter != null) {
					OnPlayerEnter ();	
				}	
				isCollided = true;
		}
//		else if(collider.gameObject.CompareTag("Obstacle")){
//			soundDropBall.PlayLowDropBall();
//		}

//			isCollided = true;
//		}
	}
		
}
