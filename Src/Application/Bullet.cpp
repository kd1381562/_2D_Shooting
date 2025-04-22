#include "Bullet.h"

void C_Bullet::Init()
{
	m_pos = { 0,0 };
	m_move = { 0,0 };
	m_scaleX = 1.0f;
}

void C_Bullet::Release()
{
}

void C_Bullet::Update()
{
}

void C_Bullet::Draw()
{
	SHADER.m_spriteShader.SetMatrix(m_mat);
	SHADER.m_spriteShader.DrawTex(m_bTex, Math::Rectangle(0, 0, 64, 64), 1.0f);
}
