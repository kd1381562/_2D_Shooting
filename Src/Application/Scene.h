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

// テクスチャ ・・・ 画像データ
	KdTexture charaTex;


	
	// 行列 ・・・ 座標などの情報
	Math::Matrix matrix;

public:

	// 初期設定
	void Init();

	// 解放
	void Release();

	// 更新処理
	void Update();

	// 描画処理
	void Draw2D();

	// GUI処理
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
