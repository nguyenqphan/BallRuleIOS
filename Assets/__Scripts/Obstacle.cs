//using UnityEngine;
//using System.Collections;
//
//public class Obstacle : MonoBehaviour {
//
//	private SoundBreaking soundBreaking;
//	private bool isCollidedPlayer = false;
//
//	void Awake()
//	{
//		soundBreaking = GameObject.FindWithTag("GameManager").GetComponent<SoundBreaking>();
//	}
//
//	void OnCollisionEnter(Collision collider)
//	{
//		if(collider.gameObject.CompareTag("Player") && !isCollidedPlayer){
//			soundBreaking.PlayObastacleDrop();
//			isCollidedPlayer = false;
//		}
//	}
//}
