#include "Bullet.h"

void C_Bullet::Init()
{
	m_pos = { 0,0 };
	m_move = { 0,0 };
	m_scaleX = 0.3f;
	m_scaleY = 0.3f;// 19.2
}

void C_Bullet::Release()
{
}

void C_Bullet::Update()
{
	//座標確定
	m_pos += m_move;

	//行列作成・合成

	m_scaleMat = Math::Matrix::CreateScale(m_scaleX, m_scaleY, 1.0f);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
	m_transMat = Math::Matrix::CreateTranslation(m_pos.x, m_pos.y, 0.0f);

	m_mat = m_scaleMat * m_transMat;
}
void C_Bullet::Action()
{
	m_move.x = 0.0f;
	m_move.y = 0.0f;

	if (GetAsyncKeyState(VK_SPACE) & 0x8000)
	{
		m_move.x = 1.0f;
		m_scaleY += 1.0f;


    }


}

void C_Bullet::Draw()
{
	SHADER.m_spriteShader.SetMatrix(m_mat);
	SHADER.m_spriteShader.DrawTex(m_bTex, Math::Rectangle(0, 0, 64,64), 1.0f);
}
