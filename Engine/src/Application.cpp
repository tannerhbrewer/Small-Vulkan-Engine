#include "Application.h";

namespace Engine {

	Application::Application() {

		m_Window = std::make_unique<Engine::Window>(800, 600, "Small Vulkan Engine");

		Run();

	}

	void Application::Run() {

		while (!m_Window->IsRunning()) {

			glfwPollEvents();

		}

	}

}
