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

# Utility rule file for gmock_main_autogen.

# Include the progress variables for this target.
include test/lib/googletest/googlemock/CMakeFiles/gmock_main_autogen.dir/progress.make

test/lib/googletest/googlemock/CMakeFiles/gmock_main_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir="C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target gmock_main"
	cd /d C:\Users\GIACOM~1\Desktop\ACTIVI~1\CMAKE-~1\test\lib\GOOGLE~1\GOOGLE~1 && "C:\Program Files\JetBrains\CLion 2019.3.2\bin\cmake\win\bin\cmake.exe" -E cmake_autogen "C:/Users/Giacomo Ponzuoli/Desktop/activityTracker/cmake-build-debug/test/lib/googletest/googlemock/CMakeFiles/gmock_main_autogen.dir/AutogenInfo.json" Debug

gmock_main_autogen: test/lib/googletest/googlemock/CMakeFiles/gmock_main_autogen
gmock_main_autogen: test/lib/googletest/googlemock/CMakeFiles/gmock_main_autogen.dir/build.make

.PHONY : gmock_main_autogen

# Rule to build all files generated by this target.
test/lib/googletest/googlemock/CMakeFiles/gmock_main_autogen.dir/build: gmock_main_autogen

.PHONY : test/lib/googletest/googlemock/CMakeFiles/gmock_main_autogen.dir/build

test/lib/googletest/googlemock/CMakeFiles/gmock_main_autogen.dir/clean:
	cd /d C:\Users\GIACOM~1\Desktop\ACTIVI~1\CMAKE-~1\test\lib\GOOGLE~1\GOOGLE~1 && $(CMAKE_COMMAND) -P CMakeFiles\gmock_main_autogen.dir\cmake_clean.cmake
.PHONY : test/lib/googletest/googlemock/CMakeFiles/gmock_main_autogen.dir/clean

test/lib/googletest/googlemock/CMakeFiles/gmock_main_autogen.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker" "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\test\lib\googletest\googlemock" "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\cmake-build-debug" "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\cmake-build-debug\test\lib\googletest\googlemock" "C:\Users\Giacomo Ponzuoli\Desktop\activityTracker\cmake-build-debug\test\lib\googletest\googlemock\CMakeFiles\gmock_main_autogen.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : test/lib/googletest/googlemock/CMakeFiles/gmock_main_autogen.dir/depend
