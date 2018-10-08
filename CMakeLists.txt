cmake_minimum_required(VERSION 3.2)
project(numpyeigen-example-project)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_BUILD_TYPE "Release")

option(NPE_WITH_EIGEN "Whether to use the bundled version of Eigen" ON)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_SOURCE_DIR}/external/numpyeigen/cmake)
include(numpyeigen)
option(NPE_WITH_EIGEN "Whether to use the bundled version of Eigen" ON)

npe_add_module(npe_example
  BINDING_SOURCES
  ${CMAKE_CURRENT_SOURCE_DIR}/example.cpp)
set_target_properties(npe_example PROPERTIES COMPILE_FLAGS "-fvisibility=hidden -msse2")
