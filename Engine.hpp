#pragma once
#include "GameState.hpp"
#include <iostream>
#include <vector>
#include "Renderer.hpp"
#include "GameObject.hpp"

using namespace std;

class Engine {
public:
	Engine();
	~Engine();

	void run();
	bool init();
	bool cleanUp();
private:
	GameState state;

	void draw(GameState);
	void update(GameState);
	vector<GameObject*> gameObjects;
	Renderer renderer;
};