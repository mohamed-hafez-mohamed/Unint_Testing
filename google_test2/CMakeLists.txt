cmake_minimum_required(VERSION 4.1.1)
project(MyCppProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Windows-specific settings
if(WIN32)
    set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
    add_definitions(-D_WIN32_WINNT=0x0601)
    
    # Ensure we're using static runtime for consistency
    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
endif()

# Fetch Google Test (works reliably on all platforms)
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9fd7188aa8c636f3b7bb47e.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

set(SOURCES src/calculator.cpp)

add_executable(main_app src/main.cpp ${SOURCES})

enable_testing()
add_subdirectory(tests)