using UnityEngine;
using System.Collections;

//Use struct to store variables to reduce Garbage Collection
public struct CubeP{
	public float rotateSpeed;					//The speed of the rotation
	public bool isRotating;						//The Cube is rotating
	public float startTime;						//Keep track of the degree of the rotation

	public bool isOneRound;						//Make sure the cube rorates only one round
	public Transform cubeTransform;
	public Transform cubeParentTrans;
}			

public class Cube : MonoBehaviour {
	CubeP cubeP;

	void Awake()
	{
		cubeP.cubeTransform = GetComponent<Transform>();
		cubeP.cubeParentTrans = GetComponentInParent<Transform>();
	}

	void Start()
	{
		///initialize the variables
		cubeP.rotateSpeed = 30f;
		cubeP.isRotating = true;

	}

	//A method to rotate the cube
	public void RotateCube(float dirToRotate)
	{
//		Debug.Log("Rotate");
		StopAllCoroutines();										//Rotate the cube
		cubeP.isRotating = true;
		cubeP.startTime = 0;	
		//set the rotate degree to zero
		StartCoroutine(StartToRotate(dirToRotate));					//use coroutine to call a function
	}

	//Rotate the cube
	public IEnumerator StartToRotate(float dirToRotate)
	{
		while (cubeP.isRotating) {
			cubeP.cubeTransform.Rotate (cubeP.cubeTransform.forward * dirToRotate, Time.deltaTime * cubeP.rotateSpeed, Space.World);        	//rotate the cube
			cubeP.startTime += Time.deltaTime * cubeP.rotateSpeed;															//keep track of the degree of rotation

			if (cubeP.startTime >= 30) {																					//condition to stop the rotation of the cube
				cubeP.isRotating = false;																				  
				cubeP.startTime = 0;
			}

			yield return new WaitForFixedUpdate();								
		}
		cubeP.isRotating = !cubeP.isRotating;																				//set isRotating = true
	}
		
}


