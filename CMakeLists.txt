cmake_minimum_required(VERSION 3.10)

project(Icalcpp VERSION 1.0.0 LANGUAGES CXX)

# Specify C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Specify the header-only library directory
set(ICALCPP_INCLUDE_DIR include)

# Add the header-only library files
file(GLOB_RECURSE ICALCPP_HEADERS "${ICALCPP_INCLUDE_DIR}/*.hpp")

# Create an INTERFACE library target
add_library(${PROJECT_NAME} INTERFACE)
target_include_directories(${PROJECT_NAME} INTERFACE 
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

# Install the header files
install(DIRECTORY ${ICALCPP_INCLUDE_DIR} DESTINATION include)

# Package version information
configure_file(config.h.in config.h)

# Add the example executable
add_executable(simple_example examples/simple.cpp)
target_link_libraries(simple_example PRIVATE ${PROJECT_NAME})

# Enable warnings
if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(simple_example PRIVATE -Wall -Wextra -Wpedantic)
elseif(MSVC)
    target_compile_options(simple_example PRIVATE /W4)
endif()

# Provide information about the library
message(STATUS "Icalcpp version: ${PROJECT_VERSION}")
message(STATUS "Include directory: ${ICALCPP_INCLUDE_DIR}")
message(STATUS "C++ Standard: ${CMAKE_CXX_STANDARD}")
