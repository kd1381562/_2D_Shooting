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
	
	const float MovePos = 5.0f;		//�ړ���


	KdTexture* m_pTex;				//�摜�̃|�C���^
	Math::Vector2 m_pos;			//���W
	Math::Vector2 m_move;			//�ړ���
	Math::Matrix m_scaleMat;		//�g��s��
	Math::Matrix m_transMat;		//�ړ��s��
	Math::Matrix m_mat;				//�����s��
	float m_scaleX;					//���g�嗦
	float m_scaleY;					//���g�嗦
	bool m_alive;					//�����t���O
	bool m_jump;					//�W�����v�t���O
	bool m_goolflg;
	Scene* m_pOwner;
};

