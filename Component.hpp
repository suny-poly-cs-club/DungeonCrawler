#pragma once

#include "GameState.hpp"
#include "GameObject.hpp"
class Component
{
public:
	Component(GameObject* go);
	~Component();

	virtual void initComponent() = 0;
	virtual void update(GameState& gameState) = 0;

private:
	GameObject* gameObject;
};

