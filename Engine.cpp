#include "Engine.hpp"

Engine::Engine() {
	
}

Engine::~Engine() {

}

void Engine::run() {
	//game loop
	while (true) {
		//poll events
		//update state
		//update (state)
		update(state);
		//draw (state)
		draw(state);
	}
}

bool Engine::init(){}

bool Engine::cleanUp() {}

void Engine::update(GameState gameState) {
	for (int i = 0; i < gameObjects.size; i++) {
		gameObjects.at(i)->update(gameState);
	}
}

void Engine::draw(GameState gameState) {

}