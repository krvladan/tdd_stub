project(tests)

include(GoogleTest)

add_executable(${PROJECT_NAME} "tests.cpp")
target_link_libraries(${PROJECT_NAME} gmock gtest tdd_stub_lib)

gtest_discover_tests(${PROJECT_NAME})
add_test(NAME monolithic COMMAND ${PROJECT_NAME})
