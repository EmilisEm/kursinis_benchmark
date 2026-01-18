cmake_minimum_required(VERSION 3.25)
project(reactive_benchmark VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
set(CMAKE_CXX_EXTENSIONS OFF)

include(FetchContent)

# RxCpp is header-only.
FetchContent_Declare(
  RxCpp
  GIT_REPOSITORY https://github.com/ReactiveX/RxCpp.git
  GIT_TAG v1.0.2
)
FetchContent_MakeAvailable(RxCpp)
set(RXCPP_SOURCE_DIR "${CMAKE_BINARY_DIR}/_deps/rxcpp-src")
set(RXCPP_INCLUDE_DIRS
  ${RXCPP_SOURCE_DIR}
  ${RXCPP_SOURCE_DIR}/Rx/CPP/src
  ${RXCPP_SOURCE_DIR}/Ix/CPP/src
)

# CAF (actor framework) needs a few tweaks.
FetchContent_Declare(
  CAF
  GIT_REPOSITORY https://github.com/actor-framework/actor-framework.git
  GIT_TAG 0.19.6
)
set(CAF_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(CAF_ENABLE_TESTING OFF CACHE BOOL "" FORCE)
set(CAF_INSTALL OFF CACHE BOOL "" FORCE)
set(CAF_ENABLE_SSL OFF CACHE BOOL "" FORCE)
set(CAF_ENABLE_WITH_OPENSSL OFF CACHE BOOL "" FORCE)
set(CAF_ENABLE_STATIC OFF CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(CAF)

FetchContent_Declare(
  benchmark
  GIT_REPOSITORY https://github.com/google/benchmark.git
  GIT_TAG v1.7.0
)
set(BENCHMARK_ENABLE_TESTING OFF CACHE BOOL "" FORCE)
set(BENCHMARK_ENABLE_GTEST_TESTS OFF CACHE BOOL "" FORCE)
set(BENCHMARK_ENABLE_GNU_REGEX OFF CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(benchmark)

add_subdirectory(benchmarks)
