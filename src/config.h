#pragma once

// VISUAL SETTINGS
constexpr int WIDTH = 1280;
constexpr int HEIGHT = 720;
constexpr double FPS = 100;
constexpr bool FULLSCREEN = false;

// GAMEPLAY SETTINGS
constexpr uint32_t TILE_WIDTH = 32;		// TILE WIDTH OF GAME
constexpr bool AUDIO_ENABLED = false;	// ENABLES GAME AUDIO
constexpr bool ROCKS_ENABLED = false;	// ENABLES ROCK SPAWNING
constexpr bool WALLS_ENABLED = true;	// TRUE MAKES WALLS DANGEROUS, FALSE ENABLES WRAP-AROUND

// SPEED SETTINGS
constexpr bool SYNC = true;				// FALSE RUNS GAME AT LIGHTSPEED
constexpr double SPEED = 10.0;			// INITIAL SPEED OF SNAKE
constexpr double SPEEDUP = 0.3f;		// SPEEDUP PER APPLE