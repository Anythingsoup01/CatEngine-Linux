#pragma once

#include "Log.h"

extern CatEngine::App* CatEngine::CreateApp();

int main(int argc, char** argv)
{

    CatEngine::Log::Init();
    API_CRITICAL("API Logger initialized");
    CLI_INFO("CLI Logger initialized");
	
    auto* app = CatEngine::CreateApp();
    app->Run();
    delete app;
}

