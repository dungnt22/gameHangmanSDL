
#ifndef COMMON_FUNCTION_H_
#define COMMON_FUNCTION_H_

#include <Windows.h>
#include <string>
#include <SDL.h>
#include <vector>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <fstream>

using namespace std;
using std::vector;
using std::string;

static SDL_Window* g_window = NULL;
static SDL_Renderer* g_screen = NULL;
static SDL_Event g_event;
static SDL_Event g_eventmore;

//screen
const int screen_width = 600;
const int screen_heigh = 600;

const int COLOR_KEY_R = 167;
const int COLOR_KEY_G = 175;
const int COLOR_KEY_B = 180;

const int BAD_GUESS_MAX = 9;
const int POWER_MAX = 3;

#endif
