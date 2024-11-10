# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/yeab/attention

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yeab/attention/build

# Include any dependencies generated for this target.
include opencog/attentionbank/types/CMakeFiles/attention-types.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include opencog/attentionbank/types/CMakeFiles/attention-types.dir/compiler_depend.make

# Include the progress variables for this target.
include opencog/attentionbank/types/CMakeFiles/attention-types.dir/progress.make

# Include the compile flags for this target's objects.
include opencog/attentionbank/types/CMakeFiles/attention-types.dir/flags.make

opencog/attentionbank/types/CMakeFiles/attention-types.dir/atom_types_init.cc.o: opencog/attentionbank/types/CMakeFiles/attention-types.dir/flags.make
opencog/attentionbank/types/CMakeFiles/attention-types.dir/atom_types_init.cc.o: ../opencog/attentionbank/types/atom_types_init.cc
opencog/attentionbank/types/CMakeFiles/attention-types.dir/atom_types_init.cc.o: opencog/attentionbank/types/CMakeFiles/attention-types.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yeab/attention/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object opencog/attentionbank/types/CMakeFiles/attention-types.dir/atom_types_init.cc.o"
	cd /home/yeab/attention/build/opencog/attentionbank/types && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT opencog/attentionbank/types/CMakeFiles/attention-types.dir/atom_types_init.cc.o -MF CMakeFiles/attention-types.dir/atom_types_init.cc.o.d -o CMakeFiles/attention-types.dir/atom_types_init.cc.o -c /home/yeab/attention/opencog/attentionbank/types/atom_types_init.cc

opencog/attentionbank/types/CMakeFiles/attention-types.dir/atom_types_init.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/attention-types.dir/atom_types_init.cc.i"
	cd /home/yeab/attention/build/opencog/attentionbank/types && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yeab/attention/opencog/attentionbank/types/atom_types_init.cc > CMakeFiles/attention-types.dir/atom_types_init.cc.i

opencog/attentionbank/types/CMakeFiles/attention-types.dir/atom_types_init.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/attention-types.dir/atom_types_init.cc.s"
	cd /home/yeab/attention/build/opencog/attentionbank/types && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yeab/attention/opencog/attentionbank/types/atom_types_init.cc -o CMakeFiles/attention-types.dir/atom_types_init.cc.s

# Object files for target attention-types
attention__types_OBJECTS = \
"CMakeFiles/attention-types.dir/atom_types_init.cc.o"

# External object files for target attention-types
attention__types_EXTERNAL_OBJECTS =

opencog/attentionbank/types/libattention-types.so: opencog/attentionbank/types/CMakeFiles/attention-types.dir/atom_types_init.cc.o
opencog/attentionbank/types/libattention-types.so: opencog/attentionbank/types/CMakeFiles/attention-types.dir/build.make
opencog/attentionbank/types/libattention-types.so: /usr/local/lib/opencog/libatomcore.so
opencog/attentionbank/types/libattention-types.so: /usr/local/lib/opencog/libatombase.so
opencog/attentionbank/types/libattention-types.so: /usr/local/lib/opencog/libtruthvalue.so
opencog/attentionbank/types/libattention-types.so: /usr/local/lib/opencog/libexecution.so
opencog/attentionbank/types/libattention-types.so: /usr/local/lib/opencog/libparallel.so
opencog/attentionbank/types/libattention-types.so: /usr/local/lib/opencog/libclearbox.so
opencog/attentionbank/types/libattention-types.so: /usr/local/lib/opencog/libatomflow.so
opencog/attentionbank/types/libattention-types.so: /usr/local/lib/opencog/libatomspace.so
opencog/attentionbank/types/libattention-types.so: /usr/local/lib/opencog/libcontainer.so
opencog/attentionbank/types/libattention-types.so: /usr/local/lib/opencog/libpattern.so
opencog/attentionbank/types/libattention-types.so: /usr/local/lib/opencog/libgrounded.so
opencog/attentionbank/types/libattention-types.so: /usr/local/lib/opencog/libquery-engine.so
opencog/attentionbank/types/libattention-types.so: /usr/local/lib/opencog/libvalue.so
opencog/attentionbank/types/libattention-types.so: /usr/local/lib/opencog/libatom_types.so
opencog/attentionbank/types/libattention-types.so: /usr/local/lib/opencog/libcogutil.so
opencog/attentionbank/types/libattention-types.so: opencog/attentionbank/types/CMakeFiles/attention-types.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yeab/attention/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libattention-types.so"
	cd /home/yeab/attention/build/opencog/attentionbank/types && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/attention-types.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
opencog/attentionbank/types/CMakeFiles/attention-types.dir/build: opencog/attentionbank/types/libattention-types.so
.PHONY : opencog/attentionbank/types/CMakeFiles/attention-types.dir/build

opencog/attentionbank/types/CMakeFiles/attention-types.dir/clean:
	cd /home/yeab/attention/build/opencog/attentionbank/types && $(CMAKE_COMMAND) -P CMakeFiles/attention-types.dir/cmake_clean.cmake
.PHONY : opencog/attentionbank/types/CMakeFiles/attention-types.dir/clean

opencog/attentionbank/types/CMakeFiles/attention-types.dir/depend:
	cd /home/yeab/attention/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yeab/attention /home/yeab/attention/opencog/attentionbank/types /home/yeab/attention/build /home/yeab/attention/build/opencog/attentionbank/types /home/yeab/attention/build/opencog/attentionbank/types/CMakeFiles/attention-types.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : opencog/attentionbank/types/CMakeFiles/attention-types.dir/depend
