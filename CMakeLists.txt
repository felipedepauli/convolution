# Author: Felipe Camargo de Pauli
# Theia's CMakeLists.txt
# Date: 2017-05-15

# Basic config
cmake_minimum_required(VERSION 3.0)
project( Theia )                                        # Project's name
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14" )  # Enable C++11 standard

set (
    SOURCE
    work/intersection/modules/pretty_math.cpp
    work/intersection/modules/form.cpp
    work/intersection/modules/forms.cpp
    work/intersection/modules/funny_plot.cpp
    work/intersection/include/pretty_math.hpp
    work/intersection/include/funny_plot.hpp
    work/intersection/main.cpp
)
set (
    TESTS
    tests/Test_Rectangles.cpp
)

# OpenCV
find_package( OpenCV REQUIRED )                         # Find OpenCV package in file system
include_directories( ${OpenCV_INCLUDE_DIRS} )           # Include OpenCV's header files

find_package( GTest REQUIRED )
include_directories( ${GTEST_INCLUDE_DIRS} )

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

# Executables
add_executable( Counter ${SOURCE} )                     # Create executable file
add_executable( Tests ${TESTS})

# Linking
target_link_libraries(
    Counter
        ${OpenCV_LIBS}
)

add_library(counter_lib STATIC ${SOURCE})

enable_testing()
add_test(
    NAME Tests
    COMMAND Tests
)


target_link_libraries(
    Tests
        ${OpenCV_LIBS}
        ${GTEST_BOTH_LIBRARIES}
        Threads::Threads
        counter_lib
)