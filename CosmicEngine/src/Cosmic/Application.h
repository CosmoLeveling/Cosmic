#pragma once

#include "Core.h"

namespace Cosmic {
	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();
		
		void Run();
	};
	
	// To be defined in client
	Application* CreateApplication();
}