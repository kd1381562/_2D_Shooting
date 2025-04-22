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



	const float MovePos = 7.0f;		//�ړ���


	KdTexture* m_bTex;				//�摜�̃|�C���^
	Math::Vector2 m_pos;			//���W
	Math::Vector2 m_move;			//�ړ���
	Math::Matrix m_scaleMat;		//�g��s��
	Math::Matrix m_transMat;		//�ړ��s��
	Math::Matrix m_mat;				//�����s��
	float m_scaleX;					//���g�嗦
	float m_scaleY;					//���g�嗦


	bool m_alive;					//�����t���O


	


};