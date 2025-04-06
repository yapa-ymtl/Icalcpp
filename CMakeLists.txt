cmake_minimum_required(VERSION 3.10)

project(Icalcpp VERSION 1.0.0 LANGUAGES CXX)

# Specify the header-only library directory
set(ICALCPP_INCLUDE_DIR include)

# Add the header-only library files
file(GLOB_RECURSE ICALCPP_HEADERS "${ICALCPP_INCLUDE_DIR}/*.hpp")

# Install the header files to an appropriate directory
install(DIRECTORY ${ICALCPP_INCLUDE_DIR} DESTINATION include)

# Package version information
configure_file(config.h.in config.h)

# Add the include directory (where your header-only library resides)
include_directories(${CMAKE_SOURCE_DIR}/include)

# Add an executable target from the example code
add_executable(simple_example examples/simple.cpp)

# Provide information about the library
message(STATUS "Icalcpp version: ${PROJECT_VERSION}")
message(STATUS "Include directory: ${ICALCPP_INCLUDE_DIR}")
