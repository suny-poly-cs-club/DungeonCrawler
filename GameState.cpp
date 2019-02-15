#include "GameState.hpp"
#include <chrono>

GameState::GameState(){
}

GameState::~GameState(){
}

void GameState::updateState(){
  this->_lastFrame = std::chrono::steady_clock::now();
}

long GameState::getTimeMilliseconds(){
  return std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - this->_lastFrame).count();
}

long GameState::getTimeSeconds(){
  return std::chrono::duration_cast<std::chrono::seconds>(std::chrono::steady_clock::now() - this->_lastFrame).count();
}

void GameState::setPause(bool pState){
  this->paused = pState;
}

bool GameState::isPaused(){
  return this->paused;
}
