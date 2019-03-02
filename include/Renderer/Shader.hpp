#pragma once

#include <string>
#include <vector>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

class Shader
{
public:
	Shader(std::string vertex, std::string fragment);
	~Shader();

	//Get ID of program
	GLuint getProgramID();

	//Activate deactive shaders
	void activate();
	void deactivate();

private:
	//Load source code from file source
	std::string loadShaderSource(std::string source);
	
	//Add source to shaders
	void addShaderToProgram(std::string& source, GLenum shaderType);

	//Compile shaders in vector into program and set ID
	bool createProgram();

	//Delete shaders
	void deleteShaders();

	//Delete program
	void deleteProgam();

	std::vector<GLuint> shaderIDs;

	//Program ID
	GLuint progID;
};

