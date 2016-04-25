struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_ParticlesLegacy();
	RegisterModule_ParticlesLegacy();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityAds();
	RegisterModule_UnityAds();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 83 classes
	//0. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//1. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//2. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//3. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//4. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//5. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//6. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//7. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//8. Skybox
	void RegisterClass_Skybox();
	RegisterClass_Skybox();

	//9. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//10. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//11. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//12. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//13. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//14. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//15. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//16. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//17. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//18. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//19. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//20. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//21. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//22. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//23. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//24. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//25. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//26. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//27. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//28. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//29. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//30. AudioMixer
	void RegisterClass_AudioMixer();
	RegisterClass_AudioMixer();

	//31. AudioMixerSnapshot
	void RegisterClass_AudioMixerSnapshot();
	RegisterClass_AudioMixerSnapshot();

	//32. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//33. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//34. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//35. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//36. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//37. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//38. UnityAnalyticsManager
	void RegisterClass_UnityAnalyticsManager();
	RegisterClass_UnityAnalyticsManager();

	//39. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//40. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//41. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//42. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//43. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//44. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//45. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//46. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//47. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//48. ParticleAnimator
	void RegisterClass_ParticleAnimator();
	RegisterClass_ParticleAnimator();

	//49. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//50. EllipsoidParticleEmitter
	void RegisterClass_EllipsoidParticleEmitter();
	RegisterClass_EllipsoidParticleEmitter();

	//51. ParticleEmitter
	void RegisterClass_ParticleEmitter();
	RegisterClass_ParticleEmitter();

	//52. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//53. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//54. ParticleRenderer
	void RegisterClass_ParticleRenderer();
	RegisterClass_ParticleRenderer();

	//55. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//56. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//57. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//58. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//59. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//60. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//61. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//62. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//63. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//64. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//65. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//66. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//67. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//68. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//69. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//70. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//71. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//72. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//73. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//74. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//75. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//76. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//77. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//78. AudioMixerGroup
	void RegisterClass_AudioMixerGroup();
	RegisterClass_AudioMixerGroup();

	//79. UnityAdsSettings
	void RegisterClass_UnityAdsSettings();
	RegisterClass_UnityAdsSettings();

	//80. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//81. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//82. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
