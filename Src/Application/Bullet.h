#pragma once
class C_Bullet {
	C_Bullet();
	~C_Bullet() {};
public:

	void Init();
	void Release();
	void Update();
	void Draw();





private:



	const float MovePos = 5.0f;		//�ړ���


	
	Math::Vector2 m_pos;			//���W
	Math::Vector2 m_move;			//�ړ���

	


};