# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/lekeifer/CLionProjects/MazeLab

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/lekeifer/CLionProjects/MazeLab/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MazeLab.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MazeLab.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MazeLab.dir/flags.make

CMakeFiles/MazeLab.dir/main.cpp.o: CMakeFiles/MazeLab.dir/flags.make
CMakeFiles/MazeLab.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/lekeifer/CLionProjects/MazeLab/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MazeLab.dir/main.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MazeLab.dir/main.cpp.o -c /Users/lekeifer/CLionProjects/MazeLab/main.cpp

CMakeFiles/MazeLab.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MazeLab.dir/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/lekeifer/CLionProjects/MazeLab/main.cpp > CMakeFiles/MazeLab.dir/main.cpp.i

CMakeFiles/MazeLab.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MazeLab.dir/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/lekeifer/CLionProjects/MazeLab/main.cpp -o CMakeFiles/MazeLab.dir/main.cpp.s

# Object files for target MazeLab
MazeLab_OBJECTS = \
"CMakeFiles/MazeLab.dir/main.cpp.o"

# External object files for target MazeLab
MazeLab_EXTERNAL_OBJECTS =

MazeLab: CMakeFiles/MazeLab.dir/main.cpp.o
MazeLab: CMakeFiles/MazeLab.dir/build.make
MazeLab: CMakeFiles/MazeLab.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/lekeifer/CLionProjects/MazeLab/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MazeLab"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MazeLab.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MazeLab.dir/build: MazeLab

.PHONY : CMakeFiles/MazeLab.dir/build

CMakeFiles/MazeLab.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MazeLab.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MazeLab.dir/clean

CMakeFiles/MazeLab.dir/depend:
	cd /Users/lekeifer/CLionProjects/MazeLab/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/lekeifer/CLionProjects/MazeLab /Users/lekeifer/CLionProjects/MazeLab /Users/lekeifer/CLionProjects/MazeLab/cmake-build-debug /Users/lekeifer/CLionProjects/MazeLab/cmake-build-debug /Users/lekeifer/CLionProjects/MazeLab/cmake-build-debug/CMakeFiles/MazeLab.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MazeLab.dir/depend

