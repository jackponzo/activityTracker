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
include test/CMakeFiles/test.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/test.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/test.dir/flags.make

test/CMakeFiles/test.dir/test_autogen/mocs_compilation.cpp.obj: test/CMakeFiles/test.dir/flags.make
test/CMakeFiles/test.dir/test_autogen/mocs_compilation.cpp.obj: test/CMakeFiles/test.dir/includes_CXX.rsp
test/CMakeFiles/test.dir/test_autogen/mocs_compilation.cpp.obj: test/test_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/test.dir/test_autogen/mocs_compilation.cpp.obj"
	cd /d C:\Users\GIACOM~1\Desktop\ACTIVI~1\CMAKE-~1\test && C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\test.dir\test_autogen\mocs_compilation.cpp.obj -c "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\cmake-build-debug\test\test_autogen\mocs_compilation.cpp"

test/CMakeFiles/test.dir/test_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test.dir/test_autogen/mocs_compilation.cpp.i"
	cd /d C:\Users\GIACOM~1\Desktop\ACTIVI~1\CMAKE-~1\test && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\cmake-build-debug\test\test_autogen\mocs_compilation.cpp" > CMakeFiles\test.dir\test_autogen\mocs_compilation.cpp.i

test/CMakeFiles/test.dir/test_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test.dir/test_autogen/mocs_compilation.cpp.s"
	cd /d C:\Users\GIACOM~1\Desktop\ACTIVI~1\CMAKE-~1\test && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\cmake-build-debug\test\test_autogen\mocs_compilation.cpp" -o CMakeFiles\test.dir\test_autogen\mocs_compilation.cpp.s

test/CMakeFiles/test.dir/main.cpp.obj: test/CMakeFiles/test.dir/flags.make
test/CMakeFiles/test.dir/main.cpp.obj: test/CMakeFiles/test.dir/includes_CXX.rsp
test/CMakeFiles/test.dir/main.cpp.obj: ../test/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object test/CMakeFiles/test.dir/main.cpp.obj"
	cd /d C:\Users\GIACOM~1\Desktop\ACTIVI~1\CMAKE-~1\test && C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\test.dir\main.cpp.obj -c "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\test\main.cpp"

test/CMakeFiles/test.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test.dir/main.cpp.i"
	cd /d C:\Users\GIACOM~1\Desktop\ACTIVI~1\CMAKE-~1\test && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\test\main.cpp" > CMakeFiles\test.dir\main.cpp.i

test/CMakeFiles/test.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test.dir/main.cpp.s"
	cd /d C:\Users\GIACOM~1\Desktop\ACTIVI~1\CMAKE-~1\test && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\test\main.cpp" -o CMakeFiles\test.dir\main.cpp.s

# Object files for target test
test_OBJECTS = \
"CMakeFiles/test.dir/test_autogen/mocs_compilation.cpp.obj" \
"CMakeFiles/test.dir/main.cpp.obj"

# External object files for target test
test_EXTERNAL_OBJECTS =

test/test.exe: test/CMakeFiles/test.dir/test_autogen/mocs_compilation.cpp.obj
test/test.exe: test/CMakeFiles/test.dir/main.cpp.obj
test/test.exe: test/CMakeFiles/test.dir/build.make
test/test.exe: test/CMakeFiles/test.dir/linklibs.rsp
test/test.exe: test/CMakeFiles/test.dir/objects1.rsp
test/test.exe: test/CMakeFiles/test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable test.exe"
	cd /d C:\Users\GIACOM~1\Desktop\ACTIVI~1\CMAKE-~1\test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\test.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/test.dir/build: test/test.exe

.PHONY : test/CMakeFiles/test.dir/build

test/CMakeFiles/test.dir/clean:
	cd /d C:\Users\GIACOM~1\Desktop\ACTIVI~1\CMAKE-~1\test && $(CMAKE_COMMAND) -P CMakeFiles\test.dir\cmake_clean.cmake
.PHONY : test/CMakeFiles/test.dir/clean

test/CMakeFiles/test.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker" "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\test" "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\cmake-build-debug" "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\cmake-build-debug\test" "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\cmake-build-debug\test\CMakeFiles\test.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : test/CMakeFiles/test.dir/depend

