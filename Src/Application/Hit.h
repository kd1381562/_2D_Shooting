#pragma once

class Scene;

class C_hit
{

public:

	void Enemy_Player();



	void SetOwner(Scene* hOwner) { m_hOwner = hOwner; }


private:


	Scene* m_hOwner;


};