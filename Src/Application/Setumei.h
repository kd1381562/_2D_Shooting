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
	KdTexture* m_tTex;				//�摜�̃|�C���^
	Math::Vector2 m_pos;			//���W
	Math::Matrix m_scaleMat;		//�g��s��
	Math::Matrix m_transMat;		//�ړ��s��
	Math::Matrix m_mat;				//�����s��
	float m_scaleX;					//���g�嗦
	float m_scaleY;					//���g�嗦

	Math::Rectangle rect;



}; 