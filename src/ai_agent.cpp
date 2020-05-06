#include "ai_agent.h"

AIAgent::AIAgent() {}

AIAgent::~AIAgent() {}

Game::INPUT AIAgent::getInput() {
	return Game::INPUT::NONE;
}

void AIAgent::update(Game::State* state) {}

void AIAgent::keyPress(int key) {}

void AIAgent::keyRelease(int key) {}