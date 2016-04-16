using UnityEngine;
using System.Collections;


//A struct to store the variable of the ScalingBall
public struct BallP
{
	public float movingSpeed;					//The Speed of the ball
	public float scale;							//The scale of the ball
	public float startScale;					//The initile scaling value of the ball
	public bool isBigger;						//Is the ball scaling bigger
	public float scaleSpeed;					//The speed of scaling	
	public float newScale;						//new scale value
	public SoundBreaking ballExplodeClip;		//Play this Sound when colliding with Player	
	public Transform scaleTransform;
}

public class Ball : MonoBehaviour {

	public delegate void ActionScaling(GameObject gameObject);
	public static event ActionScaling Scalling;
	public delegate void ActionExplode(Transform explodeTransform);
	public static event ActionExplode ExplodeBall;

	BallP ballP;

	void Awake()
	{
		ballP.ballExplodeClip = GameObject.FindWithTag("GameManager").GetComponent<SoundBreaking>();
		ballP.scaleTransform = GetComponent<Transform>();
	}

	void Start()
	{
		//Initialize ball variables
		ballP.movingSpeed = 20f;
		ballP.scale = 0.5f;
		ballP.isBigger = true;
		ballP.scaleSpeed = 1f;
	}


	void OnTriggerEnter(Collider other){

		if(other.gameObject.CompareTag("Player"))
		{
			ballP.ballExplodeClip.PlayExplodeBall();					//Play sound effect
			gameObject.SetActive(false);								//Set Ball inactive in the scene
			if(ExplodeBall!= null)
			{
				ExplodeBall(ballP.scaleTransform);								//Play ball exploding effect
			}
				
			if(Scalling != null)
			{	
				//Alternatively change Scaling Ball tag to Onehalf or DoubleSize
				if(gameObject.CompareTag("OneHalf"))					
				{
					gameObject.tag = "DoubleSize";
				}else if(gameObject.CompareTag("DoubleSize"))
				{
					gameObject.tag = "OneHalf";
				}
			
				Scalling(gameObject);

			}
		}else if(other.gameObject.CompareTag("ComboCube") || other.gameObject.CompareTag("Obstacle") ){
			if(ExplodeBall != null)
			{
				gameObject.SetActive(false);
				ExplodeBall(ballP.scaleTransform);
			}
		}
	}

	public void MoveBall(Vector3 targetPos)
	{
		StartCoroutine(moving(targetPos));
	}


	//Move the Ball to a target position
	private IEnumerator moving(Vector3 targetPos)
	{
		while(ballP.scaleTransform.position != targetPos)
		{
			ballP.scaleTransform.position = Vector3.MoveTowards(ballP.scaleTransform.position, targetPos, ballP.movingSpeed * Time.deltaTime);
			yield return null;
		}

		StartCoroutine(pulse());			//Pulse the scaling ball after it gets to the target position

	}

	private IEnumerator pulse()
	{
//		Debug.Log("Start pulsing");
		ballP.startScale = ballP.scaleTransform.localScale.x;
		while(true)
		{
			ballP.newScale = ballP.scaleTransform.localScale.x + (ballP.isBigger ? 1 : -1) * ballP.scaleSpeed * Time.deltaTime;

			if(ballP.newScale > ballP.startScale + ballP.scale)
			{
				ballP.newScale = ballP.startScale +ballP. scale;
				ballP.isBigger = false;
			}else if(ballP.newScale < ballP.startScale)
			{
				ballP.newScale = ballP.startScale;
				ballP.isBigger = true;
			}
				
			ballP.scaleTransform.localScale = new Vector3(ballP.newScale, ballP.newScale, ballP.newScale);
			yield return new WaitForFixedUpdate();
		}
	}

	public void SetBallInactive(GameObject o)
	{
		StartCoroutine(BallInactive(o));
	}

	private IEnumerator BallInactive(GameObject o)
	{
		yield return new WaitForSeconds(45f);							//deactivate the scalling ball if it does not get deactivated  by the player
		if(o.activeInHierarchy)
		{
			gameObject.SetActive(false);
//			if(EmissiveDiamond != null)
//			{
//				EmissiveDiamond(gameObject);
//			}

		}

	}
}
