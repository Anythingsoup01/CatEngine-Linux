#pragma once

extern CatEngine::Application* CatEngine::CreateApplication();

int main(int argc, char** argv)
{
	auto app = CatEngine::CreateApplication();
	app->Run();
	delete app;
}
