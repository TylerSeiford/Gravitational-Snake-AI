#include "agent.h"

Agent::Agent() {}
Agent::~Agent() {}
Game::INPUT Agent::getInput() {
	return Game::INPUT::NONE;
}
void Agent::update(Game::State* state) {}
void Agent::keyPress(int key) {}
void Agent::keyRelease(int key) {}