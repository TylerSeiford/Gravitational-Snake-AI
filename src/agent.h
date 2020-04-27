#pragma once
#include "game.h"


class Agent {
public:
	Agent();
	~Agent();
	Game::INPUT getInput();
	void update();
	void keyPress(int key);
	void keyRelease(int key);
};