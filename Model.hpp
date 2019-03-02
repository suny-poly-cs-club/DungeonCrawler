#pragma once

#include "Common.hpp"
#include "Mesh.hpp"
#include <vector>
#include "Renderer.hpp"
#include <glm/mat4x4.hpp>

class Model
{
public:
	Model();
	~Model();

	void addMesh(Mesh* mesh);

	virtual void draw(Renderer* renderer, glm::mat4x4 modelMatrix);

private:
	std::vector<Mesh*> meshes;

};

