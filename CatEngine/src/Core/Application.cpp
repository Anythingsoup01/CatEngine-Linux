#include <iostream>
#include "src/Core/Application.h"

namespace CatEngine
{
	Application::Application()
	{
		std::cout << "Hello World!" << std::endl;
	}

	Application::~Application()
	{}

	void Application::Run()
	{
		int i = 0;
		while(m_Running)
		{
			std::cout << i << std::endl;
			i++;
		}
	}


}
