cmake_minimum_required(VERSION 3.10)
project(NetworkSimulationGame)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)

# Find and link OpenGL
find_package(OpenGL REQUIRED)

# Add GLFW, GLEW, GLM directories (You can also fetch these via package manager)
include_directories(libs/glfw/include)
include_directories(libs/glew/include)
include_directories(libs/glm)

# Add source files
set(SOURCES
    src/main.cpp
    src/graphics/Shader.cpp
    src/graphics/Camera.cpp
    # src/networking/NetworkManager.cpp   # (Implement later)
)

# Link libraries (Add networking later)
add_executable(NetworkSimulationGame ${SOURCES})
target_link_libraries(NetworkSimulationGame ${OPENGL_LIBRARIES} glfw GLEW::GLEW)
