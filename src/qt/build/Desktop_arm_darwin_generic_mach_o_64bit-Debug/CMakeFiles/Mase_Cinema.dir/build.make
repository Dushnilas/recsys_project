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
CMAKE_SOURCE_DIR = /Users/elizabethstorozheva/Mase_Cinema

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/elizabethstorozheva/Mase_Cinema/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug

# Include any dependencies generated for this target.
include CMakeFiles/Mase_Cinema.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Mase_Cinema.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Mase_Cinema.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Mase_Cinema.dir/flags.make

Mase_Cinema_autogen/timestamp: /opt/homebrew/share/qt/libexec/moc
Mase_Cinema_autogen/timestamp: /opt/homebrew/share/qt/libexec/uic
Mase_Cinema_autogen/timestamp: CMakeFiles/Mase_Cinema.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/elizabethstorozheva/Mase_Cinema/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target Mase_Cinema"
	/opt/homebrew/Cellar/cmake/3.28.1/bin/cmake -E cmake_autogen /Users/elizabethstorozheva/Mase_Cinema/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/CMakeFiles/Mase_Cinema_autogen.dir/AutogenInfo.json Debug
	/opt/homebrew/Cellar/cmake/3.28.1/bin/cmake -E touch /Users/elizabethstorozheva/Mase_Cinema/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/Mase_Cinema_autogen/timestamp

Mase_Cinema_autogen/EWIEGA46WW/qrc_PICS.cpp: /Users/elizabethstorozheva/Mase_Cinema/PICS.qrc
Mase_Cinema_autogen/EWIEGA46WW/qrc_PICS.cpp: CMakeFiles/Mase_Cinema_autogen.dir/AutoRcc_PICS_EWIEGA46WW_Info.json
Mase_Cinema_autogen/EWIEGA46WW/qrc_PICS.cpp: /opt/homebrew/share/qt/libexec/rcc
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/elizabethstorozheva/Mase_Cinema/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Automatic RCC for PICS.qrc"
	/opt/homebrew/Cellar/cmake/3.28.1/bin/cmake -E cmake_autorcc /Users/elizabethstorozheva/Mase_Cinema/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/CMakeFiles/Mase_Cinema_autogen.dir/AutoRcc_PICS_EWIEGA46WW_Info.json Debug

CMakeFiles/Mase_Cinema.dir/Mase_Cinema_autogen/mocs_compilation.cpp.o: CMakeFiles/Mase_Cinema.dir/flags.make
CMakeFiles/Mase_Cinema.dir/Mase_Cinema_autogen/mocs_compilation.cpp.o: Mase_Cinema_autogen/mocs_compilation.cpp
CMakeFiles/Mase_Cinema.dir/Mase_Cinema_autogen/mocs_compilation.cpp.o: CMakeFiles/Mase_Cinema.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/elizabethstorozheva/Mase_Cinema/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Mase_Cinema.dir/Mase_Cinema_autogen/mocs_compilation.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Mase_Cinema.dir/Mase_Cinema_autogen/mocs_compilation.cpp.o -MF CMakeFiles/Mase_Cinema.dir/Mase_Cinema_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/Mase_Cinema.dir/Mase_Cinema_autogen/mocs_compilation.cpp.o -c /Users/elizabethstorozheva/Mase_Cinema/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/Mase_Cinema_autogen/mocs_compilation.cpp

CMakeFiles/Mase_Cinema.dir/Mase_Cinema_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Mase_Cinema.dir/Mase_Cinema_autogen/mocs_compilation.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/elizabethstorozheva/Mase_Cinema/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/Mase_Cinema_autogen/mocs_compilation.cpp > CMakeFiles/Mase_Cinema.dir/Mase_Cinema_autogen/mocs_compilation.cpp.i

CMakeFiles/Mase_Cinema.dir/Mase_Cinema_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Mase_Cinema.dir/Mase_Cinema_autogen/mocs_compilation.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/elizabethstorozheva/Mase_Cinema/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/Mase_Cinema_autogen/mocs_compilation.cpp -o CMakeFiles/Mase_Cinema.dir/Mase_Cinema_autogen/mocs_compilation.cpp.s

CMakeFiles/Mase_Cinema.dir/main.cpp.o: CMakeFiles/Mase_Cinema.dir/flags.make
CMakeFiles/Mase_Cinema.dir/main.cpp.o: /Users/elizabethstorozheva/Mase_Cinema/main.cpp
CMakeFiles/Mase_Cinema.dir/main.cpp.o: CMakeFiles/Mase_Cinema.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/elizabethstorozheva/Mase_Cinema/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Mase_Cinema.dir/main.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Mase_Cinema.dir/main.cpp.o -MF CMakeFiles/Mase_Cinema.dir/main.cpp.o.d -o CMakeFiles/Mase_Cinema.dir/main.cpp.o -c /Users/elizabethstorozheva/Mase_Cinema/main.cpp

CMakeFiles/Mase_Cinema.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Mase_Cinema.dir/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/elizabethstorozheva/Mase_Cinema/main.cpp > CMakeFiles/Mase_Cinema.dir/main.cpp.i

CMakeFiles/Mase_Cinema.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Mase_Cinema.dir/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/elizabethstorozheva/Mase_Cinema/main.cpp -o CMakeFiles/Mase_Cinema.dir/main.cpp.s

CMakeFiles/Mase_Cinema.dir/main_page.cpp.o: CMakeFiles/Mase_Cinema.dir/flags.make
CMakeFiles/Mase_Cinema.dir/main_page.cpp.o: /Users/elizabethstorozheva/Mase_Cinema/main_page.cpp
CMakeFiles/Mase_Cinema.dir/main_page.cpp.o: CMakeFiles/Mase_Cinema.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/elizabethstorozheva/Mase_Cinema/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Mase_Cinema.dir/main_page.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Mase_Cinema.dir/main_page.cpp.o -MF CMakeFiles/Mase_Cinema.dir/main_page.cpp.o.d -o CMakeFiles/Mase_Cinema.dir/main_page.cpp.o -c /Users/elizabethstorozheva/Mase_Cinema/main_page.cpp

CMakeFiles/Mase_Cinema.dir/main_page.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Mase_Cinema.dir/main_page.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/elizabethstorozheva/Mase_Cinema/main_page.cpp > CMakeFiles/Mase_Cinema.dir/main_page.cpp.i

CMakeFiles/Mase_Cinema.dir/main_page.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Mase_Cinema.dir/main_page.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/elizabethstorozheva/Mase_Cinema/main_page.cpp -o CMakeFiles/Mase_Cinema.dir/main_page.cpp.s

CMakeFiles/Mase_Cinema.dir/Mase_Cinema_autogen/EWIEGA46WW/qrc_PICS.cpp.o: CMakeFiles/Mase_Cinema.dir/flags.make
CMakeFiles/Mase_Cinema.dir/Mase_Cinema_autogen/EWIEGA46WW/qrc_PICS.cpp.o: Mase_Cinema_autogen/EWIEGA46WW/qrc_PICS.cpp
CMakeFiles/Mase_Cinema.dir/Mase_Cinema_autogen/EWIEGA46WW/qrc_PICS.cpp.o: CMakeFiles/Mase_Cinema.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/elizabethstorozheva/Mase_Cinema/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Mase_Cinema.dir/Mase_Cinema_autogen/EWIEGA46WW/qrc_PICS.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Mase_Cinema.dir/Mase_Cinema_autogen/EWIEGA46WW/qrc_PICS.cpp.o -MF CMakeFiles/Mase_Cinema.dir/Mase_Cinema_autogen/EWIEGA46WW/qrc_PICS.cpp.o.d -o CMakeFiles/Mase_Cinema.dir/Mase_Cinema_autogen/EWIEGA46WW/qrc_PICS.cpp.o -c /Users/elizabethstorozheva/Mase_Cinema/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/Mase_Cinema_autogen/EWIEGA46WW/qrc_PICS.cpp

CMakeFiles/Mase_Cinema.dir/Mase_Cinema_autogen/EWIEGA46WW/qrc_PICS.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Mase_Cinema.dir/Mase_Cinema_autogen/EWIEGA46WW/qrc_PICS.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/elizabethstorozheva/Mase_Cinema/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/Mase_Cinema_autogen/EWIEGA46WW/qrc_PICS.cpp > CMakeFiles/Mase_Cinema.dir/Mase_Cinema_autogen/EWIEGA46WW/qrc_PICS.cpp.i

CMakeFiles/Mase_Cinema.dir/Mase_Cinema_autogen/EWIEGA46WW/qrc_PICS.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Mase_Cinema.dir/Mase_Cinema_autogen/EWIEGA46WW/qrc_PICS.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/elizabethstorozheva/Mase_Cinema/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/Mase_Cinema_autogen/EWIEGA46WW/qrc_PICS.cpp -o CMakeFiles/Mase_Cinema.dir/Mase_Cinema_autogen/EWIEGA46WW/qrc_PICS.cpp.s

# Object files for target Mase_Cinema
Mase_Cinema_OBJECTS = \
"CMakeFiles/Mase_Cinema.dir/Mase_Cinema_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/Mase_Cinema.dir/main.cpp.o" \
"CMakeFiles/Mase_Cinema.dir/main_page.cpp.o" \
"CMakeFiles/Mase_Cinema.dir/Mase_Cinema_autogen/EWIEGA46WW/qrc_PICS.cpp.o"

# External object files for target Mase_Cinema
Mase_Cinema_EXTERNAL_OBJECTS =

Mase_Cinema.app/Contents/MacOS/Mase_Cinema: CMakeFiles/Mase_Cinema.dir/Mase_Cinema_autogen/mocs_compilation.cpp.o
Mase_Cinema.app/Contents/MacOS/Mase_Cinema: CMakeFiles/Mase_Cinema.dir/main.cpp.o
Mase_Cinema.app/Contents/MacOS/Mase_Cinema: CMakeFiles/Mase_Cinema.dir/main_page.cpp.o
Mase_Cinema.app/Contents/MacOS/Mase_Cinema: CMakeFiles/Mase_Cinema.dir/Mase_Cinema_autogen/EWIEGA46WW/qrc_PICS.cpp.o
Mase_Cinema.app/Contents/MacOS/Mase_Cinema: CMakeFiles/Mase_Cinema.dir/build.make
Mase_Cinema.app/Contents/MacOS/Mase_Cinema: /opt/homebrew/lib/QtWidgets.framework/Versions/A/QtWidgets
Mase_Cinema.app/Contents/MacOS/Mase_Cinema: /opt/homebrew/lib/QtGui.framework/Versions/A/QtGui
Mase_Cinema.app/Contents/MacOS/Mase_Cinema: /opt/homebrew/lib/QtCore.framework/Versions/A/QtCore
Mase_Cinema.app/Contents/MacOS/Mase_Cinema: CMakeFiles/Mase_Cinema.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/elizabethstorozheva/Mase_Cinema/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable Mase_Cinema.app/Contents/MacOS/Mase_Cinema"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Mase_Cinema.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Mase_Cinema.dir/build: Mase_Cinema.app/Contents/MacOS/Mase_Cinema
.PHONY : CMakeFiles/Mase_Cinema.dir/build

CMakeFiles/Mase_Cinema.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Mase_Cinema.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Mase_Cinema.dir/clean

CMakeFiles/Mase_Cinema.dir/depend: Mase_Cinema_autogen/EWIEGA46WW/qrc_PICS.cpp
CMakeFiles/Mase_Cinema.dir/depend: Mase_Cinema_autogen/timestamp
	cd /Users/elizabethstorozheva/Mase_Cinema/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/elizabethstorozheva/Mase_Cinema /Users/elizabethstorozheva/Mase_Cinema /Users/elizabethstorozheva/Mase_Cinema/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug /Users/elizabethstorozheva/Mase_Cinema/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug /Users/elizabethstorozheva/Mase_Cinema/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/CMakeFiles/Mase_Cinema.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Mase_Cinema.dir/depend

