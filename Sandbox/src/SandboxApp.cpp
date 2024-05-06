#include "../../Application/src/CatEngine.h"

class Sandbox : public CatEngine::App
{
public:
    Sandbox()
    {}

    ~Sandbox()
    {}

};

CatEngine::App* CatEngine::CreateApp()
{
    return new Sandbox();
}
