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

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 87 classes
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

	//17. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//18. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

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

	//23. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//24. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//25. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//26. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//27. Joint
	void RegisterClass_Joint();
	RegisterClass_Joint();

	//28. SpringJoint
	void RegisterClass_SpringJoint();
	RegisterClass_SpringJoint();

	//29. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//30. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//31. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//32. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//33. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//34. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//35. AudioMixer
	void RegisterClass_AudioMixer();
	RegisterClass_AudioMixer();

	//36. AudioMixerSnapshot
	void RegisterClass_AudioMixerSnapshot();
	RegisterClass_AudioMixerSnapshot();

	//37. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//38. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//39. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//40. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//41. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//42. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//43. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//44. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//45. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//46. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//47. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//48. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//49. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//50. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//51. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//52. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//53. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//54. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//55. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//56. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//57. ParticleAnimator
	void RegisterClass_ParticleAnimator();
	RegisterClass_ParticleAnimator();

	//58. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//59. EllipsoidParticleEmitter
	void RegisterClass_EllipsoidParticleEmitter();
	RegisterClass_EllipsoidParticleEmitter();

	//60. ParticleEmitter
	void RegisterClass_ParticleEmitter();
	RegisterClass_ParticleEmitter();

	//61. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//62. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//63. ParticleRenderer
	void RegisterClass_ParticleRenderer();
	RegisterClass_ParticleRenderer();

	//64. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//65. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//66. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//67. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//68. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//69. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//70. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//71. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//72. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//73. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//74. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//75. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//76. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//77. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//78. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//79. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//80. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//81. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//82. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//83. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//84. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//85. AudioMixerGroup
	void RegisterClass_AudioMixerGroup();
	RegisterClass_AudioMixerGroup();

	//86. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
