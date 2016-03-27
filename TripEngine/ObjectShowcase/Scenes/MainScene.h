#pragma once
#include <glm\glm.hpp>
#include <glm\gtc\matrix_transform.hpp>
#include <TripEngineV1\Engine.h>
#include <TripEngineV1\Time.h>
#include <TripEngineV1\Import\TextureImporter.h>
#include <TripEngineV1\Managers\ModelManager.h>
#include <TripEngineV1\Managers\ShaderManager.h>
#include <TripEngineV1\Managers\LightManager.h>
#include <TripEngineV1\Managers\IScene.h>
#include <TripEngineV1\GameObjects\Quad.h>
#include <TripEngineV1\Rendering\Framebuffer.h>
#include <TripEngineV1\Rendering\Light.h>
#include "..\Players\Player.h"

using namespace TripEngine;

namespace Scenes
{
	class MainScene : public Managers::IScene
	{
	private:
		Players::Player* player;
		GameObjects::Quad* quad;

		Rendering::Framebuffer fbo1;
		Rendering::Framebuffer fbo2;

	public:
		MainScene(Engine* engine);
		~MainScene();

	public:
		virtual void Update();
		virtual void Draw();
	};
}