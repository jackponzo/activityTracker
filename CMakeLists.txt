cmake_minimum_required(VERSION 3.17)
project(activityTracker)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_PREFIX_PATH "C:\\Qt\\5.9.9\\mingw53_32\\lib\\cmake")

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

# Find the QtWidgets library
find_package(Qt5Widgets)

add_subdirectory(test)

set(SOURCE_FILES main.cpp MainWindow.cpp MainWindow.h MainWindow.cpp MainWindow.h NewActivityWindow.cpp NewActivityWindow.h ListActivityWindow.cpp ListActivityWindow.h Activity.cpp Activity.h Register.cpp Register.h)

# Tell CMake to create the activityTracker executable
add_executable(activityTracker main.cpp)

add_library(core ${SOURCE_FILES})

# Use the Widgets module from Qt 5.
target_link_libraries(core Qt5::Widgets)
target_link_libraries(activityTracker core)

