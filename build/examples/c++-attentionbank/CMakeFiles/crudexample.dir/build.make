# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

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
CMAKE_COMMAND = /opt/cmake/bin/cmake

# The command to remove a file.
RM = /opt/cmake/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/stationone/Desktop/Singularitynet/attention

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/stationone/Desktop/Singularitynet/attention/build

# Include any dependencies generated for this target.
include examples/c++-attentionbank/CMakeFiles/crudexample.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include examples/c++-attentionbank/CMakeFiles/crudexample.dir/compiler_depend.make

# Include the progress variables for this target.
include examples/c++-attentionbank/CMakeFiles/crudexample.dir/progress.make

# Include the compile flags for this target's objects.
include examples/c++-attentionbank/CMakeFiles/crudexample.dir/flags.make

examples/c++-attentionbank/CMakeFiles/crudexample.dir/CRUDExample.cc.o: examples/c++-attentionbank/CMakeFiles/crudexample.dir/flags.make
examples/c++-attentionbank/CMakeFiles/crudexample.dir/CRUDExample.cc.o: /home/stationone/Desktop/Singularitynet/attention/examples/c++-attentionbank/CRUDExample.cc
examples/c++-attentionbank/CMakeFiles/crudexample.dir/CRUDExample.cc.o: examples/c++-attentionbank/CMakeFiles/crudexample.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stationone/Desktop/Singularitynet/attention/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/c++-attentionbank/CMakeFiles/crudexample.dir/CRUDExample.cc.o"
	cd /home/stationone/Desktop/Singularitynet/attention/build/examples/c++-attentionbank && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT examples/c++-attentionbank/CMakeFiles/crudexample.dir/CRUDExample.cc.o -MF CMakeFiles/crudexample.dir/CRUDExample.cc.o.d -o CMakeFiles/crudexample.dir/CRUDExample.cc.o -c /home/stationone/Desktop/Singularitynet/attention/examples/c++-attentionbank/CRUDExample.cc

examples/c++-attentionbank/CMakeFiles/crudexample.dir/CRUDExample.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/crudexample.dir/CRUDExample.cc.i"
	cd /home/stationone/Desktop/Singularitynet/attention/build/examples/c++-attentionbank && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stationone/Desktop/Singularitynet/attention/examples/c++-attentionbank/CRUDExample.cc > CMakeFiles/crudexample.dir/CRUDExample.cc.i

examples/c++-attentionbank/CMakeFiles/crudexample.dir/CRUDExample.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/crudexample.dir/CRUDExample.cc.s"
	cd /home/stationone/Desktop/Singularitynet/attention/build/examples/c++-attentionbank && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stationone/Desktop/Singularitynet/attention/examples/c++-attentionbank/CRUDExample.cc -o CMakeFiles/crudexample.dir/CRUDExample.cc.s

# Object files for target crudexample
crudexample_OBJECTS = \
"CMakeFiles/crudexample.dir/CRUDExample.cc.o"

# External object files for target crudexample
crudexample_EXTERNAL_OBJECTS =

examples/c++-attentionbank/crudexample: examples/c++-attentionbank/CMakeFiles/crudexample.dir/CRUDExample.cc.o
examples/c++-attentionbank/crudexample: examples/c++-attentionbank/CMakeFiles/crudexample.dir/build.make
examples/c++-attentionbank/crudexample: opencog/attentionbank/bank/libattentionbank.so
examples/c++-attentionbank/crudexample: opencog/attentionbank/avalue/libattentionval.so
examples/c++-attentionbank/crudexample: opencog/attentionbank/types/libattention-types.so
examples/c++-attentionbank/crudexample: /usr/local/lib/opencog/libload_scm.so
examples/c++-attentionbank/crudexample: /usr/local/lib/opencog/libpersist.so
examples/c++-attentionbank/crudexample: /usr/local/lib/opencog/libstorage-types.so
examples/c++-attentionbank/crudexample: /usr/local/lib/opencog/libjson.so
examples/c++-attentionbank/crudexample: /usr/local/lib/opencog/libsexpr.so
examples/c++-attentionbank/crudexample: /usr/local/lib/opencog/libsmob.so
examples/c++-attentionbank/crudexample: /usr/local/lib/opencog/libatomspace.so
examples/c++-attentionbank/crudexample: /usr/local/lib/opencog/libclearbox.so
examples/c++-attentionbank/crudexample: /usr/local/lib/opencog/libcontainer.so
examples/c++-attentionbank/crudexample: /usr/local/lib/opencog/libpattern.so
examples/c++-attentionbank/crudexample: /usr/local/lib/opencog/libgrounded.so
examples/c++-attentionbank/crudexample: /usr/local/lib/opencog/libexecution.so
examples/c++-attentionbank/crudexample: /usr/local/lib/opencog/libatomflow.so
examples/c++-attentionbank/crudexample: /usr/local/lib/opencog/libatomcore.so
examples/c++-attentionbank/crudexample: /usr/local/lib/opencog/libatombase.so
examples/c++-attentionbank/crudexample: /usr/local/lib/opencog/libtruthvalue.so
examples/c++-attentionbank/crudexample: /usr/local/lib/opencog/libquery-engine.so
examples/c++-attentionbank/crudexample: /usr/local/lib/opencog/libparallel.so
examples/c++-attentionbank/crudexample: /usr/local/lib/opencog/libvalue.so
examples/c++-attentionbank/crudexample: /usr/local/lib/opencog/libatom_types.so
examples/c++-attentionbank/crudexample: /usr/lib/x86_64-linux-gnu/libpython3.10.so
examples/c++-attentionbank/crudexample: /usr/local/lib/libguile-3.0.so
examples/c++-attentionbank/crudexample: /usr/local/lib/opencog/libcogutil.so
examples/c++-attentionbank/crudexample: examples/c++-attentionbank/CMakeFiles/crudexample.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/stationone/Desktop/Singularitynet/attention/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable crudexample"
	cd /home/stationone/Desktop/Singularitynet/attention/build/examples/c++-attentionbank && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/crudexample.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/c++-attentionbank/CMakeFiles/crudexample.dir/build: examples/c++-attentionbank/crudexample
.PHONY : examples/c++-attentionbank/CMakeFiles/crudexample.dir/build

examples/c++-attentionbank/CMakeFiles/crudexample.dir/clean:
	cd /home/stationone/Desktop/Singularitynet/attention/build/examples/c++-attentionbank && $(CMAKE_COMMAND) -P CMakeFiles/crudexample.dir/cmake_clean.cmake
.PHONY : examples/c++-attentionbank/CMakeFiles/crudexample.dir/clean

examples/c++-attentionbank/CMakeFiles/crudexample.dir/depend:
	cd /home/stationone/Desktop/Singularitynet/attention/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/stationone/Desktop/Singularitynet/attention /home/stationone/Desktop/Singularitynet/attention/examples/c++-attentionbank /home/stationone/Desktop/Singularitynet/attention/build /home/stationone/Desktop/Singularitynet/attention/build/examples/c++-attentionbank /home/stationone/Desktop/Singularitynet/attention/build/examples/c++-attentionbank/CMakeFiles/crudexample.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/c++-attentionbank/CMakeFiles/crudexample.dir/depend

