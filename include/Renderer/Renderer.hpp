#pragma once

#include "Shader.hpp"
#include <vector>

typedef enum{

	SHADER_STANDARD,
	TEXTURE_SHADER

}SHADERS;

class Renderer
{
public:

	Renderer();
	~Renderer();

	//activate and deactivate active shader shader
	void activate();
	void deactivate();

	//Set active shader
	void setShader(SHADERS shader);


private:
	SHADERS currentShader = SHADER_STANDARD;
	std::vector<Shader*> shaders;
};

