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
include libraries/Classes/CMakeFiles/movies.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include libraries/Classes/CMakeFiles/movies.dir/compiler_depend.make

# Include the progress variables for this target.
include libraries/Classes/CMakeFiles/movies.dir/progress.make

# Include the compile flags for this target's objects.
include libraries/Classes/CMakeFiles/movies.dir/flags.make

libraries/Classes/CMakeFiles/movies.dir/movie/movies.cpp.o: libraries/Classes/CMakeFiles/movies.dir/flags.make
libraries/Classes/CMakeFiles/movies.dir/movie/movies.cpp.o: /Users/elizabethstorozheva/CLionProjects/aboba/recsys_project/libraries/Classes/movie/movies.cpp
libraries/Classes/CMakeFiles/movies.dir/movie/movies.cpp.o: libraries/Classes/CMakeFiles/movies.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/elizabethstorozheva/CLionProjects/aboba/recsys_project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object libraries/Classes/CMakeFiles/movies.dir/movie/movies.cpp.o"
	cd /Users/elizabethstorozheva/CLionProjects/aboba/recsys_project/build/libraries/Classes && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libraries/Classes/CMakeFiles/movies.dir/movie/movies.cpp.o -MF CMakeFiles/movies.dir/movie/movies.cpp.o.d -o CMakeFiles/movies.dir/movie/movies.cpp.o -c /Users/elizabethstorozheva/CLionProjects/aboba/recsys_project/libraries/Classes/movie/movies.cpp

libraries/Classes/CMakeFiles/movies.dir/movie/movies.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/movies.dir/movie/movies.cpp.i"
	cd /Users/elizabethstorozheva/CLionProjects/aboba/recsys_project/build/libraries/Classes && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/elizabethstorozheva/CLionProjects/aboba/recsys_project/libraries/Classes/movie/movies.cpp > CMakeFiles/movies.dir/movie/movies.cpp.i

libraries/Classes/CMakeFiles/movies.dir/movie/movies.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/movies.dir/movie/movies.cpp.s"
	cd /Users/elizabethstorozheva/CLionProjects/aboba/recsys_project/build/libraries/Classes && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/elizabethstorozheva/CLionProjects/aboba/recsys_project/libraries/Classes/movie/movies.cpp -o CMakeFiles/movies.dir/movie/movies.cpp.s

# Object files for target movies
movies_OBJECTS = \
"CMakeFiles/movies.dir/movie/movies.cpp.o"

# External object files for target movies
movies_EXTERNAL_OBJECTS =

libraries/Classes/libmovies.a: libraries/Classes/CMakeFiles/movies.dir/movie/movies.cpp.o
libraries/Classes/libmovies.a: libraries/Classes/CMakeFiles/movies.dir/build.make
libraries/Classes/libmovies.a: libraries/Classes/CMakeFiles/movies.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/elizabethstorozheva/CLionProjects/aboba/recsys_project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libmovies.a"
	cd /Users/elizabethstorozheva/CLionProjects/aboba/recsys_project/build/libraries/Classes && $(CMAKE_COMMAND) -P CMakeFiles/movies.dir/cmake_clean_target.cmake
	cd /Users/elizabethstorozheva/CLionProjects/aboba/recsys_project/build/libraries/Classes && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/movies.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
libraries/Classes/CMakeFiles/movies.dir/build: libraries/Classes/libmovies.a
.PHONY : libraries/Classes/CMakeFiles/movies.dir/build

libraries/Classes/CMakeFiles/movies.dir/clean:
	cd /Users/elizabethstorozheva/CLionProjects/aboba/recsys_project/build/libraries/Classes && $(CMAKE_COMMAND) -P CMakeFiles/movies.dir/cmake_clean.cmake
.PHONY : libraries/Classes/CMakeFiles/movies.dir/clean

libraries/Classes/CMakeFiles/movies.dir/depend:
	cd /Users/elizabethstorozheva/CLionProjects/aboba/recsys_project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/elizabethstorozheva/CLionProjects/aboba/recsys_project /Users/elizabethstorozheva/CLionProjects/aboba/recsys_project/libraries/Classes /Users/elizabethstorozheva/CLionProjects/aboba/recsys_project/build /Users/elizabethstorozheva/CLionProjects/aboba/recsys_project/build/libraries/Classes /Users/elizabethstorozheva/CLionProjects/aboba/recsys_project/build/libraries/Classes/CMakeFiles/movies.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : libraries/Classes/CMakeFiles/movies.dir/depend
