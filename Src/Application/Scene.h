#pragma once
#include"Player.h"
#include"Enemy.h"

class Scene
{
private:

	C_Player m_player;
	KdTexture m_playerTex;
	C_Enemy m_enemy;
	KdTexture m_enemyTex;
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
