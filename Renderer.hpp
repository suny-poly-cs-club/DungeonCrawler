<<<<<<< HEAD
#pragma once

class Renderer {

};
=======
#pragma once

#include "Shader.hpp"
#include <vector>

typedef enum {

	STANDARD

}SHADERS;

class Renderer
{
public:

	Renderer();
	~Renderer();

	void createProgram();

	std::vector<Shader*> shaders;
};

>>>>>>> master
