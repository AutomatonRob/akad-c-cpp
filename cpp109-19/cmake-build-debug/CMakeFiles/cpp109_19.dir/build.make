# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /cygdrive/c/Users/rober/.CLion2019.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/rober/.CLion2019.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/git/akad-c-cpp/cpp109-19

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/git/akad-c-cpp/cpp109-19/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cpp109_19.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cpp109_19.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cpp109_19.dir/flags.make

CMakeFiles/cpp109_19.dir/main.c.o: CMakeFiles/cpp109_19.dir/flags.make
CMakeFiles/cpp109_19.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/git/akad-c-cpp/cpp109-19/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/cpp109_19.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/cpp109_19.dir/main.c.o   -c /cygdrive/c/git/akad-c-cpp/cpp109-19/main.c

CMakeFiles/cpp109_19.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cpp109_19.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/git/akad-c-cpp/cpp109-19/main.c > CMakeFiles/cpp109_19.dir/main.c.i

CMakeFiles/cpp109_19.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cpp109_19.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/git/akad-c-cpp/cpp109-19/main.c -o CMakeFiles/cpp109_19.dir/main.c.s

# Object files for target cpp109_19
cpp109_19_OBJECTS = \
"CMakeFiles/cpp109_19.dir/main.c.o"

# External object files for target cpp109_19
cpp109_19_EXTERNAL_OBJECTS =

cpp109_19.exe: CMakeFiles/cpp109_19.dir/main.c.o
cpp109_19.exe: CMakeFiles/cpp109_19.dir/build.make
cpp109_19.exe: CMakeFiles/cpp109_19.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/git/akad-c-cpp/cpp109-19/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable cpp109_19.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cpp109_19.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cpp109_19.dir/build: cpp109_19.exe

.PHONY : CMakeFiles/cpp109_19.dir/build

CMakeFiles/cpp109_19.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cpp109_19.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cpp109_19.dir/clean

CMakeFiles/cpp109_19.dir/depend:
	cd /cygdrive/c/git/akad-c-cpp/cpp109-19/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/git/akad-c-cpp/cpp109-19 /cygdrive/c/git/akad-c-cpp/cpp109-19 /cygdrive/c/git/akad-c-cpp/cpp109-19/cmake-build-debug /cygdrive/c/git/akad-c-cpp/cpp109-19/cmake-build-debug /cygdrive/c/git/akad-c-cpp/cpp109-19/cmake-build-debug/CMakeFiles/cpp109_19.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cpp109_19.dir/depend

