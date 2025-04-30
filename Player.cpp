#include "Player.h"



C_Player::C_Player()
{
}

C_Player::~C_Player()
{
}

void C_Player::Init()
{
	m_pos = { 0,0 };
	m_move = { 0,0 };
	m_scaleX = 1.0f;
	//m_alive = true;
	m_jump = false;
	
	
}

void C_Player::Action()
{
	

	m_move.x = 0.0f;
	m_move.y = 0.0f;
	if (GetAsyncKeyState('A') & 0x8000) {
		m_move.x -= MovePos;
		m_scaleX = -1.0f;
	}
	if (GetAsyncKeyState('D') & 0x8000) 
	{
		m_move.x += MovePos;
		m_scaleX = 1.0f;
	}
	if (GetAsyncKeyState('W') & 0x8000) 
	{
		m_move.y += MovePos;
		m_scaleY = -1.0f;
	}
	if (GetAsyncKeyState('S') & 0x8000) 
	{
		m_move.y -= MovePos;
		m_scaleY = 1.0f;
	}
	
	if (GetAsyncKeyState(VK_RETURN) & 0x8000)
	{
		 
		
	}

	if (GetAsyncKeyState(VK_SHIFT) & 0x8000)
	{
		m_move.y -= MovePos;
		m_scaleY = 1.0f;
	}

	
}

void C_Player::Update()
{
	m_pos += m_move;

	



	m_scaleMat = Math::Matrix::CreateScale(m_scaleX, 1.0f, 1.0f);
	m_transMat = Math::Matrix::CreateTranslation(m_pos.x , m_pos.y, 0);
	m_mat = m_scaleMat * m_transMat;	//ägëÂÅ®âÒì]Å®à⁄ìÆ


}

void C_Player::Draw()
{
	SHADER.m_spriteShader.SetMatrix(m_mat);

	SHADER.m_spriteShader.DrawTex(m_pTex, Math::Rectangle(0, 0, 64, 64), 1.0f);
	 
	
}

void C_Player::MapHitX(float posX, float moveX)
{
	m_pos.x = posX;
	m_move.x = moveX;
}

void C_Player::MapHitY(float posY, float moveY, bool Jump)
{
	m_pos.y = posY;
	m_move.y = moveY;
	m_jump = Jump;
}
