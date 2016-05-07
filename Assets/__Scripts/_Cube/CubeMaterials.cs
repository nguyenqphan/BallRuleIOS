using UnityEngine;
using System.Collections;


//In charge the materials of the cubes
public class CubeMaterials : MonoBehaviour {

	private int matIndex = 0;										//the index of the cube material						
	public Material[] cubeMats;										//an array of index materials

	private Renderer renderMaterial;								


	void Awake()
	{
		renderMaterial = GetComponent<Renderer>();

	}

	// Use this for initialization
	void Start () {

		//if Challenge mode is enableb, change the material set.
		if(GameStateManager.Instance.IsChallenged){
			matIndex = 6;											//start 
		}
		else{
			matIndex = 0;
		}

		renderMaterial.material = cubeMats[GameStateManager.Instance.SceneMaterialNum + matIndex];
	}
}
