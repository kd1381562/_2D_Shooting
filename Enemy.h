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






	//���a
	static const int m_radius = 32;
	//�d��
	


	//�ړ��X�s�[�h
	const float m_movePow = 1.0f;
	//���W
	Math::Vector2 m_pos;
	//�ړ���
	Math::Vector2 m_move;
	//�g�k��
	float m_scaleX;



	//�����t���O
	bool m_alive;  

	int m_moveCnt;

	//�e�N�X�`��s
	KdTexture* m_eTex;
	//�e�N�X�`���؂���͈�
	Math::Rectangle m_srcRect = { 0, 0, 64, 64 };

	//�s��

	Math::Matrix m_scaleMat;	//�g�k
	Math::Matrix m_transMat;	//�ړ�
	Math::Matrix m_Mat;	//����
};
