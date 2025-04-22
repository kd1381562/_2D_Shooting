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



	const float MovePos = 5.0f;		//ˆÚ“®—Í


	
	Math::Vector2 m_pos;			//À•W
	Math::Vector2 m_move;			//ˆÚ“®—Ê

	


};