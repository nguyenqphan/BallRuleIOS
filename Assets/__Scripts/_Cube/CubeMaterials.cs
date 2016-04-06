using UnityEngine;
using System.Collections;

public class CubeMaterials : MonoBehaviour {

	private int matIndex = 0;
	public Material[] cubeMats;

	private Renderer renderMaterial;


	void Awake()
	{
		renderMaterial = GetComponent<Renderer>();

	}

	// Use this for initialization
	void Start () {
		if(GameStateManager.Instance.IsChallenged){
			matIndex = 6;
		}
		else{
			matIndex = 0;
		}
			
	
		renderMaterial.material = cubeMats[GameStateManager.Instance.SceneMaterialNum + matIndex];
	}
}
