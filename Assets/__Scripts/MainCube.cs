using UnityEngine;
using System.Collections;


public struct MainCubeP{
	public float movingSpeed;
	public Transform mainCubeTransform;

	public float startingY;						//Position of the Current Cube
	public float newY;							//Position of the cube after it moves
	public bool isMovingDown;					//Is the cube moving down
	public bool isMovingUp;						//Is the cube moving up
	public float movementDistance;				//Distance to move back and forth
	public float floatSpeed;					//The speed of floating cube

	public Transform cubeParentTrans;
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

		cubeP.cubeParentTrans = transform.gameObject.GetComponentInParent<Transform>();
//		Debug.Log(cubeP.cubeParentTrans.name);
	}

	void Start()
	{
		cubeP.movingSpeed = 20f;

		cubeP.floatSpeed = 5f;
		cubeP.movementDistance = 0.2f;
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

	public void PulseCube()
	{

		cubeP.isMovingUp = true;
		cubeP.isMovingDown = true;
		StartCoroutine(StartPulse());
	}


	//Make the Cube float up and down for one round
	private IEnumerator StartPulse()
	{
		cubeP.startingY = cubeP.cubeParentTrans.position.y;																				//Staring y position of the cube.
		while (cubeP.isMovingDown) {																						//keep moving the cube down...
			cubeP.newY = cubeP.cubeParentTrans.position.y - cubeP.movementDistance * cubeP.floatSpeed * Time.deltaTime;

			if (cubeP.newY < cubeP.startingY  - cubeP. movementDistance) {													//condition to stop moving the cube down
				cubeP.isMovingDown = false;						
			} 
			//
			cubeP.cubeParentTrans.position = new Vector3 (cubeP.cubeParentTrans.position.x, cubeP.newY, cubeP.cubeParentTrans.position.z);						//new position the the cube

			yield return new WaitForFixedUpdate();
		}

		while (cubeP.isMovingUp) {																							//...moving the cube back up again
			cubeP.newY = cubeP.cubeParentTrans.position.y + cubeP.movementDistance * cubeP.floatSpeed * Time.deltaTime;

			if (cubeP.newY > cubeP.startingY) {													//condition to stop moving the cube up
				cubeP.isMovingUp = false;
			} 
			//
			cubeP.cubeParentTrans.position = new Vector3 (cubeP.cubeParentTrans.position.x, cubeP.newY, cubeP.cubeParentTrans.position.z);						//new position for the cube

			yield return new WaitForFixedUpdate();
		}

	}
}
