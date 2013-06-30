#include "Demo.hpp"

void Demo::setup()
{
  running = true;

  SDL_Init(SDL_INIT_EVERYTHING);
  SDL_WM_SetCaption("Wrapper Demo", NULL);
  screen = SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE);

  Wrapper::set_screen(screen);
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

    Wrapper::draw_line(250, 0, 250, 600, 0xFF); // Draw a test line

    Wrapper::flip_screen();
    Wrapper::clear_screen(0, 0, 0);
  }
}

int main(int argc, char *argv[])
{
  Demo demo;
  demo.setup();
  demo.run();

  return 0;
}
