#pragma once

#include "Window.h"

#include <memory>

namespace Engine {

	class Application {

	public:
		Application();
		void Run();

	private:
		std::unique_ptr<Window> m_Window;

	};

}