#pragma once

#include <string>
#include <vector>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

class Shader
{
public:
	Shader(std::string vertex, std::string fragment);
	~Shader();
	//gldeleteShader

	//Get ID of program
	GLuint getProgramID();

	//Activate deactive shaders
	void activate();
	void deactivate();

private:
	//Load source code from file source
	std::string loadShaderSource(std::string source);
	/*
		file io to load the shader source code string
	*/
	
	//Add source to shaders
	void addShaderToProgram(std::string& source, GLenum shaderType);
	/*
		Compiles shader source into glShader
		stores it in shaderIDs
		
		// order matters
		vert 
		frag
	*/

	//Compile shaders in vector into program and set ID
	bool createProgram();
	/*
		loop throught shaderIDs and creates program (lambda) using shaderID 
		loop thru shaderIDs and link link with progID

		totorial 2
		when done detach shaders
		delete shaders

	*/

	std::vector<GLuint> shaderIDs;

	//Program ID
	GLuint progID;
};

