#ifndef GAME_HPP
#define GAME_HPP

#include <SDL/SDL.h>

#include "Wrapper.hpp"

using namespace std;

class Demo
{
  private:
    bool running;
    SDL_Event event;

    SDL_Surface *screen;

  public:
    void setup();
    void run();
};

#endif
