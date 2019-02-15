#pragma once

#include "Component.hpp"
#include "GameState.hpp"
#include "Renderer.hpp"
#include <vector>

class GameObject
{
public:
	GameObject();
	~GameObject();

	void update(GameState& gameState);
	void draw(GameState& gameState, Renderer& renderer);

	bool addComponent();
	bool getComponent();
	bool removeComponent();

private:
	std::vector<Component*> components;
	std::vector<Model*> models;
};

