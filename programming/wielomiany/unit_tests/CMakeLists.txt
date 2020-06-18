cmake_minimum_required(VERSION 3.10)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake-modules")

project(test)

set(CMAKE_CXX_STANDARD 98)

include_directories(../)

# TESTING --------------------
add_definitions(-DBOOST_TEST_DYN_LINK)
include(BoostTestHelper)
add_boost_tests_dir(tests)
