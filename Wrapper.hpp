#ifndef WRAPPER_HPP
#define WRAPPER_HPP

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>

using namespace std;

namespace SDLWrapper
{
  class Wrapper
  {
    private:

    public:
      SDL_Surface static *screen;

      static void set_screen(SDL_Surface *_screen);
      static void set_pixel(int x, int y, Uint8 color);
      static void flip_screen();
      static void clear_screen(int r, int g, int b);
      static SDL_Surface* load_image(char path[500]);
      static void draw_image(SDL_Surface *img, int x, int y, int width, int height);
      static void draw_line(int x1, int y1, int x2, int y2, Uint8 color);
  };
}

#endif
