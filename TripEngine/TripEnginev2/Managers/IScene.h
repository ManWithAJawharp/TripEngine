#pragma once
#include <glm\glm.hpp>
#include "ModelManager.h"
#include "LightManager.h"

namespace TripEngine
{
	namespace Managers
	{
		class IScene
		{
		public:
			virtual void Update() = 0;
			virtual void Draw() = 0;
		};
	}
}