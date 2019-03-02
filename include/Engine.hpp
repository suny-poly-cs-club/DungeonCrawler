#pragma once

#include <vector>
#include "GameState.hpp"
#include "Renderer/Renderer.hpp"
#include "GameObject.hpp"
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

class Engine {
	
public:
	Engine();
	~Engine();

	bool initEngine();
	bool initAssets();
	void run();
	void cleanup();

private:
	void update(GameState& state);
	void draw(GameState& state, Renderer& renderer);

	std::vector<GameObject*> gameObjects;

	GLFWwindow* window;

	const int WIDTH = 800;
	const int HEIGHT = 800;
	const char* TITLE = "Engine";
};

