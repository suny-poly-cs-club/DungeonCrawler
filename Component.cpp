#include "Component.hpp"



Component::Component(GameObject* go)
{
	gameObject = go;
}

Component::~Component()
{
}

void Component::initComponent()
{
}

void Component::update(GameState & gameState)
{
}
