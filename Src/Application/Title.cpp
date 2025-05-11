#include "Title.h"

void C_Title::Draw()
{
	

}

void C_Title::Init()
{

	m_pos = { 0,0 };
	m_scaleX = 1.0f;
	m_scaleY = 1.0f;

}

void C_Title::Update()
{
	m_scaleMat = Math::Matrix::CreateScale(m_scaleX, m_scaleY, 1.0f);
	m_transMat = Math::Matrix::CreateTranslation(m_pos.x, m_pos.y, 0);
	m_mat = m_scaleMat * m_transMat;	//ägëÂÅ®âÒì]Å®à⁄ìÆ
}

void C_Title::Release()
{

	rect = { 0,0,1280,720 };
	SHADER.m_spriteShader.SetMatrix(m_mat);
	SHADER.m_spriteShader.DrawTex(m_tTex, rect, 1.0f);


}
