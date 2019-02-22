#pragma once

#include "Component.hpp"
#include "GameState.hpp"
#include "Renderer.hpp"
#include <vector>
#include <typeinfo>
#include <iostream>
#include "TransformComponent.hpp"

class Component;
class TransformComponent;

class GameObject
{
public:
	GameObject();
	~GameObject();

	void update(GameState& gameState);
	void draw(GameState& gameState, Renderer& renderer);

	template<typename T>
	bool addComponent();
	template<typename T>
	T* getComponent();
	template<typename T>
	bool removeComponent();

	TransformComponent* getTransform();

private:
	std::vector<Component*> components;

	TransformComponent* transform;

	//std::vector<Model*> models;
};
