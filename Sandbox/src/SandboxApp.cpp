#include "../../CatEngine/src/CatEngine.h"

namespace CatEngine
{
	class Sandbox : public Application
	{
	public:
		Sandbox()
		{}
	};

	Application* CreateApplication()
	{
		return new Sandbox();
	}

}
