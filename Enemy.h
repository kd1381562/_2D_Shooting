#pragma once

class C_Enemy
{
public:
	C_Enemy() {}
	~C_Enemy() {}


	void Init();

	void Action();

	void Update();

	void Draw();

	void SetTex(KdTexture* eTex) { m_eTex = eTex; }

	void SetPos(Math::Vector2 Pos) { m_pos = Pos; }

	void MapHitX(float posX);

	void MapHitY(float posY, float moveY);

	float GetRadiusX() { return 32.0f; }
	float GetRadiusY() { return 32.0f; }

	Math::Vector2 GetPos() { return m_pos; }



	Math::Vector2 GetFuturePos() { return m_pos + m_move; }

private:






	//半径
	static const int m_radius = 32;
	//重力
	


	//移動スピード
	const float m_movePow = 1.0f;
	//座標
	Math::Vector2 m_pos;
	//移動量
	Math::Vector2 m_move;
	//拡縮率
	float m_scaleX;



	//生存フラグ
	bool m_alive;  

	int m_moveCnt;

	//テクスチャs
	KdTexture* m_eTex;
	//テクスチャ切り取り範囲
	Math::Rectangle m_srcRect = { 0, 0, 64, 64 };

	//行列

	Math::Matrix m_scaleMat;	//拡縮
	Math::Matrix m_transMat;	//移動
	Math::Matrix m_Mat;	//合成
};
