#include "TransformComponent.hpp"



TransformComponent::TransformComponent(GameObject* go) : Component(go)
{
}


TransformComponent::~TransformComponent()
{
}

void TransformComponent::setPosition(float x, float y)
{
	position.x = x;
	position.y = y;
}

void TransformComponent::setScale(float x, float y)
{
	scale.x = x;
	scale.y = y;
}

void TransformComponent::setRotation(float r)
{
	rotation = r;
}

glm::vec2 TransformComponent::getPosition()
{
	return position;
}

glm::vec2 TransformComponent::getScale()
{
	return scale;
}

float TransformComponent::getRotation()
{
	return rotation;
}

void TransformComponent::setPositionX(float x)
{
	position.x = x;
}

void TransformComponent::setPositionY(float y)
{
	position.y = y;
}

void TransformComponent::setScaleX(float x)
{
	scale.x = x;
}

void TransformComponent::setScaleY(float y)
{
	scale.y = y;
}

void TransformComponent::translate(float x, float y) {
	position.x += x;
	position.y += y;
}

void TransformComponent::rotate(float r)
{
	rotation += r;
}
