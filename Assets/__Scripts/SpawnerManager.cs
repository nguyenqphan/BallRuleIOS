using UnityEngine;
using System.Collections;
using System.Collections.Generic;

//A struct to store the varibales
public struct SpawnerP{

	public int smallestNum;				
	public bool matchSmallestNum;
	//	public int randomIncrease;
	public int pooledAmount;					//The amount of cube 
	public int ballAmount;						//the amount of ball
	public int diamondAmount;					//The amount of diamond
	public int randomCubeNum;					//Choose a cube to spawn based on a random value from 0 to 2
	public int indexSwitch;						//Position for the cube(left or right)
	public Vector3 position;					//position fo the cube 
	public float fixedY;						
	public float fixedX;
	//	public float speedTime;						//
	public bool firstSpawn;
	public int spawnNumber;
	public bool matchNum;
	public MainCube mainCube;
	public Cube cube;
	public Diamond diamondScript;
	public Ball ballScript;
	public SpawnerManager spawnManager;
	public Transform spawnerTransform;

}

public class SpawnerManager : MonoBehaviour {

	SpawnerP spawnP;

	public Transform obstacleLeftPos;
	public Transform obstacleRightPos;

	public GameObject cubeToInstantiate;
	public GameObject cubeParticle;
	public GameObject diamond;
	public GameObject diaEmissive;
	public GameObject diaBreaking;
	public GameObject ball;
	public GameObject ballExplode;
	public GameObject smallCube;
	public GameObject mallestCube;
	public GameObject star;
	public GameObject ballObstacle;
//
	private Transform cubeTrans;
	private Transform cubeParticleTrans;
	private Transform diamondTrans;
	private Transform diaEmissiveTrans;
	private Transform diaBreakingTrans;
	private Transform ballTrans;
	private Transform ballExplodeTrans;
	private Transform smallCubeTrans;
	private Transform smallestCubeTrans;
	private Transform starTrans;
	private Transform ballObstacleTrans;

	private List<GameObject> cubeList;
	private List<GameObject> particleList;
	private List<GameObject> diamondList;
	private List<GameObject> diaEmissiveList;
	private List<GameObject> diaBreakingList;
	private List<GameObject> ballList;
	private List<GameObject> ballExplodeList;
	private List<GameObject> smallCubeList;
	private List<GameObject> smallestCubeList;
	private List<GameObject> starList;
	private List<GameObject> ballObstacleList;

	private List<Transform> cubeTransList;
	private List<Transform> cubeParticleTransList;
	private List<Transform> diamondTransList;
	private List<Transform> diaEmissTransList;
	private List<Transform> diaBreakingTransList;
	private List<Transform> ballTransList;
	private List<Transform> ballExplodeTransList;
	private List<Transform> smallCubeTransList;
	private List<Transform> smallestCubeTransList;
	private List<Transform> starTransList;
	private List<Transform> ballObstacleTransList;

	void OnEnable()
	{

		EventManager.OnPlayerEnter += StartSpawnCube;
		Deactivator.Emissive += PlayCubeEffect;
		Diamond.EmissiveDiamond += PlayerDiamondEmissive;
		Diamond.BreakingDiamond += PlayDiamondBreaking;
		Ball.ExplodeBall += PlayExplodeBall;
	}

	void OnDisable()
	{
		EventManager.OnPlayerEnter -= StartSpawnCube;
		Deactivator.Emissive -= PlayCubeEffect;
		Diamond.EmissiveDiamond -= PlayerDiamondEmissive;
		Diamond.BreakingDiamond -= PlayDiamondBreaking;
		Ball.ExplodeBall -= PlayExplodeBall;
	}

	void Awake()
	{
		spawnP.spawnManager = GetComponent<SpawnerManager>();
		spawnP.spawnerTransform = GetComponent<Transform>();
	}

	void Start()
	{
		//		ballNumber = RandomSpawnNum();

		spawnP.pooledAmount = 4;
		spawnP.ballAmount = 2;
		spawnP.diamondAmount = 8;
		spawnP.indexSwitch = 1;
		spawnP.fixedY = 4f;
		//		spawnP.speedTime = 1f;
		spawnP.firstSpawn = true;
		spawnP.spawnNumber = 0;
		spawnP.randomCubeNum = 0;
		spawnP.smallestNum = 0;

		cubeList = new List<GameObject>();
		particleList = new List<GameObject>();
		diamondList = new List<GameObject>();
		diaEmissiveList = new List<GameObject>();
		diaBreakingList = new List<GameObject>();
		ballList = new List<GameObject>();
		ballExplodeList = new List<GameObject>();
		smallCubeList = new List<GameObject>();
		smallestCubeList = new List<GameObject>();
		starList = new List<GameObject>();

		cubeTransList = new List<Transform>();
		cubeParticleTransList = new List<Transform>();
		diamondTransList = new List<Transform>();
		diaEmissTransList = new List<Transform>();
		diaBreakingTransList = new List<Transform>();
		ballTransList = new List<Transform>();
		ballExplodeTransList = new List<Transform>();
		smallCubeTransList = new List<Transform>();
		smallestCubeTransList = new List<Transform>();
		starTransList = new List<Transform>();




		if(GameStateManager.Instance.IsObstacle)
		{
			ballObstacleList = new List<GameObject>();
			ballObstacleTransList = new List<Transform>();
			for(int i = 0; i < 6; i++)
			{
				GameObject newballObstacle = Instantiate(ballObstacle, spawnP.spawnerTransform.position, Quaternion.identity) as GameObject;
				newballObstacle.SetActive(false);
				ballObstacleList.Add(newballObstacle);


				ballObstacleTrans = newballObstacle.GetComponent<Transform>();
				ballObstacleTransList.Add(ballObstacleTrans);
			}
		}


		for(int i = 0; i < spawnP.pooledAmount; i++)
		{
			GameObject newCube = Instantiate(cubeToInstantiate, spawnP.spawnerTransform.position, Quaternion.identity) as GameObject;
			GameObject newSmallCube = Instantiate(smallCube, spawnP.spawnerTransform.position, Quaternion.identity) as GameObject;
			GameObject newSmallestCube = Instantiate(mallestCube, spawnP.spawnerTransform.position, Quaternion.identity) as GameObject;
			GameObject newParticle = Instantiate(cubeParticle, spawnP.spawnerTransform.position, Quaternion.identity) as GameObject;

			newCube.SetActive(false);
			newSmallCube.SetActive(false);
			newSmallestCube.SetActive(false);
			newParticle.SetActive(false);

			cubeList.Add(newCube);
			smallCubeList.Add(newSmallCube);
			smallestCubeList.Add(newSmallestCube);
			particleList.Add(newParticle);


			cubeTrans = newCube.GetComponent<Transform>();
			smallCubeTrans = newSmallCube.GetComponent<Transform>();
			smallestCubeTrans = newSmallestCube.GetComponent<Transform>();
			cubeParticleTrans = newParticle.GetComponent<Transform>();

			cubeTransList.Add(cubeTrans);
			smallCubeTransList.Add(smallCubeTrans);
			smallestCubeTransList.Add(smallestCubeTrans);
			cubeParticleTransList.Add(cubeParticleTrans);

//			Debug.Log(cubeTransList[i]);

		}

		for(int i = 0; i < spawnP.diamondAmount; i++)
		{
			GameObject newDiamond = Instantiate(GameStateManager.Instance.IsChallenged ? star :diamond , spawnP.spawnerTransform.position, Quaternion.identity) as GameObject;
			GameObject newDiaEmissive = Instantiate(diaEmissive, spawnP.spawnerTransform.position, Quaternion.identity) as GameObject;
			GameObject newDiaBreaking = Instantiate(diaBreaking, spawnP.spawnerTransform.position, Quaternion.identity) as GameObject;

			newDiamond.SetActive(false);
			newDiaEmissive.SetActive(false);
			newDiaBreaking.SetActive(false);

			diamondList.Add(newDiamond);
			diaEmissiveList.Add(newDiaEmissive);
			diaBreakingList.Add(newDiaBreaking);

			diamondTrans = newDiamond.GetComponent<Transform>();
			diaEmissiveTrans = newDiaEmissive.GetComponent<Transform>();
			diaBreakingTrans = newDiaBreaking.GetComponent<Transform>();

			diamondTransList.Add(diamondTrans);
			diaEmissTransList.Add(diaEmissiveTrans);
			diaBreakingTransList.Add(diaBreakingTrans);
		}

		if (!GameStateManager.Instance.IsChallenged) {
			for (int j = 0; j < spawnP.ballAmount; j++) {
				GameObject newBall = Instantiate (ball, spawnP.spawnerTransform.position, Quaternion.identity) as GameObject;
				GameObject newBallExplode = Instantiate (ballExplode, spawnP.spawnerTransform.position, Quaternion.identity) as GameObject;

				newBall.SetActive (false);
				newBallExplode.SetActive (false);

				ballList.Add (newBall);
				ballExplodeList.Add (newBallExplode);

				ballTrans = newBall.GetComponent<Transform>();
				ballExplodeTrans = newBallExplode.GetComponent<Transform>();

				ballTransList.Add(ballTrans);
				ballExplodeTransList.Add(ballExplodeTrans);
			}
		}
	} 

	public void PlayCubeEffect(Transform deactivatorTrans)
	{
		//StopAllCoroutines();
		StartCoroutine(InstantiateEffect(deactivatorTrans));

	}


	private IEnumerator InstantiateEffect(Transform deactivatorTrans)
	{
		for(int i = 0; i < particleList.Count; i++)
		{
			if(!particleList[i].activeInHierarchy)
			{
				cubeParticleTransList[i].position = deactivatorTrans.position;
				cubeParticleTransList[i].rotation = deactivatorTrans.rotation;

//				particleList[i].transform.position = deactivatorTrans.position;
//				particleList[i].transform.rotation = deactivatorTrans.rotation;
				particleList[i].SetActive(true);
				break;
			}
		}

		yield return new WaitForFixedUpdate();

	}

	public void PlayerDiamondEmissive(Transform diaTransform)
	{
		StartCoroutine(InstantiateDiamondEmissive(diaTransform));

	}

	private IEnumerator InstantiateDiamondEmissive(Transform diaTransform)
	{
		for(int i =0; i < diaEmissiveList.Count; i++)
		{
			if(!diaEmissiveList[i].activeInHierarchy)
			{
				diaEmissTransList[i].position = diaTransform.position;
				diaEmissTransList[i].rotation = diaTransform.rotation;
//				diaEmissiveList[i].transform.position = diaTransform.position;
//				diaEmissiveList[i].transform.rotation = diaTransform.rotation;
				diaEmissiveList[i].SetActive(true);											//Play Particle Effect

				break;
			}
		}

		yield return new WaitForFixedUpdate();
	}

	public void PlayExplodeBall(Transform explodeTransform)
	{
		StartCoroutine(InstantiateBallExplode(explodeTransform));
	}

	private IEnumerator InstantiateBallExplode(Transform explodeTransform)
	{
		for(int i = 0; i < ballExplodeList.Count; i++)
		{
			if(!ballExplodeList[i].activeInHierarchy)
			{
				ballExplodeTransList[i].position = explodeTransform.position;
				ballExplodeTransList[i].rotation = explodeTransform.rotation;
//				ballExplodeList[i].transform.position = explodeTransform.position;
//				ballExplodeList[i].transform.rotation = explodeTransform.rotation;
				ballExplodeList[i].SetActive(true);
				break;
			}

		}

		yield return new WaitForFixedUpdate();
	}

	public void PlayDiamondBreaking(Transform diaTransform)
	{
		StartCoroutine(InstantiateDiamondBreaking(diaTransform));
	}

	private IEnumerator InstantiateDiamondBreaking(Transform diaTransform)
	{
		for(int i = 0; i < diaBreakingList.Count; i++)
		{
			if(!diaBreakingList[i].activeInHierarchy)
			{
				diaBreakingTransList[i].position = diaTransform.position;
				diaBreakingTransList[i].rotation = diaTransform.rotation;

//				diaBreakingList[i].transform.position = diaTransform.position;
//				diaBreakingList[i].transform.rotation = diaTransform.rotation;
				diaBreakingList[i].SetActive(true);
				break;
			}
		}

		yield return new WaitForFixedUpdate();
	}

	public void StartSpawnCube()
	{
		if (spawnP.indexSwitch == 1) {
			spawnP.indexSwitch = 0;
			spawnP.fixedX = 2.5f;
		} else {
			if (spawnP.indexSwitch == 0)
				spawnP.indexSwitch = 1;
			spawnP.fixedX = -2.5f;
		}

		spawnP.spawnNumber++;

		//Condition to go check the gravity
		if(spawnP.spawnNumber % 100 == 0)
		{
			ChangeGravity();
		}

		StartCoroutine (InstantiateCube ());	
	}

	Vector3 targetPosition(){

		if(GameStateManager.Instance.IsStarted){
			spawnP.fixedY += -randomFixedY();
		}else{
			spawnP.fixedY += - 5.5f;
		}

		//fixedY += -4.5f;
		return new Vector3(spawnP.fixedX,spawnP.fixedY, 0f);
	}

	Vector3 diamondPos()
	{
		if(spawnP.fixedX > 0)
			return spawnP.position + new Vector3(1.5f, 2.5f, 0f);
		else if(spawnP.fixedX < 0)
			return spawnP.position + new Vector3(-1.5f, 2.5f, 0f);
		return Vector3.zero;										//never reach this statement
	}

	Vector3 diamondPos2()
	{
		if(spawnP.fixedX > 0)
			return spawnP.position + new Vector3(2.5f, 3.0f, 0f);
		else if(spawnP.fixedX < 0)
			return spawnP.position + new Vector3(-2.5f, 3.0f, 0f);
		return Vector3.zero;										//nver reach this statement
	}

	Vector3 diamondPos3()
	{
		if(spawnP.fixedX > 0)
			return spawnP.position + new Vector3(1f, 2.5f, 0f);
		else if(spawnP.fixedX < 0)
			return spawnP.position + new Vector3(-1f, 2.5f, 0f);
		return Vector3.zero;										//never reach this statement
	}

	Vector3 diamondPos4()
	{
		if(spawnP.fixedX > 0)
			return spawnP.position + new Vector3(2f, 3.0f, 0f);
		else if(spawnP.fixedX < 0)
			return spawnP.position + new Vector3(-2f, 3.0f, 0f);
		return Vector3.zero;										//never reach this statement
	}

	Vector3 diamondPos5()
	{
		if(spawnP.fixedX > 0)
			return spawnP.position + new Vector3(0.5f, 2.5f, 0f);
		else if(spawnP.fixedX < 0)
			return spawnP.position + new Vector3(-0.5f, 2.5f, 0f);
		return Vector3.zero;										//never reach this statement
	}

	Vector3 diamondPos6()
	{
		if(spawnP.fixedX > 0)
			return spawnP.position + new Vector3(1.5f, 3.0f, 0f);
		else if(spawnP.fixedX < 0)
			return spawnP.position + new Vector3(-1.5f, 3.0f, 0f);
		return Vector3.zero;										//never reach this statement
	}

	Vector3 ballPos()
	{
		return spawnP.position + new Vector3(0f, 1.5f, 0f );
	}

	Vector3 camPos()
	{
		return 	Vector3.zero	;
	}

	int randomFixedY()
	{
		return Random.Range(5, 10);
	}

	int RandomSmallestNum()
	{
		return Random.Range(0, 5);
	}

	float randonDegree()
	{
		return Random.Range(-40f, 40f);;
	}

	int RandomIncrease()
	{
		return Random.Range(0,2);
	}

	private int RandomSpawnNum()
	{
		return Random.Range(5, 7);
	}

	private int RandomCubeNum()
	{
		return Random.Range(0, 2);
	}

	private IEnumerator InstantiateCube()
	{
		spawnP.position = targetPosition();
		if (spawnP.smallestNum != RandomSmallestNum()) {
			spawnP.matchSmallestNum = false;
			if (spawnP.randomCubeNum == RandomCubeNum ()) {
				spawnP.matchNum = true;
			} else {
				spawnP.matchNum = false;
			}
		}else{
			spawnP.matchSmallestNum = true;
		}

		if (GameStateManager.Instance.IsObstacle) {
			StartCoroutine (InstantiateObstacle ());
		}
		StartCoroutine(InstantiateDiamond());



		//Condition to instantiate a scalling ball
		if(spawnP.spawnNumber % 7 == 0 && !GameStateManager.Instance.IsChallenged)
		{
			StartCoroutine(InstantiateBall());
			spawnP.spawnNumber += RandomIncrease();
		}

		yield return new WaitForSeconds(3f);

		if (!spawnP.matchSmallestNum) {
			if (!spawnP.matchNum) {
				for (int i = 0; i < cubeList.Count; i++) {
					if (!cubeList [i].activeInHierarchy) {
//						cubeList [i].transform.position = spawnP.spawnerTransform.position;
//						cubeList [i].transform.rotation = spawnP.spawnerTransform.rotation;

						cubeTransList[i].position = spawnP.spawnerTransform.position;
						cubeTransList[i].rotation = spawnP.spawnerTransform.rotation;

						cubeList [i].SetActive (true);
						spawnP.mainCube = cubeList [i].GetComponent<MainCube> ();    	//cube.tag
						spawnP.cube = cubeList [i].GetComponentInChildren<Cube> ();

//						spawnP.cube.gameObject.transform.position = spawnP.spawnerTransform.position;
						//				comboCube.gameObject.transform.rotation = Quaternion.Euler(0f, 0f, randonDegree());
						spawnP.cube.gameObject.transform.rotation = Quaternion.Euler (0f, 0f, randonDegree ());
						spawnP.mainCube.MoveCube (spawnP.position);
						break;
					}
				}
			} else {
				for (int i = 0; i < smallCubeList.Count; i++) {
					if (!smallCubeList [i].activeInHierarchy) {
//						smallCubeList [i].transform.position = spawnP.spawnerTransform.position;
//						smallCubeList [i].transform.rotation = spawnP.spawnerTransform.rotation;

						smallCubeTransList[i].position = spawnP.spawnerTransform.position;
						smallCubeTransList[i].rotation = spawnP.spawnerTransform.rotation;

						smallCubeList [i].SetActive (true);
						spawnP.mainCube = smallCubeList [i].GetComponent<MainCube> ();    	//cube.tag
						spawnP.cube = smallCubeList [i].GetComponentInChildren<Cube> ();

//						spawnP.cube.gameObject.transform.position = spawnP.spawnerTransform.position;
						//				comboCube.gameObject.transform.rotation = Quaternion.Euler(0f, 0f, randonDegree());
						spawnP.cube.gameObject.transform.rotation = Quaternion.Euler (0f, 0f, randonDegree ());
						spawnP.mainCube.MoveCube (spawnP.position);

						break;
					}
				}

			}
		}else{
			for (int i = 0; i < smallestCubeList.Count; i++) {
				if (!smallestCubeList [i].activeInHierarchy) {
//					smallestCubeList [i].transform.position = spawnP.spawnerTransform.position;
//					smallestCubeList [i].transform.rotation = spawnP.spawnerTransform.rotation;

					smallestCubeTransList[i].position = spawnP.spawnerTransform.position;
					smallestCubeTransList[i].rotation = spawnP.spawnerTransform.rotation;


					smallestCubeList [i].SetActive (true);
					spawnP.mainCube = smallestCubeList [i].GetComponent<MainCube> ();    	//cube.tag
					spawnP.cube = smallestCubeList [i].GetComponentInChildren<Cube> ();

//					spawnP.cube.gameObject.transform.position = spawnP.spawnerTransform.position;
					//				comboCube.gameObject.transform.rotation = Quaternion.Euler(0f, 0f, randonDegree());
					spawnP.cube.gameObject.transform.rotation = Quaternion.Euler (0f, 0f, randonDegree ());
					spawnP.mainCube.MoveCube (spawnP.position);

					break;
				}
			}
		}
		yield return new WaitForFixedUpdate();
	}

	private IEnumerator InstantiateDiamond()
	{

		for(int i = 0; i < diamondList.Count; i++)
		{
			if(!diamondList[i].activeInHierarchy)
			{
//				diamondList[i].transform.position = spawnP.spawnerTransform.position;
//				diamondList[i].transform.rotation = Quaternion.Euler(270f, 0f, 0f);

				diamondTransList[i].position = spawnP.spawnerTransform.position;
				diamondTransList[i].rotation = Quaternion.Euler(270f, 0f, 0f);


				diamondList[i].SetActive(true);
				spawnP.diamondScript = diamondList[i].GetComponent<Diamond>();

				if (!spawnP.matchSmallestNum) {
					if (!spawnP.matchNum) {
						spawnP.diamondScript.MoveDiamond (diamondPos ());
					} else {
						spawnP.diamondScript.MoveDiamond (diamondPos3 ());
					}

				}else{
					spawnP.diamondScript.MoveDiamond (diamondPos5());
				}

				spawnP.diamondScript.SetDiaInactive (diamondList [i]);
				break;
			}
		}

		yield return new WaitForSeconds(0.5f);
		yield return new WaitForFixedUpdate();

		for(int i = 0; i < diamondList.Count; i++)
		{
			if(!diamondList[i].activeInHierarchy)
			{
//				diamondList[i].transform.position = spawnP.spawnerTransform.position;
//				diamondList[i].transform.rotation = Quaternion.Euler(270f, 0f, 0f);

				diamondTransList[i].position = spawnP.spawnerTransform.position;
				diamondTransList[i].rotation = Quaternion.Euler(270f, 0f, 0f);
				diamondList[i].SetActive(true);
				spawnP.diamondScript = diamondList[i].GetComponent<Diamond>();
				if (!spawnP.matchSmallestNum) {
					if (!spawnP.matchNum) {
						spawnP.diamondScript.MoveDiamond (diamondPos2 ());
					} else {
						spawnP.diamondScript.MoveDiamond (diamondPos4 ());
					}
				}
				else{
					spawnP.diamondScript.MoveDiamond (diamondPos6 ());
				}
				spawnP.diamondScript.SetDiaInactive(diamondList[i]);
				break;
			}
		}

		yield return new WaitForFixedUpdate();
	}

	private IEnumerator InstantiateBall()
	{
		yield return new WaitForSeconds(1f);

		for(int i = 0; i < ballList.Count; i++)
		{
			if(!ballList[i].activeInHierarchy)
			{
//				ballList[i].transform.position = spawnP.spawnerTransform.position;
//				ballList[i].transform.rotation = spawnP.spawnerTransform.rotation;

				ballTransList[i].position = spawnP.spawnerTransform.position;
				ballTransList[i].rotation = spawnP.spawnerTransform.rotation;

//				ballList[i].transform.localScale = new Vector3(.5f,.5f,.5f);
				ballTransList[i].localScale = new Vector3(.5f,.5f,.5f);

				ballList[i].SetActive(true);
				spawnP.ballScript = ballList[i].GetComponent<Ball>();
				spawnP.ballScript.MoveBall(ballPos());
				spawnP.ballScript.SetBallInactive(ballList[i]);

				break;
			}
		}

		yield return new WaitForFixedUpdate();
	}



	private IEnumerator InstantiateObstacle()
	{
		FindObstacleBall ();
		yield return new WaitForFixedUpdate();

		//random from 0 to 2. It is 1, then instantiate a second obstacle ball
		//		if(RandomCubeNum() == 1)
		//		{
		//			FindBall();
		//		}
		//

		//		yield return new WaitForFixedUpdate();
	}

	void FindObstacleBall ()
	{
		for (int i = 0; i < ballObstacleList.Count; i++) {
			if (!ballObstacleList [i].activeInHierarchy) {
				if (spawnP.fixedX > 0) {
//					ballObstacleList [i].transform.position = obstacleLeftPos.transform.position;
//					ballObstacleList [i].transform.rotation = Quaternion.Euler (0f, 0f, 0f);
					ballObstacleTransList[i].position = obstacleLeftPos.transform.position;
					ballObstacleTransList[i].rotation = Quaternion.Euler (0f, 0f, 0f);

					ballObstacleList [i].SetActive (true);
					break;
				}
				else {
//					ballObstacleList [i].transform.position = obstacleRightPos.transform.position;
//					ballObstacleList [i].transform.rotation = Quaternion.Euler (0f, 0f, 0f);
					ballObstacleTransList[i].position = obstacleRightPos.transform.position;
					ballObstacleTransList[i].rotation = Quaternion.Euler (0f, 0f, 0f);

					ballObstacleList [i].SetActive (true);
					break;
				}
			}
		}
	}

	private void ChangeGravity()
	{
		Physics.gravity = new Vector3(0f, -15f, 0f);

		//		if(spawnP.spawnNumber % 80 == 0)
		//		{
		//			Physics.gravity = new Vector3(0f, -30f, 0f);
		//			Debug.Log(Physics.gravity);
		//		}else{
		//			if(spawnP.spawnNumber % 60 == 0){
		//				Physics.gravity = new Vector3(0f, -25f, 0f);
		//				Debug.Log(Physics.gravity);
		//			}else{
		//				if(spawnP.spawnNumber % 40 == 0)
		//				{
		//					Physics.gravity = new Vector3(0f, -20f, 0f);
		//					Debug.Log(Physics.gravity);
		//				}else{
		//					if(spawnP.spawnNumber % 20 == 0)
		//					{
		//						Physics.gravity = new Vector3(0f, -15f, 0f);
		//						Debug.Log(Physics.gravity);
		//					}
		//				}
		//			}
		//		}
	}


}
