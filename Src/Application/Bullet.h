#pragma once
class C_Bullet 
{
public:

	C_Bullet();
	~C_Bullet();
	void Init();
	void Release();
	void Update();
	void Draw();


	void SetTex(KdTexture* bTex) { m_bTex = bTex; }

	void SetPos(Math::Vector2 Pos) { m_pos = Pos; }

	

	float GetRadiusX() { return 32.0f; }
	float GetRadiusY() { return 32.0f; }

	Math::Vector2 GetPos() { return m_pos; }

	Math::Vector2 GetFuturePos() { return m_pos + m_move; }


private:



	const float MovePos = 7.0f;		//移動力


	KdTexture* m_bTex;				//画像のポインタ
	Math::Vector2 m_pos;			//座標
	Math::Vector2 m_move;			//移動量
	Math::Matrix m_scaleMat;		//拡大行列
	Math::Matrix m_transMat;		//移動行列
	Math::Matrix m_mat;				//合成行列
	float m_scaleX;					//横拡大率
	float m_scaleY;					//横拡大率


	bool m_alive;					//生存フラグ


	


};