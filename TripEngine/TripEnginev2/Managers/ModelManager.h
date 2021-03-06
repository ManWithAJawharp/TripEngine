#pragma once
#include "..\Actors\Components\Model.h"
#include <vector>

namespace TripEngine
{
	namespace Managers
	{
		class ModelManager
		{
		private:
			static std::vector<Actors::Components::Model*> models;

		public:
			static void Update();
			static void Draw(const GLuint& shadowMap);
			static void DrawDepth();

			static void AddModel(Actors::Components::Model* model);
		};
	}
}