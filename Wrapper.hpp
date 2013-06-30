#ifndef WRAPPER_HPP
#define WRAPPER_HPP

#include <SDL/SDL.h>

using namespace std;

class Wrapper
{
  private:
    //SDL_Surface *screen;
    
  public:
    SDL_Surface *screen;

    static void set_screen(SDL_Surface *_screen);
    static void set_pixel(int x, int y, Uint8 color);
    static void clear_screen(int r, int g, int b);
    static SDL_Surface* load_image(char path[500]);
    static void draw_image(SDL_Surface *img, int x, int y, int width, int height);
    static void draw_line(int x1, int y1, int x2, int y2, Uint8 color);
};

#endif
