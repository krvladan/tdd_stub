project(tests)

add_executable(${PROJECT_NAME} "tests.cpp")
target_link_libraries(${PROJECT_NAME} gmock gtest tdd_stub_lib)
target_include_directories(${PROJECT_NAME} PUBLIC ../src)
