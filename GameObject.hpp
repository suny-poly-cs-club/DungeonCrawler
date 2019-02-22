#pragma once

#include "Component.hpp"
#include "GameState.hpp"
#include "Renderer.hpp"
#include <vector>
<<<<<<< HEAD
<<<<<<< HEAD
#include <iostream>
=======
#include <typeinfo>
>>>>>>> master
=======
#include <typeinfo>
>>>>>>> master

class Component;

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

private:
	std::vector<Component*> components;
	//std::vector<Model*> models;
};
