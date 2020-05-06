#pragma once
#include "agent.h"

class KeyboardAgent : public Agent {
public:
	KeyboardAgent();
	~KeyboardAgent();
	Game::INPUT getInput();
	void update(Game::State* state);
	void keyPress(int key);
	void keyRelease(int key);

private:
	bool keyboard_keys[1024];

	enum SUPPORTED_KEYS {
		KEY_W = GLFW_KEY_W,
		KEY_S = GLFW_KEY_S,
		KEY_A = GLFW_KEY_A,
		KEY_D = GLFW_KEY_D,
		KEY_P = GLFW_KEY_P,
		KEY_R = GLFW_KEY_R,
		KEY_UP = GLFW_KEY_UP,
		KEY_DOWN = GLFW_KEY_DOWN,
		KEY_LEFT = GLFW_KEY_LEFT,
		KEY_RIGHT = GLFW_KEY_RIGHT,
		KEY_LEFT_BRACKET = GLFW_KEY_LEFT_BRACKET,
		KEY_RIGHT_BRACKET = GLFW_KEY_RIGHT_BRACKET
	};

	int supported_keys[12] = { KEY_UP , KEY_DOWN, KEY_LEFT, KEY_RIGHT, KEY_W, KEY_S, KEY_A, KEY_D, KEY_P, KEY_R, KEY_LEFT_BRACKET, KEY_RIGHT_BRACKET };
};

