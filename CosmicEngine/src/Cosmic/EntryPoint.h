#pragma once

#ifdef C_PLATFORM_WINDOWS

extern Cosmic::Application* Cosmic::CreateApplication();

int main(int argc, char** argv)
{
	std::cout << R"(
   _____                    _        ______             _            
  / ____|                  (_)      |  ____|           (_)           
 | |     ___  ___ _ __ ___  _  ___  | |__   _ __   __ _ _ _ __   ___ 
 | |    / _ \/ __| '_ ` _ \| |/ __| |  __| | '_ \ / _` | | '_ \ / _ \
 | |___| (_) \__ \ | | | | | | (__  | |____| | | | (_| | | | | |  __/
  \_____\___/|___/_| |_| |_|_|\___| |______|_| |_|\__, |_|_| |_|\___|
                                                   __/ |             
                                                  |___/              )" << std::endl;
	auto app = Cosmic::CreateApplication();
	app->Run();
	delete app;
}

#endif