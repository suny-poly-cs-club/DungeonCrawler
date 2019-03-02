#pragma once

#include "Common.hpp"
#include "Renderer.hpp"
#include <vector>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

class Mesh
{
public:
	Mesh(std::vector<Vertex> vertdata);
	~Mesh();

	//Do uniform stuff in here
	virtual void draw(Renderer* renderer);


	GLuint vao = 0;
	GLuint vbo = 0;
	GLuint ebo = 0;

	SHADERS shader = SHADER_STANDARD;
};

