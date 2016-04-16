using UnityEngine;
using System.Collections;
using System.Collections.Generic;


//Deactivate attached gameobject after 12 seconds
public class Deactivator : MonoBehaviour {
	
	public delegate void EffectAction(Transform deactivateTrans);
	public static event EffectAction Emissive;

	private float time = 1f;
	private float resetTime = 0f;
	private Flashing flashing;
	private EventManager eventManager;

	private bool isFlashing = false;
	private Transform deactivateTransform;

	void Awake()
	{
		flashing = GetComponent<Flashing>();
		eventManager = GetComponentInChildren<EventManager>();
		deactivateTransform = GetComponent<Transform>();
	}
		
	// Update is called once per frame
	void Update () {
		//Each comboCube can stay active in the scene for only 12 seconds
		if(gameObject.activeInHierarchy)
		{
			resetTime += Time.deltaTime * time;

			//after 9 seconds, flash the cube for 3 seconds.
			if(resetTime > 9f && !isFlashing)
			{
				flashing.StartFlashing();
				isFlashing = true;
			}
				
			if(resetTime >= 12f)
			{
				resetTime = 0f;								//reset time for the cube before deactivate it
				isFlashing = false;							//ready to flash again
				eventManager.isCollided = false;			//Only detect collision one
				gameObject.SetActive(false);				//set the Cube inactive
				if(Emissive != null)
				{
					Emissive(deactivateTransform);					//Play Cube Deactivation Effect
				}

			}

		}
	}
}
