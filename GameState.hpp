#pragma once
class GameState
{
public:
	GameState();
	~GameState();

	double getTimeMilliseconds();
	double getTimeSeconds();

	bool isPaused();
};

