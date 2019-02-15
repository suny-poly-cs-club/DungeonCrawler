#pragma once

#include "GameState.hpp"
class Component
{
public:
	Component();
	~Component();

	void initComponent();
	void update(GameState& gameState);
};

