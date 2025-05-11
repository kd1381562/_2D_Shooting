#include "main.h"
#include "Scene.h"


void Scene::Draw2D()
{
	switch (nowScene)
	{

	case SceneType::Title:
		DrawTitle();
		break;
	case SceneType::setumei:
		DrawSetumei();
		break;
	case SceneType::Game:
		DrawGame();
		break;
	case SceneType::result:
		DrawResult();
		break;
	case SceneType::Death:
		DrawDeth();
		break;
	default:
		break;
	
	
	}

	//m_player.Draw();
	//m_enemy.Draw();
	//m_bullet.Draw();
	////m_haikei.Draw();
}

void Scene::Update()
{
	//m_player.Update();
	//m_player.Action();
	//m_enemy.Update();
	//m_bullet.Update();
	////m_haikei.Update();
	
	if (nowScene == SceneType::Title)
	{
		UpdateTitle();
	}
	if (nowScene == SceneType::setumei)
	{
		UpdateSetumei();
	}
	if (nowScene == SceneType::Game)
	{
		UpdateGame();
	}
	if (nowScene == SceneType::result)
	{
		UpdateResult();
	}
	if (nowScene == SceneType::Death)
	{
		UpdateDeth();
	}

	
}

void Scene::Init()
{
	nowScene = SceneType::Title;


	keyFlg = false;
	// 画像の読み込み処理
	m_player.SetOwner(this);
	

	

	m_playerTex.Load("Texture/player.png");
	m_player.Init();
	m_player.SetTex(&m_playerTex);
	

	m_enemyTex.Load("Texture/Chara.png");
	m_enemy.Init();
	m_enemy.SetTex(&m_enemyTex);
	
	m_bulletTex.Load("Texture/Bullet.png");
	m_bullet.Init();
	m_bullet.SetTex(&m_bulletTex);

	m_titleTex.Load("Texture/title.png");
	m_title.Init();
	m_title.SetTex(&m_titleTex);

	m_haikeiTex.Load("Texture/haikei.png");
	//m_haikei.Init();
	//m_haikei.SetTex(&m_haikeiTex);
}

void Scene::Release()
{
	// 画像の解放処理
	
	m_playerTex.Release();
	m_enemyTex.Release();
	m_bulletTex.Release();
	m_haikeiTex.Release();
	m_setumeiTex.Release();
	m_titleTex.Release();
	m_haikeiTex.Release();
	/*m_haikeiTex.Release();*/

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

void Scene::UpdateTitle()
{
	//ENTERキーで次のシーンへ
	if (GetAsyncKeyState(VK_RETURN) & 0x8000)
	{
		if (!keyFlg)
		{
			keyFlg = true;

			nowScene = SceneType::setumei;//　ゲーム本編へ
		}
	}
	else
	{
		keyFlg = false;
	}

}

void Scene::DrawTitle()
{
	m_title.Draw();
	
}

void Scene::UpdateGame()
{

	m_player.Action();
	m_enemy.Action();
	m_player.Update();
	m_enemy.Update();
	
}

void Scene::DrawGame()
{

	m_player.Draw();
	m_enemy .Draw();


	// スコア表示
	char text[200];

	sprintf_s(text, sizeof(text), "Score:%d", score);

	SHADER.m_spriteShader.DrawString(-640, 360, text, Math::Vector4(1, 0, 1, 1));

}

void Scene::UpdateSetumei()
{
	m_setumei.Draw();
}

void Scene::DrawSetumei()
{
	//ENTERキーで次のシーンへ
	if (GetAsyncKeyState(VK_RETURN) & 0x8000)
	{
		if (!keyFlg)
		{
			keyFlg = true;

			nowScene = SceneType::Game;//　ゲーム本編へ
		}
	}
	else
	{
		keyFlg = false;
	}

}

void Scene::UpdateBoss()
{


	
}

void Scene::DrawBoss()
{


}

void Scene::UpdateDeth()
{
}

void Scene::DrawDeth()
{
}

void Scene::UpdateResult()
{
}

void Scene::DrawResult()
{
}
