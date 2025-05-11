#include "Setumei.h"

void C_Setumei::Draw()
{

	rect = { 0,0,1280,720 };
	SHADER.m_spriteShader.SetMatrix(m_mat);
	SHADER.m_spriteShader.DrawTex(m_tTex, rect, 1.0f);
}

void C_Setumei::Init()
{

	m_pos = { 0,0 };
	m_scaleX = 1.0f;
	m_scaleY = 1.0f;

}

void C_Setumei::Update()
{
	m_scaleMat = Math::Matrix::CreateScale(m_scaleX, m_scaleY, 1.0f);
	m_transMat = Math::Matrix::CreateTranslation(m_pos.x, m_pos.y, 0);
	m_mat = m_scaleMat * m_transMat;	//Šg‘å¨‰ñ“]¨ˆÚ“®
}

void C_Setumei::Release()
{

	


}
