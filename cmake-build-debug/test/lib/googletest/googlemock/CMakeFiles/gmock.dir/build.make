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
include test/lib/googletest/googlemock/CMakeFiles/gmock.dir/depend.make

# Include the progress variables for this target.
include test/lib/googletest/googlemock/CMakeFiles/gmock.dir/progress.make

# Include the compile flags for this target's objects.
include test/lib/googletest/googlemock/CMakeFiles/gmock.dir/flags.make

test/lib/googletest/googlemock/CMakeFiles/gmock.dir/gmock_autogen/mocs_compilation.cpp.obj: test/lib/googletest/googlemock/CMakeFiles/gmock.dir/flags.make
test/lib/googletest/googlemock/CMakeFiles/gmock.dir/gmock_autogen/mocs_compilation.cpp.obj: test/lib/googletest/googlemock/CMakeFiles/gmock.dir/includes_CXX.rsp
test/lib/googletest/googlemock/CMakeFiles/gmock.dir/gmock_autogen/mocs_compilation.cpp.obj: test/lib/googletest/googlemock/gmock_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/lib/googletest/googlemock/CMakeFiles/gmock.dir/gmock_autogen/mocs_compilation.cpp.obj"
	cd /d C:\Users\GIACOM~1\Desktop\ACTIVI~1\CMAKE-~1\test\lib\GOOGLE~1\GOOGLE~1 && C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\gmock.dir\gmock_autogen\mocs_compilation.cpp.obj -c "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\cmake-build-debug\test\lib\googletest\googlemock\gmock_autogen\mocs_compilation.cpp"

test/lib/googletest/googlemock/CMakeFiles/gmock.dir/gmock_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gmock.dir/gmock_autogen/mocs_compilation.cpp.i"
	cd /d C:\Users\GIACOM~1\Desktop\ACTIVI~1\CMAKE-~1\test\lib\GOOGLE~1\GOOGLE~1 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\cmake-build-debug\test\lib\googletest\googlemock\gmock_autogen\mocs_compilation.cpp" > CMakeFiles\gmock.dir\gmock_autogen\mocs_compilation.cpp.i

test/lib/googletest/googlemock/CMakeFiles/gmock.dir/gmock_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gmock.dir/gmock_autogen/mocs_compilation.cpp.s"
	cd /d C:\Users\GIACOM~1\Desktop\ACTIVI~1\CMAKE-~1\test\lib\GOOGLE~1\GOOGLE~1 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\cmake-build-debug\test\lib\googletest\googlemock\gmock_autogen\mocs_compilation.cpp" -o CMakeFiles\gmock.dir\gmock_autogen\mocs_compilation.cpp.s

test/lib/googletest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.obj: test/lib/googletest/googlemock/CMakeFiles/gmock.dir/flags.make
test/lib/googletest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.obj: test/lib/googletest/googlemock/CMakeFiles/gmock.dir/includes_CXX.rsp
test/lib/googletest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.obj: ../test/lib/googletest/googlemock/src/gmock-all.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object test/lib/googletest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.obj"
	cd /d C:\Users\GIACOM~1\Desktop\ACTIVI~1\CMAKE-~1\test\lib\GOOGLE~1\GOOGLE~1 && C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\gmock.dir\src\gmock-all.cc.obj -c "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\test\lib\googletest\googlemock\src\gmock-all.cc"

test/lib/googletest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gmock.dir/src/gmock-all.cc.i"
	cd /d C:\Users\GIACOM~1\Desktop\ACTIVI~1\CMAKE-~1\test\lib\GOOGLE~1\GOOGLE~1 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\test\lib\googletest\googlemock\src\gmock-all.cc" > CMakeFiles\gmock.dir\src\gmock-all.cc.i

test/lib/googletest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gmock.dir/src/gmock-all.cc.s"
	cd /d C:\Users\GIACOM~1\Desktop\ACTIVI~1\CMAKE-~1\test\lib\GOOGLE~1\GOOGLE~1 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\test\lib\googletest\googlemock\src\gmock-all.cc" -o CMakeFiles\gmock.dir\src\gmock-all.cc.s

# Object files for target gmock
gmock_OBJECTS = \
"CMakeFiles/gmock.dir/gmock_autogen/mocs_compilation.cpp.obj" \
"CMakeFiles/gmock.dir/src/gmock-all.cc.obj"

# External object files for target gmock
gmock_EXTERNAL_OBJECTS =

lib/libgmockd.a: test/lib/googletest/googlemock/CMakeFiles/gmock.dir/gmock_autogen/mocs_compilation.cpp.obj
lib/libgmockd.a: test/lib/googletest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.obj
lib/libgmockd.a: test/lib/googletest/googlemock/CMakeFiles/gmock.dir/build.make
lib/libgmockd.a: test/lib/googletest/googlemock/CMakeFiles/gmock.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library ..\..\..\..\lib\libgmockd.a"
	cd /d C:\Users\GIACOM~1\Desktop\ACTIVI~1\CMAKE-~1\test\lib\GOOGLE~1\GOOGLE~1 && $(CMAKE_COMMAND) -P CMakeFiles\gmock.dir\cmake_clean_target.cmake
	cd /d C:\Users\GIACOM~1\Desktop\ACTIVI~1\CMAKE-~1\test\lib\GOOGLE~1\GOOGLE~1 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\gmock.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/lib/googletest/googlemock/CMakeFiles/gmock.dir/build: lib/libgmockd.a

.PHONY : test/lib/googletest/googlemock/CMakeFiles/gmock.dir/build

test/lib/googletest/googlemock/CMakeFiles/gmock.dir/clean:
	cd /d C:\Users\GIACOM~1\Desktop\ACTIVI~1\CMAKE-~1\test\lib\GOOGLE~1\GOOGLE~1 && $(CMAKE_COMMAND) -P CMakeFiles\gmock.dir\cmake_clean.cmake
.PHONY : test/lib/googletest/googlemock/CMakeFiles/gmock.dir/clean

test/lib/googletest/googlemock/CMakeFiles/gmock.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker" "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\test\lib\googletest\googlemock" "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\cmake-build-debug" "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\cmake-build-debug\test\lib\googletest\googlemock" "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\cmake-build-debug\test\lib\googletest\googlemock\CMakeFiles\gmock.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : test/lib/googletest/googlemock/CMakeFiles/gmock.dir/depend

