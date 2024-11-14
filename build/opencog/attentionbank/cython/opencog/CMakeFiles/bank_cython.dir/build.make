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
include opencog/attentionbank/cython/opencog/CMakeFiles/bank_cython.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include opencog/attentionbank/cython/opencog/CMakeFiles/bank_cython.dir/compiler_depend.make

# Include the progress variables for this target.
include opencog/attentionbank/cython/opencog/CMakeFiles/bank_cython.dir/progress.make

# Include the compile flags for this target's objects.
include opencog/attentionbank/cython/opencog/CMakeFiles/bank_cython.dir/flags.make

opencog/attentionbank/cython/opencog/bank.cpp: /home/stationone/Desktop/Singularitynet/attention/opencog/attentionbank/cython/opencog/bank.pyx
opencog/attentionbank/cython/opencog/bank.cpp: /home/stationone/Desktop/Singularitynet/attention/opencog/attentionbank/cython/opencog/bank.pxd
opencog/attentionbank/cython/opencog/bank.cpp: /home/stationone/Desktop/Singularitynet/attention/opencog/attentionbank/cython/opencog/bank.pyx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/stationone/Desktop/Singularitynet/attention/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Cythonizing bank.pyx"
	cd /home/stationone/Desktop/Singularitynet/attention/build/opencog/attentionbank/cython/opencog && /home/stationone/.local/bin/cython -3 -f -I /usr/local/include//opencog/cython -I /usr/local/include//opencog/cython/opencog -I /home/stationone/Desktop/Singularitynet/attention/build -I /home/stationone/Desktop/Singularitynet/attention/opencog/attentionbank/cython/opencog -o bank.cpp --cplus /home/stationone/Desktop/Singularitynet/attention/opencog/attentionbank/cython/opencog/bank.pyx

opencog/attentionbank/cython/opencog/CMakeFiles/bank_cython.dir/bank.cpp.o: opencog/attentionbank/cython/opencog/CMakeFiles/bank_cython.dir/flags.make
opencog/attentionbank/cython/opencog/CMakeFiles/bank_cython.dir/bank.cpp.o: opencog/attentionbank/cython/opencog/bank.cpp
opencog/attentionbank/cython/opencog/CMakeFiles/bank_cython.dir/bank.cpp.o: opencog/attentionbank/cython/opencog/CMakeFiles/bank_cython.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stationone/Desktop/Singularitynet/attention/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object opencog/attentionbank/cython/opencog/CMakeFiles/bank_cython.dir/bank.cpp.o"
	cd /home/stationone/Desktop/Singularitynet/attention/build/opencog/attentionbank/cython/opencog && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT opencog/attentionbank/cython/opencog/CMakeFiles/bank_cython.dir/bank.cpp.o -MF CMakeFiles/bank_cython.dir/bank.cpp.o.d -o CMakeFiles/bank_cython.dir/bank.cpp.o -c /home/stationone/Desktop/Singularitynet/attention/build/opencog/attentionbank/cython/opencog/bank.cpp

opencog/attentionbank/cython/opencog/CMakeFiles/bank_cython.dir/bank.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bank_cython.dir/bank.cpp.i"
	cd /home/stationone/Desktop/Singularitynet/attention/build/opencog/attentionbank/cython/opencog && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stationone/Desktop/Singularitynet/attention/build/opencog/attentionbank/cython/opencog/bank.cpp > CMakeFiles/bank_cython.dir/bank.cpp.i

opencog/attentionbank/cython/opencog/CMakeFiles/bank_cython.dir/bank.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bank_cython.dir/bank.cpp.s"
	cd /home/stationone/Desktop/Singularitynet/attention/build/opencog/attentionbank/cython/opencog && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stationone/Desktop/Singularitynet/attention/build/opencog/attentionbank/cython/opencog/bank.cpp -o CMakeFiles/bank_cython.dir/bank.cpp.s

# Object files for target bank_cython
bank_cython_OBJECTS = \
"CMakeFiles/bank_cython.dir/bank.cpp.o"

# External object files for target bank_cython
bank_cython_EXTERNAL_OBJECTS =

opencog/attentionbank/cython/opencog/bank.so: opencog/attentionbank/cython/opencog/CMakeFiles/bank_cython.dir/bank.cpp.o
opencog/attentionbank/cython/opencog/bank.so: opencog/attentionbank/cython/opencog/CMakeFiles/bank_cython.dir/build.make
opencog/attentionbank/cython/opencog/bank.so: opencog/attentionbank/bank/libattentionbank.so
opencog/attentionbank/cython/opencog/bank.so: /usr/local/lib/opencog/libcogutil.so
opencog/attentionbank/cython/opencog/bank.so: /usr/lib/x86_64-linux-gnu/libpython3.10.so
opencog/attentionbank/cython/opencog/bank.so: opencog/attentionbank/avalue/libattentionval.so
opencog/attentionbank/cython/opencog/bank.so: /usr/local/lib/opencog/libload_scm.so
opencog/attentionbank/cython/opencog/bank.so: /usr/local/lib/opencog/libpersist.so
opencog/attentionbank/cython/opencog/bank.so: /usr/local/lib/opencog/libstorage-types.so
opencog/attentionbank/cython/opencog/bank.so: /usr/local/lib/opencog/libjson.so
opencog/attentionbank/cython/opencog/bank.so: /usr/local/lib/opencog/libsexpr.so
opencog/attentionbank/cython/opencog/bank.so: /usr/local/lib/opencog/libsmob.so
opencog/attentionbank/cython/opencog/bank.so: /usr/local/lib/libguile-3.0.so
opencog/attentionbank/cython/opencog/bank.so: opencog/attentionbank/types/libattention-types.so
opencog/attentionbank/cython/opencog/bank.so: /usr/local/lib/opencog/libatombase.so
opencog/attentionbank/cython/opencog/bank.so: /usr/local/lib/opencog/libatomcore.so
opencog/attentionbank/cython/opencog/bank.so: /usr/local/lib/opencog/libatomflow.so
opencog/attentionbank/cython/opencog/bank.so: /usr/local/lib/opencog/libtruthvalue.so
opencog/attentionbank/cython/opencog/bank.so: /usr/local/lib/opencog/libclearbox.so
opencog/attentionbank/cython/opencog/bank.so: /usr/local/lib/opencog/libcontainer.so
opencog/attentionbank/cython/opencog/bank.so: /usr/local/lib/opencog/libpattern.so
opencog/attentionbank/cython/opencog/bank.so: /usr/local/lib/opencog/libquery-engine.so
opencog/attentionbank/cython/opencog/bank.so: /usr/local/lib/opencog/libexecution.so
opencog/attentionbank/cython/opencog/bank.so: /usr/local/lib/opencog/libgrounded.so
opencog/attentionbank/cython/opencog/bank.so: /usr/local/lib/opencog/libatomspace.so
opencog/attentionbank/cython/opencog/bank.so: /usr/local/lib/opencog/libparallel.so
opencog/attentionbank/cython/opencog/bank.so: /usr/lib/x86_64-linux-gnu/libpython3.10.so
opencog/attentionbank/cython/opencog/bank.so: /usr/local/lib/opencog/libvalue.so
opencog/attentionbank/cython/opencog/bank.so: /usr/local/lib/opencog/libatom_types.so
opencog/attentionbank/cython/opencog/bank.so: /usr/local/lib/opencog/libcogutil.so
opencog/attentionbank/cython/opencog/bank.so: opencog/attentionbank/cython/opencog/CMakeFiles/bank_cython.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/stationone/Desktop/Singularitynet/attention/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library bank.so"
	cd /home/stationone/Desktop/Singularitynet/attention/build/opencog/attentionbank/cython/opencog && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bank_cython.dir/link.txt --verbose=$(VERBOSE)
	cd /home/stationone/Desktop/Singularitynet/attention/build/opencog/attentionbank/cython/opencog && /opt/cmake/bin/cmake -E copy /home/stationone/Desktop/Singularitynet/attention/build/opencog/attentionbank/cython/opencog/bank.so /home/stationone/Desktop/Singularitynet/attention/build/opencog/cython/opencog/bank.so

# Rule to build all files generated by this target.
opencog/attentionbank/cython/opencog/CMakeFiles/bank_cython.dir/build: opencog/attentionbank/cython/opencog/bank.so
.PHONY : opencog/attentionbank/cython/opencog/CMakeFiles/bank_cython.dir/build

opencog/attentionbank/cython/opencog/CMakeFiles/bank_cython.dir/clean:
	cd /home/stationone/Desktop/Singularitynet/attention/build/opencog/attentionbank/cython/opencog && $(CMAKE_COMMAND) -P CMakeFiles/bank_cython.dir/cmake_clean.cmake
.PHONY : opencog/attentionbank/cython/opencog/CMakeFiles/bank_cython.dir/clean

opencog/attentionbank/cython/opencog/CMakeFiles/bank_cython.dir/depend: opencog/attentionbank/cython/opencog/bank.cpp
	cd /home/stationone/Desktop/Singularitynet/attention/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/stationone/Desktop/Singularitynet/attention /home/stationone/Desktop/Singularitynet/attention/opencog/attentionbank/cython/opencog /home/stationone/Desktop/Singularitynet/attention/build /home/stationone/Desktop/Singularitynet/attention/build/opencog/attentionbank/cython/opencog /home/stationone/Desktop/Singularitynet/attention/build/opencog/attentionbank/cython/opencog/CMakeFiles/bank_cython.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : opencog/attentionbank/cython/opencog/CMakeFiles/bank_cython.dir/depend

