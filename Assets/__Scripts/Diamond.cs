using UnityEngine;
using System.Collections;


public struct DiamondProperty{
	public bool isSpinning;
	public bool isFloating;
	public float movingSpeed;

	public float floatSpeed;
	public float movementDistance;
	public float startingY;
	public bool isMovingUp;
	public float newY;
	public SoundBreaking soundBreakingDiamond;
	public UpdateScore updateScore;
	public Destroyer destroyer;
	public Transform transformD;

}

public class Diamond : MonoBehaviour {

	private DiamondProperty diamondP;

	public delegate void ActionBreaking(Transform diaTransform);
	public static event ActionBreaking BreakingDiamond;

	public delegate void EmissiveAction(Transform diaTransform);
	public static event EmissiveAction EmissiveDiamond;

	void Awake()
	{
		diamondP.soundBreakingDiamond = GameObject.FindWithTag("GameManager").GetComponent<SoundBreaking>();
		diamondP.updateScore = GameObject.FindWithTag("UI").GetComponent<UpdateScore>();
		diamondP.destroyer = GameObject.FindWithTag("DestroyerBall").GetComponent<Destroyer>();
		diamondP.transformD = GetComponent<Transform>();
	}
		

	// Use this for initialization
	void Start () {
		
		diamondP.isSpinning = true;
		diamondP.isFloating =  true;
		diamondP.movingSpeed = 20f;
		diamondP.floatSpeed = 1f;
		diamondP.movementDistance = 2f;
		diamondP.isMovingUp = true;
	}



	void OnTriggerEnter(Collider collider)
	{
		if (collider.gameObject.CompareTag("Player"))
		{
			if(GameStateManager.Instance.IsChallenged && !GameStateManager.Instance.IsOutOfTime)
			{
				GameStateManager.Instance.ChallengeTimer = 10;
				diamondP.destroyer.ResetTimerChallenge();
				diamondP.updateScore.TimerChallenge();
			}

			Pickup();
			if(BreakingDiamond != null)
			{
				BreakingDiamond(diamondP.transformD);
			}

		}
		else if(collider.gameObject.CompareTag("ComboCube") || collider.gameObject.CompareTag("Obstacle")){
			
			if(BreakingDiamond != null)
			{
				diamondP.soundBreakingDiamond.PlayBreakingDimond();
				BreakingDiamond(diamondP.transformD);
				gameObject.SetActive(false);
			}
		}
	}
	
	private void Pickup()
	{
		if(diamondP.transformD.position.x > -4.5f && diamondP.transformD.position.x < 4.5f){
			GameStateManager.HighScore = GameStateManager.HighScore+ 2;
		}else{
			GameStateManager.HighScore = GameStateManager.HighScore + 4;
		}

		diamondP.soundBreakingDiamond.PlayBreakingDimond();
//		diaDeactivate.resetTime = 0f;

		diamondP.updateScore.ChangeLiveScore();
		gameObject.SetActive(false);
	}
	
	private IEnumerator Spin()
	{
		while(diamondP.isSpinning)
		{
			transform.Rotate (transform.up, 360 * .5f * Time.deltaTime, Space.World);
			yield return new WaitForFixedUpdate();
		}
	}
	private IEnumerator Spin2()
	{
		while(diamondP.isSpinning)
		{
			diamondP.transformD.Rotate  (transform.forward, 360 * .5f * Time.deltaTime, Space.World);
			yield return new WaitForFixedUpdate();
		}
	}

	private IEnumerator Float2()
	{
		diamondP.startingY = diamondP.transformD.position.y;
		while (diamondP.isFloating) {
			diamondP.newY = diamondP.transformD.position.y + (diamondP.isMovingUp ? 1 : -1)  * diamondP.movementDistance * diamondP.floatSpeed * Time.deltaTime;
			
			if (diamondP.newY > diamondP.startingY +diamondP. movementDistance) {
				diamondP.newY = diamondP.startingY + diamondP.movementDistance;
				diamondP.isMovingUp = false;
			} else if (diamondP.newY < diamondP.startingY) {
				diamondP.newY = diamondP.startingY;
				diamondP.isMovingUp = true;
			}
			
			diamondP.transformD.position = new Vector3 (diamondP.transformD.position.x, diamondP.newY, diamondP.transformD.position.z);

			yield return new WaitForFixedUpdate();
		}
	}

	private IEnumerator Float()
	{
		diamondP.startingY = transform.position.y;
		while (diamondP.isFloating) {
			diamondP.newY = transform.position.y + (diamondP.isMovingUp ? 1 : -1)  * diamondP.movementDistance * diamondP.floatSpeed * Time.deltaTime;

			if (diamondP.newY > diamondP.startingY +diamondP. movementDistance) {
				diamondP.newY = diamondP.startingY + diamondP.movementDistance;
				diamondP.isMovingUp = false;
			} else if (diamondP.newY < diamondP.startingY) {
				diamondP.newY = diamondP.startingY;
				diamondP.isMovingUp = true;
			}

			transform.position = new Vector3 (transform.position.x, diamondP.newY, transform.position.z);

			yield return new WaitForFixedUpdate();
		}
	}

	public void MoveDiamond(Vector3 targetPos)
	{
		StartCoroutine(moving(targetPos));
	}

	private IEnumerator moving(Vector3 targetPos)
	{

		while(transform.position != targetPos)
		{
			transform.position = Vector3.MoveTowards(transform.position, targetPos, diamondP.movingSpeed * Time.deltaTime);
			yield return new WaitForFixedUpdate();
		}

		if (!GameStateManager.Instance.IsChallenged || !GameStateManager.Instance.IsStarted) {
			StartCoroutine (Spin2 ());
		}else{
			if (GameStateManager.Instance.IsStarted) {
				StartCoroutine (Spin ());
			}
		}
//
//		if (!GameStateManager.Instance.IsChallenged) {
//			StartCoroutine (Float2 ());
//		}
	}

	public void SetDiaInactive(GameObject o)
	{
		StartCoroutine(DiaInactive(o));
	}

	private IEnumerator DiaInactive(GameObject o)
	{
		yield return new WaitForSeconds(15f);
		if(o.activeInHierarchy)
		{
			gameObject.SetActive(false);
			if(EmissiveDiamond != null)
			{
				EmissiveDiamond(diamondP.transformD);
			}

		}

	}

	
}
