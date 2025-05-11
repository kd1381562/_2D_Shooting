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

// テクスチャ ・・・ 画像データ
	KdTexture charaTex;
	KdTexture haikeiTex;


	float titleX;
	float titleY;
	

	float gameX;
	float gameY;

	//リザルトシーン用変数
	Math::Vector2 result;
	int frame;
	bool keyFlg;
	
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

	//タイトル：更新
	void UpdateTitle();
	//タイトル描画
	void DrawTitle();
	

	//ゲーム更新
	void UpdateGame();
	//ゲーム描画
	void DrawGame();
	//説明更新
	void UpdateSetumei();
	//説明描画
	void DrawSetumei();

	//ボス更新
	void UpdateBoss();
	//ボス描画
	void DrawBoss();

	//死亡更新
	void UpdateDeth();
	//死亡描画
	void DrawDeth();

	//リザルト更新
	void UpdateResult();
	//リザルト描画
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
