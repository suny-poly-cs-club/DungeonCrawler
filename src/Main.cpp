#include <iostream>
#include "Engine.hpp"

int main() {

	Engine engine;
	if (!engine.initEngine()) {
		std::cerr << "Could not initialize engine!\n";
		exit(1);
	}
	if (!engine.initAssets()) {
		std::cerr << "Could not initialize assets!\n";
		exit(1);
	}
	engine.run();

	engine.cleanup();

}
