# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/media/pedro/Pedro - HD Externo1/projeto_reconstrucao/fatiador"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/media/pedro/Pedro - HD Externo1/projeto_reconstrucao/fatiador"

# Include any dependencies generated for this target.
include CMakeFiles/binary/main.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/binary/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/binary/main.dir/flags.make

CMakeFiles/binary/main.dir/source/main.o: CMakeFiles/binary/main.dir/flags.make
CMakeFiles/binary/main.dir/source/main.o: source/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/pedro/Pedro - HD Externo1/projeto_reconstrucao/fatiador/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/binary/main.dir/source/main.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/binary/main.dir/source/main.o -c "/media/pedro/Pedro - HD Externo1/projeto_reconstrucao/fatiador/source/main.cpp"

CMakeFiles/binary/main.dir/source/main.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/binary/main.dir/source/main.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/media/pedro/Pedro - HD Externo1/projeto_reconstrucao/fatiador/source/main.cpp" > CMakeFiles/binary/main.dir/source/main.i

CMakeFiles/binary/main.dir/source/main.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/binary/main.dir/source/main.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/media/pedro/Pedro - HD Externo1/projeto_reconstrucao/fatiador/source/main.cpp" -o CMakeFiles/binary/main.dir/source/main.s

CMakeFiles/binary/main.dir/source/main.o.requires:

.PHONY : CMakeFiles/binary/main.dir/source/main.o.requires

CMakeFiles/binary/main.dir/source/main.o.provides: CMakeFiles/binary/main.dir/source/main.o.requires
	$(MAKE) -f CMakeFiles/binary/main.dir/build.make CMakeFiles/binary/main.dir/source/main.o.provides.build
.PHONY : CMakeFiles/binary/main.dir/source/main.o.provides

CMakeFiles/binary/main.dir/source/main.o.provides.build: CMakeFiles/binary/main.dir/source/main.o


# Object files for target binary/main
binary/main_OBJECTS = \
"CMakeFiles/binary/main.dir/source/main.o"

# External object files for target binary/main
binary/main_EXTERNAL_OBJECTS =

binary/main: CMakeFiles/binary/main.dir/source/main.o
binary/main: CMakeFiles/binary/main.dir/build.make
binary/main: /usr/lib/x86_64-linux-gnu/libCGAL_Core.so.13.0.1
binary/main: /usr/lib/x86_64-linux-gnu/libCGAL.so.13.0.1
binary/main: /usr/lib/x86_64-linux-gnu/libgmp.so
binary/main: /usr/lib/x86_64-linux-gnu/libgmpxx.so
binary/main: /usr/lib/x86_64-linux-gnu/libmpfr.so
binary/main: /usr/lib/x86_64-linux-gnu/libboost_thread.so
binary/main: /usr/lib/x86_64-linux-gnu/libboost_system.so
binary/main: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
binary/main: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
binary/main: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
binary/main: /usr/lib/x86_64-linux-gnu/libpthread.so
binary/main: CMakeFiles/binary/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/media/pedro/Pedro - HD Externo1/projeto_reconstrucao/fatiador/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable binary/main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/binary/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/binary/main.dir/build: binary/main

.PHONY : CMakeFiles/binary/main.dir/build

CMakeFiles/binary/main.dir/requires: CMakeFiles/binary/main.dir/source/main.o.requires

.PHONY : CMakeFiles/binary/main.dir/requires

CMakeFiles/binary/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/binary/main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/binary/main.dir/clean

CMakeFiles/binary/main.dir/depend:
	cd "/media/pedro/Pedro - HD Externo1/projeto_reconstrucao/fatiador" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/media/pedro/Pedro - HD Externo1/projeto_reconstrucao/fatiador" "/media/pedro/Pedro - HD Externo1/projeto_reconstrucao/fatiador" "/media/pedro/Pedro - HD Externo1/projeto_reconstrucao/fatiador" "/media/pedro/Pedro - HD Externo1/projeto_reconstrucao/fatiador" "/media/pedro/Pedro - HD Externo1/projeto_reconstrucao/fatiador/CMakeFiles/binary/main.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/binary/main.dir/depend

