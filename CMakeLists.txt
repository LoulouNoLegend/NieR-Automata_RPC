cmake_minimum_required(VERSION 3.20)

project(nier-automata_rpc)

set(CMAKE_CXX_STANDARD 17)

add_compile_definitions(WIN32_LEAN_AND_MEAN)
add_compile_definitions(NOMINMAX)

if(CMAKE_SIZEOF_VOID_P EQUAL 8)
  set(ARCH_SUFFIX "x64")
else()
  set(ARCH_SUFFIX "x86")
endif()

link_directories(libs)
include_directories(include)
include_directories(src)

file(GLOB_RECURSE SOURCE_FILES src/*.cpp)
file(GLOB_RECURSE LIB_SRC_FILES include/*.cpp)

add_library(nier-automata_rpc SHARED ${SOURCE_FILES} ${LIB_SRC_FILES} dllmain.cpp)
set_target_properties(nier-automata_rpc PROPERTIES OUTPUT_NAME "steam_api64")