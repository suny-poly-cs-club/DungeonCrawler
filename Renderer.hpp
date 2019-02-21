#pragma once

<<<<<<< HEAD
class Renderer {

=======
#include "Shader.hpp"
#include <vector>

typedef enum {

	STANDARD

}SHADERS;

class Renderer
{
>>>>>>> master
public:

	Renderer();
	~Renderer();

	void createProgram();

	std::vector<Shader*> shaders;
};

