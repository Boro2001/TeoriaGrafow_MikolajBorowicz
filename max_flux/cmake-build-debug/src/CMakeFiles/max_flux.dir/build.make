# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /snap/clion/151/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/151/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/boro/Dokumenty/tgrafow/TeoriaGrafow_MikolajBorowicz/max_flux

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/boro/Dokumenty/tgrafow/TeoriaGrafow_MikolajBorowicz/max_flux/cmake-build-debug

# Include any dependencies generated for this target.
include src/CMakeFiles/max_flux.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/max_flux.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/max_flux.dir/flags.make

src/CMakeFiles/max_flux.dir/main.cpp.o: src/CMakeFiles/max_flux.dir/flags.make
src/CMakeFiles/max_flux.dir/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/boro/Dokumenty/tgrafow/TeoriaGrafow_MikolajBorowicz/max_flux/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/max_flux.dir/main.cpp.o"
	cd /home/boro/Dokumenty/tgrafow/TeoriaGrafow_MikolajBorowicz/max_flux/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/max_flux.dir/main.cpp.o -c /home/boro/Dokumenty/tgrafow/TeoriaGrafow_MikolajBorowicz/max_flux/src/main.cpp

src/CMakeFiles/max_flux.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/max_flux.dir/main.cpp.i"
	cd /home/boro/Dokumenty/tgrafow/TeoriaGrafow_MikolajBorowicz/max_flux/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/boro/Dokumenty/tgrafow/TeoriaGrafow_MikolajBorowicz/max_flux/src/main.cpp > CMakeFiles/max_flux.dir/main.cpp.i

src/CMakeFiles/max_flux.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/max_flux.dir/main.cpp.s"
	cd /home/boro/Dokumenty/tgrafow/TeoriaGrafow_MikolajBorowicz/max_flux/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/boro/Dokumenty/tgrafow/TeoriaGrafow_MikolajBorowicz/max_flux/src/main.cpp -o CMakeFiles/max_flux.dir/main.cpp.s

# Object files for target max_flux
max_flux_OBJECTS = \
"CMakeFiles/max_flux.dir/main.cpp.o"

# External object files for target max_flux
max_flux_EXTERNAL_OBJECTS =

src/max_flux: src/CMakeFiles/max_flux.dir/main.cpp.o
src/max_flux: src/CMakeFiles/max_flux.dir/build.make
src/max_flux: src/CMakeFiles/max_flux.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/boro/Dokumenty/tgrafow/TeoriaGrafow_MikolajBorowicz/max_flux/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable max_flux"
	cd /home/boro/Dokumenty/tgrafow/TeoriaGrafow_MikolajBorowicz/max_flux/cmake-build-debug/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/max_flux.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/max_flux.dir/build: src/max_flux

.PHONY : src/CMakeFiles/max_flux.dir/build

src/CMakeFiles/max_flux.dir/clean:
	cd /home/boro/Dokumenty/tgrafow/TeoriaGrafow_MikolajBorowicz/max_flux/cmake-build-debug/src && $(CMAKE_COMMAND) -P CMakeFiles/max_flux.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/max_flux.dir/clean

src/CMakeFiles/max_flux.dir/depend:
	cd /home/boro/Dokumenty/tgrafow/TeoriaGrafow_MikolajBorowicz/max_flux/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/boro/Dokumenty/tgrafow/TeoriaGrafow_MikolajBorowicz/max_flux /home/boro/Dokumenty/tgrafow/TeoriaGrafow_MikolajBorowicz/max_flux/src /home/boro/Dokumenty/tgrafow/TeoriaGrafow_MikolajBorowicz/max_flux/cmake-build-debug /home/boro/Dokumenty/tgrafow/TeoriaGrafow_MikolajBorowicz/max_flux/cmake-build-debug/src /home/boro/Dokumenty/tgrafow/TeoriaGrafow_MikolajBorowicz/max_flux/cmake-build-debug/src/CMakeFiles/max_flux.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/max_flux.dir/depend

