# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/activityTracker.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/activityTracker.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/activityTracker.dir/flags.make

CMakeFiles/activityTracker.dir/activityTracker_autogen/mocs_compilation.cpp.obj: CMakeFiles/activityTracker.dir/flags.make
CMakeFiles/activityTracker.dir/activityTracker_autogen/mocs_compilation.cpp.obj: CMakeFiles/activityTracker.dir/includes_CXX.rsp
CMakeFiles/activityTracker.dir/activityTracker_autogen/mocs_compilation.cpp.obj: activityTracker_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/activityTracker.dir/activityTracker_autogen/mocs_compilation.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\activityTracker.dir\activityTracker_autogen\mocs_compilation.cpp.obj -c "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\cmake-build-debug\activityTracker_autogen\mocs_compilation.cpp"

CMakeFiles/activityTracker.dir/activityTracker_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/activityTracker.dir/activityTracker_autogen/mocs_compilation.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\cmake-build-debug\activityTracker_autogen\mocs_compilation.cpp" > CMakeFiles\activityTracker.dir\activityTracker_autogen\mocs_compilation.cpp.i

CMakeFiles/activityTracker.dir/activityTracker_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/activityTracker.dir/activityTracker_autogen/mocs_compilation.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\cmake-build-debug\activityTracker_autogen\mocs_compilation.cpp" -o CMakeFiles\activityTracker.dir\activityTracker_autogen\mocs_compilation.cpp.s

CMakeFiles/activityTracker.dir/main.cpp.obj: CMakeFiles/activityTracker.dir/flags.make
CMakeFiles/activityTracker.dir/main.cpp.obj: CMakeFiles/activityTracker.dir/includes_CXX.rsp
CMakeFiles/activityTracker.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/activityTracker.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\activityTracker.dir\main.cpp.obj -c "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\main.cpp"

CMakeFiles/activityTracker.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/activityTracker.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\main.cpp" > CMakeFiles\activityTracker.dir\main.cpp.i

CMakeFiles/activityTracker.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/activityTracker.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\main.cpp" -o CMakeFiles\activityTracker.dir\main.cpp.s

# Object files for target activityTracker
activityTracker_OBJECTS = \
"CMakeFiles/activityTracker.dir/activityTracker_autogen/mocs_compilation.cpp.obj" \
"CMakeFiles/activityTracker.dir/main.cpp.obj"

# External object files for target activityTracker
activityTracker_EXTERNAL_OBJECTS =

activityTracker.exe: CMakeFiles/activityTracker.dir/activityTracker_autogen/mocs_compilation.cpp.obj
activityTracker.exe: CMakeFiles/activityTracker.dir/main.cpp.obj
activityTracker.exe: CMakeFiles/activityTracker.dir/build.make
activityTracker.exe: libcore.a
activityTracker.exe: C:/Qt/5.9.9/mingw53_32/lib/libQt5Widgetsd.a
activityTracker.exe: C:/Qt/5.9.9/mingw53_32/lib/libQt5Guid.a
activityTracker.exe: C:/Qt/5.9.9/mingw53_32/lib/libQt5Cored.a
activityTracker.exe: CMakeFiles/activityTracker.dir/linklibs.rsp
activityTracker.exe: CMakeFiles/activityTracker.dir/objects1.rsp
activityTracker.exe: CMakeFiles/activityTracker.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable activityTracker.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\activityTracker.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/activityTracker.dir/build: activityTracker.exe

.PHONY : CMakeFiles/activityTracker.dir/build

CMakeFiles/activityTracker.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\activityTracker.dir\cmake_clean.cmake
.PHONY : CMakeFiles/activityTracker.dir/clean

CMakeFiles/activityTracker.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker" "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker" "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\cmake-build-debug" "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\cmake-build-debug" "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\cmake-build-debug\CMakeFiles\activityTracker.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/activityTracker.dir/depend

