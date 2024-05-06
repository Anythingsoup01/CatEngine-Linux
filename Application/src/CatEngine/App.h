#pragma once

#include <iostream>

namespace CatEngine
{
    class App {
    public:
        App();
	virtual ~App();

        void Run();	
    };

    App* CreateApp();
}
