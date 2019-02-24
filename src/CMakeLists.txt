project(tdd_stub)

add_executable(${PROJECT_NAME} main.cpp game.h game.cpp)
add_library(${PROJECT_NAME}_lib game.h game.cpp)