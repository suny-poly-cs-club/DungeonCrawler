#include "Engine.hpp"

#define MAJOR 3
#define MINOR 3


Engine::Engine()
{
}


Engine::~Engine()
{
	cleanup();
}

bool Engine::initEngine()
{

	//Initialize GLFW
	if (!glfwInit())
	{
		fprintf(stderr, "Failed to initialize GLFW\n");
		return false;
	}

	//Set Hints
	glfwWindowHint(GLFW_SAMPLES, 4); //4x antialiasing
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, MAJOR); //Opengl 3.3
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, MINOR);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // For Mac
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE); //Set Profile

	//Create Window
	window = glfwCreateWindow(WIDTH, HEIGHT, TITLE, NULL, NULL);
	if (window == NULL) {
		std::cerr << "Failed to open GLFW Window\n";
		glfwTerminate();
		return false;
	}
	glfwMakeContextCurrent(window);

	//Initialize GLEW
	glewExperimental = true;
	if (glewInit() != GLEW_OK) {
		std::cerr << "Failed to initialize GLEW\n";
		glfwTerminate();
		return false;
	}



	return true;

}

bool Engine::initAssets()
{
	gameObjects.push_back(new GameObject());

	return true;
}

void Engine::run()
{
	glfwSetInputMode(window, GLFW_STICKY_KEYS, GL_TRUE);
	//glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_HIDDEN);

	// Enable depth test
	glEnable(GL_DEPTH_TEST);
	// Accept fragment if it closer to the camera than the former one
	glDepthFunc(GL_LESS);
	// Cull triangles which normal is not towards the camera
	glEnable(GL_CULL_FACE);

	//Clear Color
	glClearColor(0.0f, 0.4f, 0.8f, 0.0f);

	//GameState
	GameState gameState;
	//Renderer
	Renderer renderer;

	while (glfwGetKey(window, GLFW_KEY_ESCAPE) != GLFW_PRESS &&
		glfwWindowShouldClose(window) == 0) {

		//Clear
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		//Input
		glfwPollEvents();

		//Update GameState
		gameState.updateState();

		//Update
		for (int i = 0; i < gameObjects.size(); i++) {
			gameObjects.at(i)->update(gameState);
		}

		//Render
		for (int i = 0; i < gameObjects.size(); i++) {
			gameObjects.at(i)->draw(gameState, renderer);
		}


		//End
		glfwSwapBuffers(window);
		glfwPollEvents();

	}
}

void Engine::cleanup()
{
	//Delete gameobjects
	for (int i = 0; i < gameObjects.size(); i++) {
		delete gameObjects.at(i);
	}
	gameObjects.clear();

	glfwTerminate();
}

void Engine::update(GameState & state)
{
}

void Engine::draw(GameState & state, Renderer & renderer)
{
}
