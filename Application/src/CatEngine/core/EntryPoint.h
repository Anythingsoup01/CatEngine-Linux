#pragma once

extern CatEngine::App* CatEngine::CreateApp();

int main(int argc, char** argv)
{
    auto* app = CatEngine::CreateApp();
    app->Run();
    delete app;
}

