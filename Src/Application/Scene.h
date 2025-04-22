#pragma once
#include"Player.h"
#include"Enemy.h"
#include"Bullet.h"

class Scene
{
private:

	C_Player m_player;
	KdTexture m_playerTex;

	C_Enemy m_enemy;
	KdTexture m_enemyTex;

	C_Bullet m_bullet;
	KdTexture m_bulletTex;

// �e�N�X�`�� �E�E�E �摜�f�[�^
	KdTexture charaTex;


	
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
