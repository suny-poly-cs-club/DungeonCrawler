#pragma once

#include "GameState.hpp"
#include "GameObject.hpp"

class GameObject;

class Component
{
public:
	Component(GameObject* go);
	~Component();

	virtual void initComponent();
	virtual void update(GameState& gameState);

private:
	GameObject* gameObject;
};

