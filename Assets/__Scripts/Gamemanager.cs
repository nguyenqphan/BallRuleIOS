using UnityEngine;
using System.Collections;

public class Gamemanager : MonoBehaviour {

	// Use this for initialization
	void Start () {
		if(GameStateManager.Instance.IsChallenged)
		{
//			Time.timeScale = 0;
		}
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
