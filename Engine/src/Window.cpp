#include "Window.h"

namespace Engine {

	Window::Window(int width, int height, std::string windowName)
		: m_Width(width), m_Height(height), m_WindowName(windowName) {

		glfwInit();
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

		m_Window = glfwCreateWindow(m_Width, m_Height, m_WindowName.c_str(), nullptr, nullptr);

	}

	Window::~Window() {

		glfwDestroyWindow(m_Window);
		glfwTerminate();

	}
}