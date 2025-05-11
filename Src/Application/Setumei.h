#pragma once

class C_Setumei
{
public:

	C_Setumei() {}
	~C_Setumei() {}

	void Draw();
	void Init();
	void Update();
	void Release();

	void SetTex(KdTexture* tTex) { m_tTex = tTex; }

private:
	KdTexture* m_tTex;				//画像のポインタ
	Math::Vector2 m_pos;			//座標
	Math::Matrix m_scaleMat;		//拡大行列
	Math::Matrix m_transMat;		//移動行列
	Math::Matrix m_mat;				//合成行列
	float m_scaleX;					//横拡大率
	float m_scaleY;					//横拡大率

	Math::Rectangle rect;



}; 