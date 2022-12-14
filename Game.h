#ifndef _GAME_H
#define _GAME_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>
#include <stdio.h>
#include <iostream>
#include <sstream>
#include <string>
#include "GameBoard.h"
#include "Vector2D.h"
#include "Menu.h"

#define WIDTH 1280
#define HEIGHT 720
using namespace std;
class Game {

private:
    SDL_Window *window;
    bool stop = false;
    bool stop1 = false;
    int P1;
    int P2;

public:
    Menu menu;
    void handleEveants();
    void init(const char *title, int xpos, int ypos, int width, int height, bool fullscreen);
    void update();
    void render();
    void clean();
    void showmenu();
    void MusicPlay(const char *Music, int volume);
    static void LinkStart(string text, int second, int h, int w);

    int playerNumber;
    bool running() { return isRunning; };

    static bool isRunning;

    static SDL_Renderer *renderer;
    static SDL_Event event;

    void getP1(int p);
    void getP2(int p);

    enum groupLabels : std::size_t
    {
        groupBackGrounds,
        groupTextButtoms,
        groupButtoms,
        groupGameBoards,
        groupDoubleGameBoards
    };
};

#endif // _GAME_H
