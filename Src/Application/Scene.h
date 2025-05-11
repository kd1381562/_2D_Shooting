#pragma once
#include"Player.h"
#include"Enemy.h"
#include"Bullet.h"
#include"Title.h"
#include"Result.h"
#include"Setumei.h"




enum SceneType
{
	Title,
   setumei,
   Game,
   Death,
   result
};



class Scene
{
private:

	SceneType nowScene;
	


	C_Player m_player;
	KdTexture m_playerTex;

	C_Enemy m_enemy;
	KdTexture m_enemyTex;

	C_Bullet m_bullet;
	KdTexture m_bulletTex;

	//C_Haikei m_haikei;
	KdTexture m_haikeiTex;

	C_Title m_title;
	KdTexture m_titleTex;

	C_Setumei m_setumei;
	KdTexture m_setumeiTex;
	
	/*C_Title m_title;
	KdTexture m_titleTex;
	
	C_Title m_title;
	KdTexture m_titleTex;*/

	int score;

	bool Bullet_Flg;

// �e�N�X�`�� �E�E�E �摜�f�[�^
	KdTexture charaTex;
	KdTexture haikeiTex;


	float titleX;
	float titleY;
	

	float gameX;
	float gameY;

	//���U���g�V�[���p�ϐ�
	Math::Vector2 result;
	int frame;
	bool keyFlg;
	
	// �s�� �E�E�E ���W�Ȃǂ̏��
	Math::Matrix matrix;

public:

	// �����ݒ�
	void Init();

	// ���
	void Release();

	// �X�V����
	void Update();

	// �`�揈��
	void Draw2D();

	// GUI����
	void ImGuiUpdate();

	//�^�C�g���F�X�V
	void UpdateTitle();
	//�^�C�g���`��
	void DrawTitle();
	

	//�Q�[���X�V
	void UpdateGame();
	//�Q�[���`��
	void DrawGame();
	//�����X�V
	void UpdateSetumei();
	//�����`��
	void DrawSetumei();

	//�{�X�X�V
	void UpdateBoss();
	//�{�X�`��
	void DrawBoss();

	//���S�X�V
	void UpdateDeth();
	//���S�`��
	void DrawDeth();

	//���U���g�X�V
	void UpdateResult();
	//���U���g�`��
	void DrawResult();



	C_Player* GetPlayer() { return&m_player; }

	C_Enemy* GetEnemy() { return&m_enemy; }

	C_Bullet* GetBullet() { return&m_bullet; }

private:

	Scene() {}

public:
	static Scene& GetInstance()
	{
		static Scene instance;
		return instance;
	}
};

#define SCENE Scene::GetInstance()
