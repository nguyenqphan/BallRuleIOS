using UnityEngine;
using System.Collections;

public class PlayerMaterials : MonoBehaviour {

	public Material[] materials;
	private Renderer renderMaterial;
	private int matIndex = 0;

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

		renderMaterial.material = materials[GameStateManager.Instance.SceneMaterialNum + matIndex];
	}

}
