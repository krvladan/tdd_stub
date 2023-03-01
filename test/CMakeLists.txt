project(tests)

include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.11.0
)

FetchContent_MakeAvailable(googletest)

include(GoogleTest)

add_executable(${PROJECT_NAME} "tests.cpp")
target_link_libraries(${PROJECT_NAME} gmock gtest tdd_stub_lib)

gtest_discover_tests(${PROJECT_NAME})
