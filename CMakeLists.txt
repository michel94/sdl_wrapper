project (demo)
cmake_minimum_required (VERSION 2.8)

find_package (SDL REQUIRED)

link_libraries (
  ${SDL_LIBRARY}
  #${SDLIMAGE_LIBRAR}
  SDLmain
)

add_library (Wrapper.o Wrapper.cpp)

link_libraries (Wrapper.o)

add_executable (demo Demo.cpp)
target_link_libraries (demo Wrapper.o)
