# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/thomaspan/personal/cs_31/chapter_18/notes

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/thomaspan/personal/cs_31/chapter_18/notes/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/notes.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/notes.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/notes.dir/flags.make

CMakeFiles/notes.dir/main.cpp.o: CMakeFiles/notes.dir/flags.make
CMakeFiles/notes.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/thomaspan/personal/cs_31/chapter_18/notes/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/notes.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/notes.dir/main.cpp.o -c /Users/thomaspan/personal/cs_31/chapter_18/notes/main.cpp

CMakeFiles/notes.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/notes.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/thomaspan/personal/cs_31/chapter_18/notes/main.cpp > CMakeFiles/notes.dir/main.cpp.i

CMakeFiles/notes.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/notes.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/thomaspan/personal/cs_31/chapter_18/notes/main.cpp -o CMakeFiles/notes.dir/main.cpp.s

CMakeFiles/notes.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/notes.dir/main.cpp.o.requires

CMakeFiles/notes.dir/main.cpp.o.provides: CMakeFiles/notes.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/notes.dir/build.make CMakeFiles/notes.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/notes.dir/main.cpp.o.provides

CMakeFiles/notes.dir/main.cpp.o.provides.build: CMakeFiles/notes.dir/main.cpp.o


# Object files for target notes
notes_OBJECTS = \
"CMakeFiles/notes.dir/main.cpp.o"

# External object files for target notes
notes_EXTERNAL_OBJECTS =

notes: CMakeFiles/notes.dir/main.cpp.o
notes: CMakeFiles/notes.dir/build.make
notes: CMakeFiles/notes.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/thomaspan/personal/cs_31/chapter_18/notes/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable notes"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/notes.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/notes.dir/build: notes

.PHONY : CMakeFiles/notes.dir/build

CMakeFiles/notes.dir/requires: CMakeFiles/notes.dir/main.cpp.o.requires

.PHONY : CMakeFiles/notes.dir/requires

CMakeFiles/notes.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/notes.dir/cmake_clean.cmake
.PHONY : CMakeFiles/notes.dir/clean

CMakeFiles/notes.dir/depend:
	cd /Users/thomaspan/personal/cs_31/chapter_18/notes/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/thomaspan/personal/cs_31/chapter_18/notes /Users/thomaspan/personal/cs_31/chapter_18/notes /Users/thomaspan/personal/cs_31/chapter_18/notes/cmake-build-debug /Users/thomaspan/personal/cs_31/chapter_18/notes/cmake-build-debug /Users/thomaspan/personal/cs_31/chapter_18/notes/cmake-build-debug/CMakeFiles/notes.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/notes.dir/depend

