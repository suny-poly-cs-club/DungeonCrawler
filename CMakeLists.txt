
cmake_minimum_required(VERSION 3.5)
project (Dungeon_crawler)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${Dungeon_crawler_SOURCE_DIR}/CMake")
#set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Dungeon_crawler/lib)
#set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Dungeon_crawler/lib)
#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Dungeon_crawler/bin)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE

set(SOURCE_FILES main.cpp Component.hpp Engine.hpp GameObject.hpp GameState.hpp Renderer.hpp)
add_executable(Dungeon_crawler ${SOURCE_FILES})

find_package(GLFW REQUIRED)
find_package(GLEW REQUIRED)
find_package(GLM REQUIRED)

#find_package(PkgConfig REQUIRED)
#pkg_check_modules(GLFW REQUIRED glfw3)

include_directories(
        ${GLEW_INCLUDE_DIR}
        ${GLFW_INCLUDE_DIR}
        ${GLM_INCLUDE_DIR}
        )


target_link_libraries(
        FTF1 ${GLEW_LIBRARY}
        ${GLFW_LIBRARIES}
        ${GLM_LIBRARIES}
        )
        
# g++ -std=c++11  Engine.cpp Main.cpp -lGL -lglfw -lGLEW -o DC
