using UnityEngine;
using System.Collections;


public struct MainCubeP{
	public float movingSpeed;
	public Transform mainCubeTransform;
}

public class MainCube : MonoBehaviour {

//		public GameObject leftWall;
//		public GameObject rightWall;
//
//		public void LeftWallOn()
//		{
//			leftWall.SetActive(true);
//			rightWall.SetActive(false);
//		}
//		public void RightWallOn()
//		{
//			leftWall.SetActive(false);
//			rightWall.SetActive(true);
//		}

	MainCubeP cubeP;

	void Awake()
	{
		cubeP.mainCubeTransform = GetComponent<Transform>();
	}

	void Start()
	{
		cubeP.movingSpeed = 20f;
	}
		

	//Call this method to move a cube to desired target
	public void MoveCube(Vector3 targetPos)
	{
		StartCoroutine(StartToMove(targetPos));
	}

	public IEnumerator StartToMove(Vector3 targetPos)
	{
		while (cubeP.mainCubeTransform.position != targetPos) {
			cubeP.mainCubeTransform.position = Vector3.MoveTowards (cubeP.mainCubeTransform.position, targetPos, cubeP.movingSpeed * Time.deltaTime);	//Moving to the target

			yield return null;	
		}

//		if(gameObject.transform.position.x > 0)
//		{
//			RightWallOn();
//		}
//		if(gameObject.transform.position.x < 0)
//		{
//			LeftWallOn();
//		}
			
	}
}
