using UnityEngine;
using System.Collections;

public struct FlashingP{
	public bool isFlashing;								//The Cube is flashing
	public float timeFlashing;							//Time to flash the cube
	public float speedFlashing;							//Speed of flashing
	public int countFlashing;							//Number of times to flash
	public Renderer mesh;								//Reference to the Renderer
}

public class Flashing : MonoBehaviour {

	FlashingP flashingP;

	void Awake()
	{
		flashingP.mesh = gameObject.GetComponentInChildren<Renderer> ();				//Get the renderer of the cube to change its color later
	}

	void Start()
	{
		flashingP.timeFlashing = 0f;					//Initialize flashing time
		flashingP.speedFlashing = 1f;					//Initialize flashing speed
	}
		
	public void StartFlashing()
	{
		//Reset initial values 
		flashingP.countFlashing = 0;													
		flashingP.isFlashing = true;
		flashingP.timeFlashing = 0;
		StopAllCoroutines();
		StartCoroutine(FlashingCube());
	}


	private IEnumerator FlashingCube()
	{
		while (flashingP.isFlashing) 
		{
			flashingP.timeFlashing += Time.deltaTime * flashingP.speedFlashing;									//Increase flashing time

				if (flashingP.timeFlashing < 0.4 && flashingP.countFlashing < 3) 
				{
//					flashingP.mesh.material.SetColor ("_Emission", new Color (1f, 1f, 1f, 1f));
					flashingP.mesh.material.SetColor ("_Emission", new Color (0.2f, 0.2f, 0.2f, 0.2f));			//Set the color for the renderer
				} 
				else if (flashingP.timeFlashing >= 0.4f) 
				{
					flashingP.mesh.material.SetColor ("_Emission", new Color (0f, 0f, 0f, 0f));						//Sett the color for the rendere
					
					//Safe condition. Make sure the the cube does not falsh more than three times
					if (flashingP.timeFlashing >= 1) {
						flashingP.timeFlashing = 0f;	
						flashingP.countFlashing++;
						}
					}
		
			yield return 0;
		}
	
	}
		
}
