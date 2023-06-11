#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <string>

namespace Engine {

	class Window {

	public:
		Window(int width, int height, std::string windowName);
		~Window();

		bool IsRunning() { return glfwWindowShouldClose(m_Window); }

	private:

		const int m_Width;
		const int m_Height;

		std::string m_WindowName;

		GLFWwindow* m_Window;

	};

}
