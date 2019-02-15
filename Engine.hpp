#pragma once

#include <vector>
#include "GameState.hpp"
#include "Renderer.hpp"
#include "GameObject.h"

class Engine
{
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

	Renderer* renderer;

	std::vector<GameObject*> gameObjects;
};

