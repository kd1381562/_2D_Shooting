#include "Enemy.h"

void C_Enemy::Init()
{
	//m_pos = {200, 300};
	m_move = { m_movePow, 0 };

	m_scaleX = 1;
	m_alive = true;
	m_moveCnt = 100;


}

void C_Enemy::Action()
{
	



	m_moveCnt=0;

	if (m_moveCnt < 0)
	{
		//移動方向の反転
		m_moveCnt = 10;
		m_move.x *= -1;
		m_scaleX *= -1;
	}
}

void C_Enemy::Update()
{

	//座標確定
	m_pos += m_move;

	//行列作成・合成

	m_scaleMat = Math::Matrix::CreateScale(m_scaleX, 1.0f, 1.0f);
	m_transMat = Math::Matrix::CreateTranslation(m_pos.x , m_pos.y, 0.0f);

	m_Mat = m_scaleMat * m_transMat;

}

void C_Enemy::Draw()
{
	SHADER.m_spriteShader.SetMatrix(m_Mat);
	
	SHADER.m_spriteShader.DrawTex(m_eTex, Math::Rectangle(0, 0, 64, 64), 1.0f);

}

void C_Enemy::MapHitX(float posX)
{
	m_pos.x = posX;
}

void C_Enemy::MapHitY(float posY, float moveY)
{
	m_pos.y = posY;
	m_move.y = moveY;
}
