#pragma once

#include "GameState.hpp"

class Component
{
public:
	Component();
	~Component();

	virtual void initComponent() = 0;
	virtual void update(GameState& gameState) = 0;
};
