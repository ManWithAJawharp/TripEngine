#pragma once
#include <glm\glm.hpp>
#include <glm\gtc\matrix_transform.hpp>
#include "Component.h"
#include "..\..\Managers\LightManager.h"

namespace TripEngine
{
	namespace Actors
	{
		namespace Components
		{
			class Light : public Component
			{
			public:
				glm::vec3 color;
				float range;

				Light(Transform* transform);
				virtual ~Light() override;

				glm::mat4 GetLightMatrix();
			};
		}
	}
}