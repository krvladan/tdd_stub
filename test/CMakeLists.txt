project(tests)

add_executable(${PROJECT_NAME} "tests.cpp")
target_link_libraries(${PROJECT_NAME} gmock gtest)
add_dependencies(${PROJECT_NAME} tdd_stub)
include_directories(../src)
