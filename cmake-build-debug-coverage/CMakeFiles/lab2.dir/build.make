# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_SOURCE_DIR = /mnt/c/Desktop/CLionsProjects/OOPlab2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Desktop/CLionsProjects/OOPlab2/cmake-build-debug-coverage

# Include any dependencies generated for this target.
include CMakeFiles/lab2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lab2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab2.dir/flags.make

CMakeFiles/lab2.dir/main.c.o: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Desktop/CLionsProjects/OOPlab2/cmake-build-debug-coverage/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/lab2.dir/main.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lab2.dir/main.c.o   -c /mnt/c/Desktop/CLionsProjects/OOPlab2/main.c

CMakeFiles/lab2.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab2.dir/main.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/c/Desktop/CLionsProjects/OOPlab2/main.c > CMakeFiles/lab2.dir/main.c.i

CMakeFiles/lab2.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab2.dir/main.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/c/Desktop/CLionsProjects/OOPlab2/main.c -o CMakeFiles/lab2.dir/main.c.s

CMakeFiles/lab2.dir/main.c.o.requires:

.PHONY : CMakeFiles/lab2.dir/main.c.o.requires

CMakeFiles/lab2.dir/main.c.o.provides: CMakeFiles/lab2.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/lab2.dir/build.make CMakeFiles/lab2.dir/main.c.o.provides.build
.PHONY : CMakeFiles/lab2.dir/main.c.o.provides

CMakeFiles/lab2.dir/main.c.o.provides.build: CMakeFiles/lab2.dir/main.c.o


CMakeFiles/lab2.dir/domain.c.o: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/domain.c.o: ../domain.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Desktop/CLionsProjects/OOPlab2/cmake-build-debug-coverage/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/lab2.dir/domain.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lab2.dir/domain.c.o   -c /mnt/c/Desktop/CLionsProjects/OOPlab2/domain.c

CMakeFiles/lab2.dir/domain.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab2.dir/domain.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/c/Desktop/CLionsProjects/OOPlab2/domain.c > CMakeFiles/lab2.dir/domain.c.i

CMakeFiles/lab2.dir/domain.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab2.dir/domain.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/c/Desktop/CLionsProjects/OOPlab2/domain.c -o CMakeFiles/lab2.dir/domain.c.s

CMakeFiles/lab2.dir/domain.c.o.requires:

.PHONY : CMakeFiles/lab2.dir/domain.c.o.requires

CMakeFiles/lab2.dir/domain.c.o.provides: CMakeFiles/lab2.dir/domain.c.o.requires
	$(MAKE) -f CMakeFiles/lab2.dir/build.make CMakeFiles/lab2.dir/domain.c.o.provides.build
.PHONY : CMakeFiles/lab2.dir/domain.c.o.provides

CMakeFiles/lab2.dir/domain.c.o.provides.build: CMakeFiles/lab2.dir/domain.c.o


CMakeFiles/lab2.dir/tests.c.o: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/tests.c.o: ../tests.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Desktop/CLionsProjects/OOPlab2/cmake-build-debug-coverage/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/lab2.dir/tests.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lab2.dir/tests.c.o   -c /mnt/c/Desktop/CLionsProjects/OOPlab2/tests.c

CMakeFiles/lab2.dir/tests.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab2.dir/tests.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/c/Desktop/CLionsProjects/OOPlab2/tests.c > CMakeFiles/lab2.dir/tests.c.i

CMakeFiles/lab2.dir/tests.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab2.dir/tests.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/c/Desktop/CLionsProjects/OOPlab2/tests.c -o CMakeFiles/lab2.dir/tests.c.s

CMakeFiles/lab2.dir/tests.c.o.requires:

.PHONY : CMakeFiles/lab2.dir/tests.c.o.requires

CMakeFiles/lab2.dir/tests.c.o.provides: CMakeFiles/lab2.dir/tests.c.o.requires
	$(MAKE) -f CMakeFiles/lab2.dir/build.make CMakeFiles/lab2.dir/tests.c.o.provides.build
.PHONY : CMakeFiles/lab2.dir/tests.c.o.provides

CMakeFiles/lab2.dir/tests.c.o.provides.build: CMakeFiles/lab2.dir/tests.c.o


CMakeFiles/lab2.dir/repository.c.o: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/repository.c.o: ../repository.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Desktop/CLionsProjects/OOPlab2/cmake-build-debug-coverage/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/lab2.dir/repository.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lab2.dir/repository.c.o   -c /mnt/c/Desktop/CLionsProjects/OOPlab2/repository.c

CMakeFiles/lab2.dir/repository.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab2.dir/repository.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/c/Desktop/CLionsProjects/OOPlab2/repository.c > CMakeFiles/lab2.dir/repository.c.i

CMakeFiles/lab2.dir/repository.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab2.dir/repository.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/c/Desktop/CLionsProjects/OOPlab2/repository.c -o CMakeFiles/lab2.dir/repository.c.s

CMakeFiles/lab2.dir/repository.c.o.requires:

.PHONY : CMakeFiles/lab2.dir/repository.c.o.requires

CMakeFiles/lab2.dir/repository.c.o.provides: CMakeFiles/lab2.dir/repository.c.o.requires
	$(MAKE) -f CMakeFiles/lab2.dir/build.make CMakeFiles/lab2.dir/repository.c.o.provides.build
.PHONY : CMakeFiles/lab2.dir/repository.c.o.provides

CMakeFiles/lab2.dir/repository.c.o.provides.build: CMakeFiles/lab2.dir/repository.c.o


CMakeFiles/lab2.dir/validator.c.o: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/validator.c.o: ../validator.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Desktop/CLionsProjects/OOPlab2/cmake-build-debug-coverage/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/lab2.dir/validator.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lab2.dir/validator.c.o   -c /mnt/c/Desktop/CLionsProjects/OOPlab2/validator.c

CMakeFiles/lab2.dir/validator.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab2.dir/validator.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/c/Desktop/CLionsProjects/OOPlab2/validator.c > CMakeFiles/lab2.dir/validator.c.i

CMakeFiles/lab2.dir/validator.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab2.dir/validator.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/c/Desktop/CLionsProjects/OOPlab2/validator.c -o CMakeFiles/lab2.dir/validator.c.s

CMakeFiles/lab2.dir/validator.c.o.requires:

.PHONY : CMakeFiles/lab2.dir/validator.c.o.requires

CMakeFiles/lab2.dir/validator.c.o.provides: CMakeFiles/lab2.dir/validator.c.o.requires
	$(MAKE) -f CMakeFiles/lab2.dir/build.make CMakeFiles/lab2.dir/validator.c.o.provides.build
.PHONY : CMakeFiles/lab2.dir/validator.c.o.provides

CMakeFiles/lab2.dir/validator.c.o.provides.build: CMakeFiles/lab2.dir/validator.c.o


CMakeFiles/lab2.dir/ui.c.o: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/ui.c.o: ../ui.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Desktop/CLionsProjects/OOPlab2/cmake-build-debug-coverage/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/lab2.dir/ui.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lab2.dir/ui.c.o   -c /mnt/c/Desktop/CLionsProjects/OOPlab2/ui.c

CMakeFiles/lab2.dir/ui.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab2.dir/ui.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/c/Desktop/CLionsProjects/OOPlab2/ui.c > CMakeFiles/lab2.dir/ui.c.i

CMakeFiles/lab2.dir/ui.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab2.dir/ui.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/c/Desktop/CLionsProjects/OOPlab2/ui.c -o CMakeFiles/lab2.dir/ui.c.s

CMakeFiles/lab2.dir/ui.c.o.requires:

.PHONY : CMakeFiles/lab2.dir/ui.c.o.requires

CMakeFiles/lab2.dir/ui.c.o.provides: CMakeFiles/lab2.dir/ui.c.o.requires
	$(MAKE) -f CMakeFiles/lab2.dir/build.make CMakeFiles/lab2.dir/ui.c.o.provides.build
.PHONY : CMakeFiles/lab2.dir/ui.c.o.provides

CMakeFiles/lab2.dir/ui.c.o.provides.build: CMakeFiles/lab2.dir/ui.c.o


CMakeFiles/lab2.dir/service.c.o: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/service.c.o: ../service.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Desktop/CLionsProjects/OOPlab2/cmake-build-debug-coverage/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/lab2.dir/service.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lab2.dir/service.c.o   -c /mnt/c/Desktop/CLionsProjects/OOPlab2/service.c

CMakeFiles/lab2.dir/service.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab2.dir/service.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/c/Desktop/CLionsProjects/OOPlab2/service.c > CMakeFiles/lab2.dir/service.c.i

CMakeFiles/lab2.dir/service.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab2.dir/service.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/c/Desktop/CLionsProjects/OOPlab2/service.c -o CMakeFiles/lab2.dir/service.c.s

CMakeFiles/lab2.dir/service.c.o.requires:

.PHONY : CMakeFiles/lab2.dir/service.c.o.requires

CMakeFiles/lab2.dir/service.c.o.provides: CMakeFiles/lab2.dir/service.c.o.requires
	$(MAKE) -f CMakeFiles/lab2.dir/build.make CMakeFiles/lab2.dir/service.c.o.provides.build
.PHONY : CMakeFiles/lab2.dir/service.c.o.provides

CMakeFiles/lab2.dir/service.c.o.provides.build: CMakeFiles/lab2.dir/service.c.o


# Object files for target lab2
lab2_OBJECTS = \
"CMakeFiles/lab2.dir/main.c.o" \
"CMakeFiles/lab2.dir/domain.c.o" \
"CMakeFiles/lab2.dir/tests.c.o" \
"CMakeFiles/lab2.dir/repository.c.o" \
"CMakeFiles/lab2.dir/validator.c.o" \
"CMakeFiles/lab2.dir/ui.c.o" \
"CMakeFiles/lab2.dir/service.c.o"

# External object files for target lab2
lab2_EXTERNAL_OBJECTS =

lab2: CMakeFiles/lab2.dir/main.c.o
lab2: CMakeFiles/lab2.dir/domain.c.o
lab2: CMakeFiles/lab2.dir/tests.c.o
lab2: CMakeFiles/lab2.dir/repository.c.o
lab2: CMakeFiles/lab2.dir/validator.c.o
lab2: CMakeFiles/lab2.dir/ui.c.o
lab2: CMakeFiles/lab2.dir/service.c.o
lab2: CMakeFiles/lab2.dir/build.make
lab2: CMakeFiles/lab2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Desktop/CLionsProjects/OOPlab2/cmake-build-debug-coverage/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking C executable lab2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab2.dir/build: lab2

.PHONY : CMakeFiles/lab2.dir/build

CMakeFiles/lab2.dir/requires: CMakeFiles/lab2.dir/main.c.o.requires
CMakeFiles/lab2.dir/requires: CMakeFiles/lab2.dir/domain.c.o.requires
CMakeFiles/lab2.dir/requires: CMakeFiles/lab2.dir/tests.c.o.requires
CMakeFiles/lab2.dir/requires: CMakeFiles/lab2.dir/repository.c.o.requires
CMakeFiles/lab2.dir/requires: CMakeFiles/lab2.dir/validator.c.o.requires
CMakeFiles/lab2.dir/requires: CMakeFiles/lab2.dir/ui.c.o.requires
CMakeFiles/lab2.dir/requires: CMakeFiles/lab2.dir/service.c.o.requires

.PHONY : CMakeFiles/lab2.dir/requires

CMakeFiles/lab2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab2.dir/clean

CMakeFiles/lab2.dir/depend:
	cd /mnt/c/Desktop/CLionsProjects/OOPlab2/cmake-build-debug-coverage && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Desktop/CLionsProjects/OOPlab2 /mnt/c/Desktop/CLionsProjects/OOPlab2 /mnt/c/Desktop/CLionsProjects/OOPlab2/cmake-build-debug-coverage /mnt/c/Desktop/CLionsProjects/OOPlab2/cmake-build-debug-coverage /mnt/c/Desktop/CLionsProjects/OOPlab2/cmake-build-debug-coverage/CMakeFiles/lab2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab2.dir/depend

