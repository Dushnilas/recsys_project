# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.28.1/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.28.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/elizabethstorozheva/CLionProjects/aboba/recsys_project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/elizabethstorozheva/CLionProjects/aboba/recsys_project/build

# Include any dependencies generated for this target.
include src/backend/CMakeFiles/main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/backend/CMakeFiles/main.dir/compiler_depend.make

# Include the progress variables for this target.
include src/backend/CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include src/backend/CMakeFiles/main.dir/flags.make

src/backend/CMakeFiles/main.dir/main.cpp.o: src/backend/CMakeFiles/main.dir/flags.make
src/backend/CMakeFiles/main.dir/main.cpp.o: /Users/elizabethstorozheva/CLionProjects/aboba/recsys_project/src/backend/main.cpp
src/backend/CMakeFiles/main.dir/main.cpp.o: src/backend/CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/elizabethstorozheva/CLionProjects/aboba/recsys_project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/backend/CMakeFiles/main.dir/main.cpp.o"
	cd /Users/elizabethstorozheva/CLionProjects/aboba/recsys_project/build/src/backend && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/backend/CMakeFiles/main.dir/main.cpp.o -MF CMakeFiles/main.dir/main.cpp.o.d -o CMakeFiles/main.dir/main.cpp.o -c /Users/elizabethstorozheva/CLionProjects/aboba/recsys_project/src/backend/main.cpp

src/backend/CMakeFiles/main.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/main.cpp.i"
	cd /Users/elizabethstorozheva/CLionProjects/aboba/recsys_project/build/src/backend && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/elizabethstorozheva/CLionProjects/aboba/recsys_project/src/backend/main.cpp > CMakeFiles/main.dir/main.cpp.i

src/backend/CMakeFiles/main.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/main.cpp.s"
	cd /Users/elizabethstorozheva/CLionProjects/aboba/recsys_project/build/src/backend && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/elizabethstorozheva/CLionProjects/aboba/recsys_project/src/backend/main.cpp -o CMakeFiles/main.dir/main.cpp.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/main.cpp.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

src/backend/main: src/backend/CMakeFiles/main.dir/main.cpp.o
src/backend/main: src/backend/CMakeFiles/main.dir/build.make
src/backend/main: libraries/cosine_distance/libcosine_distance.a
src/backend/main: libraries/word_to_vec/libword_to_vec.a
src/backend/main: libraries/Classes/libuser_and_dev.a
src/backend/main: libraries/Classes/libmovies.a
src/backend/main: libraries/Classes/liblogger.a
src/backend/main: src/backend/CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/elizabethstorozheva/CLionProjects/aboba/recsys_project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable main"
	cd /Users/elizabethstorozheva/CLionProjects/aboba/recsys_project/build/src/backend && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/backend/CMakeFiles/main.dir/build: src/backend/main
.PHONY : src/backend/CMakeFiles/main.dir/build

src/backend/CMakeFiles/main.dir/clean:
	cd /Users/elizabethstorozheva/CLionProjects/aboba/recsys_project/build/src/backend && $(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : src/backend/CMakeFiles/main.dir/clean

src/backend/CMakeFiles/main.dir/depend:
	cd /Users/elizabethstorozheva/CLionProjects/aboba/recsys_project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/elizabethstorozheva/CLionProjects/aboba/recsys_project /Users/elizabethstorozheva/CLionProjects/aboba/recsys_project/src/backend /Users/elizabethstorozheva/CLionProjects/aboba/recsys_project/build /Users/elizabethstorozheva/CLionProjects/aboba/recsys_project/build/src/backend /Users/elizabethstorozheva/CLionProjects/aboba/recsys_project/build/src/backend/CMakeFiles/main.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/backend/CMakeFiles/main.dir/depend
