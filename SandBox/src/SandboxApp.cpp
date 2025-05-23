#include <Cosmic.h>

class Sandbox : public Cosmic::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Cosmic::Application* Cosmic::CreateApplication()
{
	return new Sandbox();
}