#include "Demo.hpp"

void Demo::setup()
{
  running = true;

  SDL_Init(SDL_INIT_EVERYTHING);
  SDL_WM_SetCaption("Wrapper Demo", NULL);
  screen = SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE);
}

void Demo::run()
{
  while (running)
  {
    SDL_WaitEvent(&event);
    
    if (event.type == SDL_QUIT)
    {
      running = false;
    }

    Wrapper::draw_line(screen, 250, 0, 250, 600, 0xFF); // Draw a test line

    SDL_Flip(screen);
    Wrapper::clear_screen(screen, 0, 0, 0);
  }
}

int main(int argc, char *argv[])
{
  Demo demo;
  demo.setup();
  demo.run();

  return 0;
}
