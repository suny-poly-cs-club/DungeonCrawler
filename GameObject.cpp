#include "GameObject.hpp"


#include <iostream>
GameObject::GameObject()
{
	addComponent<Component>() ? std::cout << "added component!\n" : std::cout << "woops\n";
	removeComponent<Component>() ? std::cout << "removed component!\n" : std::cout << "woops2\n";
	std::cout << components.size() << std::endl;
}


GameObject::~GameObject()
{
	for (int i = 0; i < components.size(); i++) {
		delete components.at(i);
	}
	components.clear();
}

void GameObject::update(GameState & gameState)
{
}

void GameObject::draw(GameState & gameState, Renderer & renderer)
{
}



template<typename T>
bool GameObject::addComponent()
{
	try {
		static_assert(std::is_base_of<Component, T>::value, "type parameter of this class must derive from Component");

		components.push_back(new T(this));
		return true;
	}
	catch (...) {
		std::cerr << "Failed to add component! Type " << typeid(T).name() << "is not a valid type!\n";
		return false;
	}

}

template<typename T>
T* GameObject::getComponent()
{
	for (int i = 0; i < components.size(); i++) {
		//Compare types
		if (typeid(*components.at(i)).name() == typeid(T).name()) {
			return components.at(i);
		}
	}
	return NULL;
}

template<typename T>
bool GameObject::removeComponent()
{
	for (int i = 0; i < components.size(); i++) {
		//Compare types
		if (typeid(*components.at(i)).name() == typeid(T).name()) {
			Component* removedComponent = components.at(i);
			components.erase(components.begin() + i);
			delete removedComponent;
			return true;
		}
	}

	return false;

}
