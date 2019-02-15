#pragma once
#include <chrono>

class GameState
{
public:
	GameState();
	~GameState();

	//Gets the time since updateState() was last called
	long getTimeMilliseconds();
	long getTimeSeconds();

	//Used to set the reference point for getTimeMilliseconds and getTimeSeconds
	void updateState();

	bool isPaused();
	void setPause(bool pState);

private:
	//The last time that updateState was called
	std::chrono::steady_clock::time_point _lastFrame;

	bool paused;
};
