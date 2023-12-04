cmake_minimum_required(VERSION 3.24)

project(rpc)

set(CMAKE_CXX_STANDARD 20)

add_compile_definitions(WIN32_LEAN_AND_MEAN)
add_compile_definitions(NOMINMAX)

if(CMAKE_SIZEOF_VOID_P EQUAL 8)
  set(ARCH_SUFFIX "x64")
else()
  set(ARCH_SUFFIX "x86")
endif()

link_directories(libs)
include_directories(include)

add_library(rpc SHARED dllmain.cpp)