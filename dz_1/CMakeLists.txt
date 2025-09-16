cmake_minimum_required(VERSION 3.14)
project(ClosestPairTonum)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${CMAKE_SOURCE_DIR})

add_executable(closest_pair_tonum main.cpp CPT.cpp)
add_executable(tests1 tests1.cpp CPT.cpp)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.15.0
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

target_link_libraries(tests1 PRIVATE GTest::gtest GTest::gtest_main)
include(GoogleTest)
gtest_discover_tests(tests1)

set_target_properties(closest_pair_tonum tests1 PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)