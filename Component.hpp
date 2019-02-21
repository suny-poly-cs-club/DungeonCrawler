#pragma once

#include "GameState.hpp"
<<<<<<< HEAD
class Component {
=======
#include "GameObject.hpp"
class Component
{
>>>>>>> master
public:
	Component(GameObject* go);
	~Component();

	virtual void initComponent() = 0;
	virtual void update(GameState& gameState) = 0;

private:
	GameObject* gameObject;
};

