# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.29.3/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.29.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/senya/recsys_project_front

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/senya/recsys_project_front/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug

# Include any dependencies generated for this target.
include src/backend/libraries/mysql-queries/CMakeFiles/mysql-queries.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/backend/libraries/mysql-queries/CMakeFiles/mysql-queries.dir/compiler_depend.make

# Include the progress variables for this target.
include src/backend/libraries/mysql-queries/CMakeFiles/mysql-queries.dir/progress.make

# Include the compile flags for this target's objects.
include src/backend/libraries/mysql-queries/CMakeFiles/mysql-queries.dir/flags.make

src/backend/libraries/mysql-queries/CMakeFiles/mysql-queries.dir/mysql-queries.cpp.o: src/backend/libraries/mysql-queries/CMakeFiles/mysql-queries.dir/flags.make
src/backend/libraries/mysql-queries/CMakeFiles/mysql-queries.dir/mysql-queries.cpp.o: /Users/senya/recsys_project_front/src/backend/libraries/mysql-queries/mysql-queries.cpp
src/backend/libraries/mysql-queries/CMakeFiles/mysql-queries.dir/mysql-queries.cpp.o: src/backend/libraries/mysql-queries/CMakeFiles/mysql-queries.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/senya/recsys_project_front/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/backend/libraries/mysql-queries/CMakeFiles/mysql-queries.dir/mysql-queries.cpp.o"
	cd /Users/senya/recsys_project_front/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/src/backend/libraries/mysql-queries && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/backend/libraries/mysql-queries/CMakeFiles/mysql-queries.dir/mysql-queries.cpp.o -MF CMakeFiles/mysql-queries.dir/mysql-queries.cpp.o.d -o CMakeFiles/mysql-queries.dir/mysql-queries.cpp.o -c /Users/senya/recsys_project_front/src/backend/libraries/mysql-queries/mysql-queries.cpp

src/backend/libraries/mysql-queries/CMakeFiles/mysql-queries.dir/mysql-queries.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/mysql-queries.dir/mysql-queries.cpp.i"
	cd /Users/senya/recsys_project_front/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/src/backend/libraries/mysql-queries && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/senya/recsys_project_front/src/backend/libraries/mysql-queries/mysql-queries.cpp > CMakeFiles/mysql-queries.dir/mysql-queries.cpp.i

src/backend/libraries/mysql-queries/CMakeFiles/mysql-queries.dir/mysql-queries.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/mysql-queries.dir/mysql-queries.cpp.s"
	cd /Users/senya/recsys_project_front/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/src/backend/libraries/mysql-queries && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/senya/recsys_project_front/src/backend/libraries/mysql-queries/mysql-queries.cpp -o CMakeFiles/mysql-queries.dir/mysql-queries.cpp.s

# Object files for target mysql-queries
mysql__queries_OBJECTS = \
"CMakeFiles/mysql-queries.dir/mysql-queries.cpp.o"

# External object files for target mysql-queries
mysql__queries_EXTERNAL_OBJECTS =

src/backend/libraries/mysql-queries/libmysql-queries.a: src/backend/libraries/mysql-queries/CMakeFiles/mysql-queries.dir/mysql-queries.cpp.o
src/backend/libraries/mysql-queries/libmysql-queries.a: src/backend/libraries/mysql-queries/CMakeFiles/mysql-queries.dir/build.make
src/backend/libraries/mysql-queries/libmysql-queries.a: src/backend/libraries/mysql-queries/CMakeFiles/mysql-queries.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/senya/recsys_project_front/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libmysql-queries.a"
	cd /Users/senya/recsys_project_front/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/src/backend/libraries/mysql-queries && $(CMAKE_COMMAND) -P CMakeFiles/mysql-queries.dir/cmake_clean_target.cmake
	cd /Users/senya/recsys_project_front/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/src/backend/libraries/mysql-queries && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mysql-queries.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/backend/libraries/mysql-queries/CMakeFiles/mysql-queries.dir/build: src/backend/libraries/mysql-queries/libmysql-queries.a
.PHONY : src/backend/libraries/mysql-queries/CMakeFiles/mysql-queries.dir/build

src/backend/libraries/mysql-queries/CMakeFiles/mysql-queries.dir/clean:
	cd /Users/senya/recsys_project_front/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/src/backend/libraries/mysql-queries && $(CMAKE_COMMAND) -P CMakeFiles/mysql-queries.dir/cmake_clean.cmake
.PHONY : src/backend/libraries/mysql-queries/CMakeFiles/mysql-queries.dir/clean

src/backend/libraries/mysql-queries/CMakeFiles/mysql-queries.dir/depend:
	cd /Users/senya/recsys_project_front/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/senya/recsys_project_front /Users/senya/recsys_project_front/src/backend/libraries/mysql-queries /Users/senya/recsys_project_front/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug /Users/senya/recsys_project_front/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/src/backend/libraries/mysql-queries /Users/senya/recsys_project_front/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/src/backend/libraries/mysql-queries/CMakeFiles/mysql-queries.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/backend/libraries/mysql-queries/CMakeFiles/mysql-queries.dir/depend
