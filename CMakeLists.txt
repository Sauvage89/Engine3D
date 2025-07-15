cmake_minimum_required(VERSION 3.20)

project(Engine3D)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

# Compile tout les ficher cpp ce trouvant dans cpp/
file(GLOB_RECURSE SOURCES src/*.cpp) 
add_executable(Moteur3D ${SOURCES})

set_target_properties(Moteur3D PROPERTIES
    WIN32_EXECUTABLE TRUE
)