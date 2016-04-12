using UnityEngine;
using System.Collections;

public struct ScallerP
{
	public UpdateScore updateScore;
	public ShowPanels showPanels;
	public int ballTime;
	public float scalingSpeed;
	public float doubleSize;
	public float oneHalf;
	public float newScale;
}

public class PlayerScaler : MonoBehaviour {

	public ScallerP scallerP;

	void OnEnable()
	{
		Ball.Scalling += StartScaling;
	}
	void OnDisable()
	{
		Ball.Scalling -= StartScaling;
	}

	void Awake()
	{
		scallerP.showPanels = GameObject.FindWithTag("UI").GetComponent<ShowPanels>();
		scallerP.updateScore = GameObject.FindWithTag("UI").GetComponent<UpdateScore>();
			
	}

	// Use this for initialization
	void Start () {

		scallerP.ballTime = 30;
		scallerP.scalingSpeed = 1f;
		scallerP.doubleSize = 2f;
		scallerP.oneHalf = 1.5f;
		if(GameStateManager.Instance.IsChallenged)
		{
			gameObject.transform.localScale = new Vector3(1.5f, 1.5f, 1.5f);
		}
	}

	public void StartScaling(GameObject other)
	{
		StopAllCoroutines();
		StartCoroutine(ScalePlayer(other));
	}
		
	IEnumerator ScalePlayer(GameObject other)
	{
		scallerP.showPanels.scaleText.SetActive(true);										
		while(transform.localScale.x < (other.gameObject.CompareTag("DoubleSize") ? scallerP.doubleSize : scallerP.oneHalf ))
		{
			scallerP.newScale = transform.localScale.x + Time.deltaTime * scallerP.scalingSpeed ;
			transform.localScale = new Vector3(scallerP.newScale, scallerP.newScale, scallerP.newScale);
			yield return new WaitForFixedUpdate();
		}
			
		StartCoroutine(TimeCounter(other));
	}

	IEnumerator TimeCounter(GameObject other)
	{
		while(GameStateManager.Instance.BallTimer > 0  )
		{
			scallerP.updateScore.LiveTime();
			yield return new WaitForSeconds(1f);
			GameStateManager.Instance.BallTimer -= 1;


		}
		scallerP.showPanels.scaleText.SetActive(false);
		GameStateManager.Instance.BallTimer = scallerP.ballTime;
		scallerP.updateScore.LiveTime();
		StartCoroutine(ScaleBack(other));
	}

	IEnumerator ScaleBack(GameObject other)
	{
		while(transform.localScale.x > 1)
		{
			scallerP.newScale = transform.localScale.x - Time.deltaTime * scallerP.scalingSpeed;
			transform.localScale = new Vector3(scallerP.newScale, scallerP.newScale, scallerP.newScale);
			yield return null;
		}
	}

}
