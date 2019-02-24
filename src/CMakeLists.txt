project(tdd_stub)

add_library(${PROJECT_NAME}_lib STATIC game.h game.cpp)
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}_lib)