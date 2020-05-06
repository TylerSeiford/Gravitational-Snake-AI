#pragma once
#include "agent.h"

class DumbAgent : public Agent {
public:
	DumbAgent();
	~DumbAgent();
	Game::INPUT getInput();
	void update(Game::State* state);
	void keyPress(int key);
	void keyRelease(int key);

private:
	uint32_t count = 0;
};