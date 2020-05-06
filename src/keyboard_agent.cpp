#include "keyboard_agent.h"

KeyboardAgent::KeyboardAgent() {}

KeyboardAgent::~KeyboardAgent() {}

Game::INPUT KeyboardAgent::getInput() {
	if (keyboard_keys[KEY_P])
		return Game::INPUT::PAUSED;
	if (keyboard_keys[KEY_R])
		return Game::INPUT::RESTART;

	if (keyboard_keys[KEY_LEFT_BRACKET])
		return Game::INPUT::SPEED_DOWN;
	else if (keyboard_keys[KEY_RIGHT_BRACKET])
		return Game::INPUT::SPEED_UP;

	if (keyboard_keys[KEY_W] || keyboard_keys[KEY_UP])
		return Game::INPUT::UP;
	else if (keyboard_keys[KEY_S] || keyboard_keys[KEY_DOWN])
		return Game::INPUT::DOWN;
	else if (keyboard_keys[KEY_A] || keyboard_keys[KEY_LEFT])
		return Game::INPUT::LEFT;
	else if (keyboard_keys[KEY_D] || keyboard_keys[KEY_RIGHT])
		return Game::INPUT::RIGHT;

	return Game::INPUT::NONE;
}

void KeyboardAgent::update(Game::State* state) {
	for (auto& i : supported_keys)
		keyboard_keys[i] = false;
}

void KeyboardAgent::keyPress(int key) {
	keyboard_keys[key] = GLFW_TRUE;
}

void KeyboardAgent::keyRelease(int key) {
	keyboard_keys[key] = GLFW_FALSE;
}