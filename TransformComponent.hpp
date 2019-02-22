#pragma once

#include "GameObject.hpp"
#include "Component.hpp"
#include <glm/vec2.hpp>

class GameObject;

class TransformComponent : public Component
{
public:
	TransformComponent(GameObject* go);
	~TransformComponent();

	void setPosition(float x, float y);
	void setScale(float x, float y);
	void setRotation(float d);

	void setPositionX(float x);
	void setPositionY(float y);

	void setScaleX(float w);
	void setScaleY(float w);

	void translate(float x, float y);
	void rotate(float r);

private:
	glm::vec2 position;
	glm::vec2 scale;
	float rotation;
};

