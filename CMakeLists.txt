project (demo)
cmake_minimum_required (VERSION 2.8)

find_package (SDL REQUIRED)
find_package (SDL_image REQUIRED)

link_libraries (
  ${SDL_LIBRARY}
  ${SDLIMAGE_LIBRARY}
  SDLmain
)

add_library (Wrapper.o Wrapper.cpp)
add_library (Demo.o Demo.cpp)

link_libraries (Wrapper.o)

add_executable (demo Demo.cpp)
target_link_libraries (demo Wrapper.o)
