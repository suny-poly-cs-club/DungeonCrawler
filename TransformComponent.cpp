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
