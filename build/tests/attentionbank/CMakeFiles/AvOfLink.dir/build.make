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
include tests/attentionbank/CMakeFiles/AvOfLink.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/attentionbank/CMakeFiles/AvOfLink.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/attentionbank/CMakeFiles/AvOfLink.dir/progress.make

# Include the compile flags for this target's objects.
include tests/attentionbank/CMakeFiles/AvOfLink.dir/flags.make

tests/attentionbank/AvOfLink.cpp: /home/stationone/Desktop/Singularitynet/attention/tests/attentionbank/AvOfLink.cxxtest
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/stationone/Desktop/Singularitynet/attention/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating AvOfLink.cpp"
	cd /home/stationone/Desktop/Singularitynet/attention/build/tests/attentionbank && /usr/bin/cxxtestgen --runner=ErrorPrinter --have-eh -o /home/stationone/Desktop/Singularitynet/attention/build/tests/attentionbank/AvOfLink.cpp /home/stationone/Desktop/Singularitynet/attention/tests/attentionbank/AvOfLink.cxxtest

tests/attentionbank/CMakeFiles/AvOfLink.dir/AvOfLink.cpp.o: tests/attentionbank/CMakeFiles/AvOfLink.dir/flags.make
tests/attentionbank/CMakeFiles/AvOfLink.dir/AvOfLink.cpp.o: tests/attentionbank/AvOfLink.cpp
tests/attentionbank/CMakeFiles/AvOfLink.dir/AvOfLink.cpp.o: tests/attentionbank/CMakeFiles/AvOfLink.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stationone/Desktop/Singularitynet/attention/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tests/attentionbank/CMakeFiles/AvOfLink.dir/AvOfLink.cpp.o"
	cd /home/stationone/Desktop/Singularitynet/attention/build/tests/attentionbank && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/attentionbank/CMakeFiles/AvOfLink.dir/AvOfLink.cpp.o -MF CMakeFiles/AvOfLink.dir/AvOfLink.cpp.o.d -o CMakeFiles/AvOfLink.dir/AvOfLink.cpp.o -c /home/stationone/Desktop/Singularitynet/attention/build/tests/attentionbank/AvOfLink.cpp

tests/attentionbank/CMakeFiles/AvOfLink.dir/AvOfLink.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AvOfLink.dir/AvOfLink.cpp.i"
	cd /home/stationone/Desktop/Singularitynet/attention/build/tests/attentionbank && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stationone/Desktop/Singularitynet/attention/build/tests/attentionbank/AvOfLink.cpp > CMakeFiles/AvOfLink.dir/AvOfLink.cpp.i

tests/attentionbank/CMakeFiles/AvOfLink.dir/AvOfLink.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AvOfLink.dir/AvOfLink.cpp.s"
	cd /home/stationone/Desktop/Singularitynet/attention/build/tests/attentionbank && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stationone/Desktop/Singularitynet/attention/build/tests/attentionbank/AvOfLink.cpp -o CMakeFiles/AvOfLink.dir/AvOfLink.cpp.s

# Object files for target AvOfLink
AvOfLink_OBJECTS = \
"CMakeFiles/AvOfLink.dir/AvOfLink.cpp.o"

# External object files for target AvOfLink
AvOfLink_EXTERNAL_OBJECTS =

tests/attentionbank/AvOfLink: tests/attentionbank/CMakeFiles/AvOfLink.dir/AvOfLink.cpp.o
tests/attentionbank/AvOfLink: tests/attentionbank/CMakeFiles/AvOfLink.dir/build.make
tests/attentionbank/AvOfLink: opencog/attentionbank/bank/libattentionbank.so
tests/attentionbank/AvOfLink: opencog/attentionbank/avalue/libattentionval.so
tests/attentionbank/AvOfLink: /usr/local/lib/opencog/libload_scm.so
tests/attentionbank/AvOfLink: /usr/local/lib/opencog/libpersist.so
tests/attentionbank/AvOfLink: /usr/local/lib/opencog/libstorage-types.so
tests/attentionbank/AvOfLink: /usr/local/lib/opencog/libjson.so
tests/attentionbank/AvOfLink: /usr/local/lib/opencog/libsexpr.so
tests/attentionbank/AvOfLink: opencog/attentionbank/types/libattention-types.so
tests/attentionbank/AvOfLink: /usr/local/lib/opencog/libsmob.so
tests/attentionbank/AvOfLink: /usr/local/lib/opencog/libatombase.so
tests/attentionbank/AvOfLink: /usr/local/lib/opencog/libatomcore.so
tests/attentionbank/AvOfLink: /usr/local/lib/opencog/libatomflow.so
tests/attentionbank/AvOfLink: /usr/local/lib/opencog/libtruthvalue.so
tests/attentionbank/AvOfLink: /usr/local/lib/opencog/libclearbox.so
tests/attentionbank/AvOfLink: /usr/local/lib/opencog/libcontainer.so
tests/attentionbank/AvOfLink: /usr/local/lib/opencog/libpattern.so
tests/attentionbank/AvOfLink: /usr/local/lib/opencog/libquery-engine.so
tests/attentionbank/AvOfLink: /usr/local/lib/opencog/libexecution.so
tests/attentionbank/AvOfLink: /usr/local/lib/opencog/libgrounded.so
tests/attentionbank/AvOfLink: /usr/local/lib/opencog/libatomspace.so
tests/attentionbank/AvOfLink: /usr/local/lib/opencog/libparallel.so
tests/attentionbank/AvOfLink: /usr/lib/x86_64-linux-gnu/libpython3.10.so
tests/attentionbank/AvOfLink: /usr/local/lib/opencog/libvalue.so
tests/attentionbank/AvOfLink: /usr/local/lib/opencog/libatom_types.so
tests/attentionbank/AvOfLink: /usr/local/lib/libguile-3.0.so
tests/attentionbank/AvOfLink: /usr/local/lib/opencog/libcogutil.so
tests/attentionbank/AvOfLink: tests/attentionbank/CMakeFiles/AvOfLink.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/stationone/Desktop/Singularitynet/attention/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable AvOfLink"
	cd /home/stationone/Desktop/Singularitynet/attention/build/tests/attentionbank && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AvOfLink.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/attentionbank/CMakeFiles/AvOfLink.dir/build: tests/attentionbank/AvOfLink
.PHONY : tests/attentionbank/CMakeFiles/AvOfLink.dir/build

tests/attentionbank/CMakeFiles/AvOfLink.dir/clean:
	cd /home/stationone/Desktop/Singularitynet/attention/build/tests/attentionbank && $(CMAKE_COMMAND) -P CMakeFiles/AvOfLink.dir/cmake_clean.cmake
.PHONY : tests/attentionbank/CMakeFiles/AvOfLink.dir/clean

tests/attentionbank/CMakeFiles/AvOfLink.dir/depend: tests/attentionbank/AvOfLink.cpp
	cd /home/stationone/Desktop/Singularitynet/attention/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/stationone/Desktop/Singularitynet/attention /home/stationone/Desktop/Singularitynet/attention/tests/attentionbank /home/stationone/Desktop/Singularitynet/attention/build /home/stationone/Desktop/Singularitynet/attention/build/tests/attentionbank /home/stationone/Desktop/Singularitynet/attention/build/tests/attentionbank/CMakeFiles/AvOfLink.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/attentionbank/CMakeFiles/AvOfLink.dir/depend

