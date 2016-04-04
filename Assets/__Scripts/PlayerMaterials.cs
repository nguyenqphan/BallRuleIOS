﻿using UnityEngine;
using System.Collections;

public class PlayerMaterials : MonoBehaviour {

	public Material[] materials;
	private Renderer renderMaterial;

	void Awake()
	{
		renderMaterial = GetComponent<Renderer>();
	}

	// Use this for initialization
	void Start () {
		renderMaterial.material = materials[GameStateManager.Instance.SceneMaterialNum];
	}

}
