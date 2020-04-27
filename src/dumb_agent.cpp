#include "dumb_agent.h"

DumbAgent::DumbAgent() {}

DumbAgent::~DumbAgent() {}

Game::INPUT DumbAgent::getInput() {
	switch (count % 4) {
	case 0:
		return Game::INPUT::UP;
	case 1:
		return Game::INPUT::LEFT;
	case 2:
		return Game::INPUT::DOWN;
	case 3:
		return Game::INPUT::RIGHT;
	default:
		return Game::INPUT::NONE;
	}
}

void DumbAgent::update() {
	count = (count + 1) % 4;
}

void DumbAgent::keyPress(int key) {}

void DumbAgent::keyRelease(int key) {}