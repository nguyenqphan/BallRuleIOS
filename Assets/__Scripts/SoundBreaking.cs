﻿using UnityEngine;
using System.Collections;

public class SoundBreaking : MonoBehaviour {

	public AudioClip breakingDimond;
	public AudioClip ballExplodeClip;

	private AudioSource breakingSource;
	private AudioSource ballExplodeSoure;

	public AudioClip cubeClick;
	private AudioSource cubeClickSource;

	//public GameObject player;
	public AudioClip ballDropClip;
	private AudioSource ballDropSource;

	public AudioClip waterClip;
	private AudioSource waterSource;

//	public AudioClip obstacleDropClip;
//	private AudioSource obstacleDropSource;

	void Awake()
	{
		breakingSource = GetComponent<AudioSource>();
		ballExplodeSoure = GetComponent<AudioSource>();
		cubeClickSource = GetComponent<AudioSource>();
		ballDropSource = GetComponent<AudioSource>();
		waterSource = GetComponent<AudioSource>();
//		obstacleDropSource = GetComponent<AudioSource>();

	}
//
//	public void PlayObastacleDrop()
//	{
////		obstacleDropSource.PlayOneShot(obstacleDropClip, 1f);
//	}

	public void PlayBreakingDimond()
	{
		breakingSource.PlayOneShot(breakingDimond, 0.7f);
	}

	public void PlayExplodeBall()
	{
		ballExplodeSoure.PlayOneShot(ballExplodeClip, 1f);
	}

	public void PlayCubeClick()
	{
		cubeClickSource.PlayOneShot(cubeClick, 0.5f);
	}

	public void PlayDropBall()
	{
		ballDropSource.PlayOneShot(ballDropClip, 0.5f);
	}

	public void PlayLowDropBall()
	{
		ballDropSource.PlayOneShot(ballDropClip, 0.1f);
	}

	public void PlayWaterSound()
	{
		waterSource.PlayOneShot(waterClip, 0.5f);
	}


	public void PlayLowWaterSound()
	{
		waterSource.PlayOneShot(waterClip, 0.2f);
	}
}
