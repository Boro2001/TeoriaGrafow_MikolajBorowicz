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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/boro/Dokumenty/tgrafow/TeoriaGrafow_MikolajBorowicz/max_flux

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/boro/Dokumenty/tgrafow/TeoriaGrafow_MikolajBorowicz/max_flux/build

# Utility rule file for run_max_flux.

# Include the progress variables for this target.
include src/CMakeFiles/run_max_flux.dir/progress.make

src/CMakeFiles/run_max_flux: src/max_flux
	cd /home/boro/Dokumenty/tgrafow/TeoriaGrafow_MikolajBorowicz/max_flux/build/src && ./max_flux

run_max_flux: src/CMakeFiles/run_max_flux
run_max_flux: src/CMakeFiles/run_max_flux.dir/build.make

.PHONY : run_max_flux

# Rule to build all files generated by this target.
src/CMakeFiles/run_max_flux.dir/build: run_max_flux

.PHONY : src/CMakeFiles/run_max_flux.dir/build

src/CMakeFiles/run_max_flux.dir/clean:
	cd /home/boro/Dokumenty/tgrafow/TeoriaGrafow_MikolajBorowicz/max_flux/build/src && $(CMAKE_COMMAND) -P CMakeFiles/run_max_flux.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/run_max_flux.dir/clean

src/CMakeFiles/run_max_flux.dir/depend:
	cd /home/boro/Dokumenty/tgrafow/TeoriaGrafow_MikolajBorowicz/max_flux/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/boro/Dokumenty/tgrafow/TeoriaGrafow_MikolajBorowicz/max_flux /home/boro/Dokumenty/tgrafow/TeoriaGrafow_MikolajBorowicz/max_flux/src /home/boro/Dokumenty/tgrafow/TeoriaGrafow_MikolajBorowicz/max_flux/build /home/boro/Dokumenty/tgrafow/TeoriaGrafow_MikolajBorowicz/max_flux/build/src /home/boro/Dokumenty/tgrafow/TeoriaGrafow_MikolajBorowicz/max_flux/build/src/CMakeFiles/run_max_flux.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/run_max_flux.dir/depend

