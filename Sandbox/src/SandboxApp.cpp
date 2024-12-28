#include "CatEngine.h"

namespace CatEngine
{
	class Sandbox : public Application
	{
	public:
		Sandbox()
		{
			CE_CLI_INFO("Application Initialized");
		}
	};

	Application* CreateApplication()
	{
		return new Sandbox();
	}

}
