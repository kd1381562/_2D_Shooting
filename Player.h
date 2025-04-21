#pragma once


class Scene;
class C_Player {
public:
	C_Player();
	~C_Player();

	void Init();
	void Action();
	void Update();
	void Draw();
	void MapHitX(float posX, float moveX);
	void MapHitY(float posY, float moveY, bool Jump);
	void SetTex(KdTexture* pTex) { m_pTex = pTex; }
	
	Math::Vector2 GetPos() { return m_pos; }
	Math::Vector2 GetFuturePos() { return m_pos + m_move; }
	float GetRadius() { return 32.0f; }

	void SetAlive(bool alive) { m_alive = alive; }
	void SetOwner(Scene* hOwner) { m_pOwner = hOwner; }





private:
	
	const float MovePos = 5.0f;		//移動力


	KdTexture* m_pTex;				//画像のポインタ
	Math::Vector2 m_pos;			//座標
	Math::Vector2 m_move;			//移動量
	Math::Matrix m_scaleMat;		//拡大行列
	Math::Matrix m_transMat;		//移動行列
	Math::Matrix m_mat;				//合成行列
	float m_scaleX;					//横拡大率
	float m_scaleY;					//横拡大率
	bool m_alive;					//生存フラグ
	bool m_jump;					//ジャンプフラグ
	bool m_goolflg;
	Scene* m_pOwner;
};

