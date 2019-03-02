#pragma once

#include <glm/vec3.hpp>
#include <glm/vec2.hpp>

typedef struct Vertex{
	glm::vec3 pos;
	glm::vec2 textcoord;
	glm::vec3 color;

	Vertex(glm::vec3 position, 
			glm::vec2 text,
			glm::vec3 colour) 
		: pos(position), textcoord(text), color(colour){ }
	Vertex(){ }
}Vertex;