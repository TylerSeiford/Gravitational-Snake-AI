#pragma once

#include "renderer.h"
#include "game_object.h"
#include "particle_system.h"
#include "audio.h"

#include <vector>

#include <glfw/glfw3.h>


class Game {
public:
	enum class INPUT {
		NONE = 0,
		PAUSED,
		RESTART,
		SPEED_DOWN,
		SPEED_UP,
		UP,
		DOWN,
		LEFT,
		RIGHT
	};

	struct STATE {
		int tile_count_x;
		int tile_count_y;
		Cell head;
		Cell apple;
	};

	void init(int width, int height, int tiles_count);

	void terminate();
	
	void process_input(INPUT input);

	void update(float dt);

	void render();

	void update_dimensions(int width, int height);

	void remove_from_empty_cells(Cell cell);

	void spawn_rock();

	void restart();

private:
	enum class DIRECTION {
		UP, DOWN, LEFT, RIGHT
	};

	int width;
	int height;
	int tile_count_x;
	int tile_count_y;

	bool game_paused;
	bool game_over;
	
	float aspect;
	float cell_width;
	float cell_height;

	float step_timer   = 0;
	float snake_speed  = 8.0f;
	
	unsigned int score = 0;
	
	std::vector<Cell>        empty_cells;
	std::vector<Game_Object> snake;
	std::vector<Game_Object> rocks;

	Cell      snake_last_cell;
	Cell      snake_current_cell;
	DIRECTION old_direction;
	DIRECTION current_direction;
	
	Renderer*        renderer;
	Game_Object*     apple;
	Audio*           audio;
	Particle_System* apple_particles;
	Particle_System* rocks_particles;
};