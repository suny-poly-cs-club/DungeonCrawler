#pragma once

<<<<<<< HEAD
<<<<<<< HEAD
class Renderer {

=======
=======
>>>>>>> master
#include "Shader.hpp"
#include <vector>

typedef enum {

	STANDARD

}SHADERS;

class Renderer
{
<<<<<<< HEAD
>>>>>>> master
=======
>>>>>>> master
public:

	Renderer();
	~Renderer();

	void createProgram();

	std::vector<Shader*> shaders;
};

