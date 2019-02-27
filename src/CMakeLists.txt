project(tdd_stub)

set(LIB_SOURCE_FILES
  tdd_stub.cpp
  )

add_library(${PROJECT_NAME}_lib STATIC ${LIB_SOURCE_FILES})
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}_lib)

target_include_directories(${PROJECT_NAME}_lib
	INTERFACE
	${CMAKE_CURRENT_SOURCE_DIR}
)
