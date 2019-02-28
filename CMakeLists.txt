cmake_minimum_required(VERSION 2.8)
# Name of the project
project(dungeonCrawler)

# Grab the header files from the include directory
include_directories(include)

# Create a list of source files from the src directory.
# Name this list "SOURCES"
file (GLOB SOURCES "src/*.cpp")

find_package(PkgConfig REQUIRED)
pkg_search_module(GLFW REQUIRED glfw3)
include_directories(${GLFW_INCLUDE_DIRS})

find_package(GLEW REQUIRED)
include_directories(${GLEW_INCLUDE_DIRS})

find_package(glm REQUIRED)

# Create a collection of every library so far
# set(EVERY_LIB ${GLFW_LIBRARIES} ${GLEW_LIBRARIES} ${GLM_LIBRARIES})

# Build the exectuable file from the source files
add_executable(dungeonCrawler ${SOURCES})

# Link the library collection to the executable
# target_link_libraries(dungeonCrawler ${EVERY_LIB})
target_link_libraries(dungeonCrawler ${GLFW_LIBRARIES} ${GLEW_LIBRARIES})
