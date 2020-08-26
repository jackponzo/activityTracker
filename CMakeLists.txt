cmake_minimum_required(VERSION 3.17)
project(activityTracker)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_PREFIX_PATH "C:\\Qt\\5.9.9\\mingw53_32\\lib\\cmake")

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

# Find the QtWidgets library
find_package(Qt5Widgets)

add_subdirectory(test)

#set(SOURCE_FILES Source1.h Source1.cpp)
#add_library(core ${SOURCE_FILES})

# Tell CMake to create the helloworld executable
add_executable(activityTracker main.cpp MainWindow.cpp MainWindow.h MainWindow.cpp MainWindow.h NewActivityWindow.cpp NewActivityWindow.h)

# Use the Widgets module from Qt 5.
target_link_libraries(activityTracker Qt5::Widgets)