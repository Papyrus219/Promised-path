cmake_minimum_required(VERSION 3.31)
project(Izrael)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

FetchContent_Declare(nlohmann_json
    GIT_REPOSITORY https://github.com/nlohmann/json.git
    GIT_TAG v3.11.3)

FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 3.0.2
    GIT_SHALLOW ON)

FetchContent_MakeAvailable(SFML nlohmann_json)

file(GLOB_RECURSE SRC src/*.cpp)
set(SOURCE ${SRC})
add_executable(Izrael ${SOURCE})
target_link_libraries(Izrael PRIVATE SFML::Graphics SFML::Audio nlohmann_json)

if (MSVC)
    target_compile_options(Izrael PRIVATE /W4)
else()
    target_compile_options(Izrael PRIVATE -Wall -Wextra -Wpedantic)
endif()
