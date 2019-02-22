<<<<<<< HEAD
#pragma once

class GameState {
public:
	double getMilli();
	double getSeconds();
};
=======
#pragma once
class GameState {
public:
	GameState();
	~GameState();

	double getTimeMilliseconds();
	double getTimeSeconds();

	void updateState();

	bool isPaused();
};

>>>>>>> master
