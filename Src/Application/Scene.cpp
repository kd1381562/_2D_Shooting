#include "main.h"
#include "Scene.h"
#include"Player.h"
#include"Enemy.h"
void Scene::Draw2D()
{
	m_player.Draw();
	m_enemy.Draw();
}

void Scene::Update()
{
	m_player.Update();
	m_player.Action();
	m_enemy.Update();
}

void Scene::Init()
{
	
	// 画像の読み込み処理
	m_player.SetOwner(this);

	

	m_playerTex.Load("Texture/player.png");
	m_player.Init();
	m_player.SetTex(&m_playerTex);
	

	m_enemyTex.Load("Texture/Chara.png");
	m_enemy.Init();
	m_enemy.SetTex(&m_enemyTex);
	
}

void Scene::Release()
{
	// 画像の解放処理
	
	m_playerTex.Release();
	m_enemyTex.Release();

}

void Scene::ImGuiUpdate()                                                                                  
{
	return;

	ImGui::SetNextWindowPos(ImVec2(20, 20), ImGuiSetCond_Once);
	ImGui::SetNextWindowSize(ImVec2(200, 100), ImGuiSetCond_Once);

	// デバッグウィンドウ
	if (ImGui::Begin("Debug Window"))
	{
		ImGui::Text("FPS : %d", APP.m_fps);
	}
	ImGui::End();
}
