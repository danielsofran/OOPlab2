# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.21

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.3.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Desktop\OOP\lab2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Desktop\OOP\lab2\cmake-build-debug-coverage

# Include any dependencies generated for this target.
include CMakeFiles/lab2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/lab2.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/lab2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab2.dir/flags.make

CMakeFiles/lab2.dir/main.c.obj: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/main.c.obj: ../main.c
CMakeFiles/lab2.dir/main.c.obj: CMakeFiles/lab2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Desktop\OOP\lab2\cmake-build-debug-coverage\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/lab2.dir/main.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/lab2.dir/main.c.obj -MF CMakeFiles\lab2.dir\main.c.obj.d -o CMakeFiles\lab2.dir\main.c.obj -c C:\Desktop\OOP\lab2\main.c

CMakeFiles/lab2.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab2.dir/main.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Desktop\OOP\lab2\main.c > CMakeFiles\lab2.dir\main.c.i

CMakeFiles/lab2.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab2.dir/main.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Desktop\OOP\lab2\main.c -o CMakeFiles\lab2.dir\main.c.s

CMakeFiles/lab2.dir/domain.c.obj: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/domain.c.obj: ../domain.c
CMakeFiles/lab2.dir/domain.c.obj: CMakeFiles/lab2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Desktop\OOP\lab2\cmake-build-debug-coverage\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/lab2.dir/domain.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/lab2.dir/domain.c.obj -MF CMakeFiles\lab2.dir\domain.c.obj.d -o CMakeFiles\lab2.dir\domain.c.obj -c C:\Desktop\OOP\lab2\domain.c

CMakeFiles/lab2.dir/domain.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab2.dir/domain.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Desktop\OOP\lab2\domain.c > CMakeFiles\lab2.dir\domain.c.i

CMakeFiles/lab2.dir/domain.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab2.dir/domain.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Desktop\OOP\lab2\domain.c -o CMakeFiles\lab2.dir\domain.c.s

CMakeFiles/lab2.dir/tests.c.obj: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/tests.c.obj: ../tests.c
CMakeFiles/lab2.dir/tests.c.obj: CMakeFiles/lab2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Desktop\OOP\lab2\cmake-build-debug-coverage\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/lab2.dir/tests.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/lab2.dir/tests.c.obj -MF CMakeFiles\lab2.dir\tests.c.obj.d -o CMakeFiles\lab2.dir\tests.c.obj -c C:\Desktop\OOP\lab2\tests.c

CMakeFiles/lab2.dir/tests.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab2.dir/tests.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Desktop\OOP\lab2\tests.c > CMakeFiles\lab2.dir\tests.c.i

CMakeFiles/lab2.dir/tests.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab2.dir/tests.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Desktop\OOP\lab2\tests.c -o CMakeFiles\lab2.dir\tests.c.s

CMakeFiles/lab2.dir/repository.c.obj: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/repository.c.obj: ../repository.c
CMakeFiles/lab2.dir/repository.c.obj: CMakeFiles/lab2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Desktop\OOP\lab2\cmake-build-debug-coverage\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/lab2.dir/repository.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/lab2.dir/repository.c.obj -MF CMakeFiles\lab2.dir\repository.c.obj.d -o CMakeFiles\lab2.dir\repository.c.obj -c C:\Desktop\OOP\lab2\repository.c

CMakeFiles/lab2.dir/repository.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab2.dir/repository.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Desktop\OOP\lab2\repository.c > CMakeFiles\lab2.dir\repository.c.i

CMakeFiles/lab2.dir/repository.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab2.dir/repository.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Desktop\OOP\lab2\repository.c -o CMakeFiles\lab2.dir\repository.c.s

CMakeFiles/lab2.dir/validator.c.obj: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/validator.c.obj: ../validator.c
CMakeFiles/lab2.dir/validator.c.obj: CMakeFiles/lab2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Desktop\OOP\lab2\cmake-build-debug-coverage\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/lab2.dir/validator.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/lab2.dir/validator.c.obj -MF CMakeFiles\lab2.dir\validator.c.obj.d -o CMakeFiles\lab2.dir\validator.c.obj -c C:\Desktop\OOP\lab2\validator.c

CMakeFiles/lab2.dir/validator.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab2.dir/validator.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Desktop\OOP\lab2\validator.c > CMakeFiles\lab2.dir\validator.c.i

CMakeFiles/lab2.dir/validator.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab2.dir/validator.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Desktop\OOP\lab2\validator.c -o CMakeFiles\lab2.dir\validator.c.s

CMakeFiles/lab2.dir/ui.c.obj: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/ui.c.obj: ../ui.c
CMakeFiles/lab2.dir/ui.c.obj: CMakeFiles/lab2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Desktop\OOP\lab2\cmake-build-debug-coverage\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/lab2.dir/ui.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/lab2.dir/ui.c.obj -MF CMakeFiles\lab2.dir\ui.c.obj.d -o CMakeFiles\lab2.dir\ui.c.obj -c C:\Desktop\OOP\lab2\ui.c

CMakeFiles/lab2.dir/ui.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab2.dir/ui.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Desktop\OOP\lab2\ui.c > CMakeFiles\lab2.dir\ui.c.i

CMakeFiles/lab2.dir/ui.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab2.dir/ui.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Desktop\OOP\lab2\ui.c -o CMakeFiles\lab2.dir\ui.c.s

CMakeFiles/lab2.dir/service.c.obj: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/service.c.obj: ../service.c
CMakeFiles/lab2.dir/service.c.obj: CMakeFiles/lab2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Desktop\OOP\lab2\cmake-build-debug-coverage\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/lab2.dir/service.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/lab2.dir/service.c.obj -MF CMakeFiles\lab2.dir\service.c.obj.d -o CMakeFiles\lab2.dir\service.c.obj -c C:\Desktop\OOP\lab2\service.c

CMakeFiles/lab2.dir/service.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab2.dir/service.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Desktop\OOP\lab2\service.c > CMakeFiles\lab2.dir\service.c.i

CMakeFiles/lab2.dir/service.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab2.dir/service.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Desktop\OOP\lab2\service.c -o CMakeFiles\lab2.dir\service.c.s

# Object files for target lab2
lab2_OBJECTS = \
"CMakeFiles/lab2.dir/main.c.obj" \
"CMakeFiles/lab2.dir/domain.c.obj" \
"CMakeFiles/lab2.dir/tests.c.obj" \
"CMakeFiles/lab2.dir/repository.c.obj" \
"CMakeFiles/lab2.dir/validator.c.obj" \
"CMakeFiles/lab2.dir/ui.c.obj" \
"CMakeFiles/lab2.dir/service.c.obj"

# External object files for target lab2
lab2_EXTERNAL_OBJECTS =

lab2.exe: CMakeFiles/lab2.dir/main.c.obj
lab2.exe: CMakeFiles/lab2.dir/domain.c.obj
lab2.exe: CMakeFiles/lab2.dir/tests.c.obj
lab2.exe: CMakeFiles/lab2.dir/repository.c.obj
lab2.exe: CMakeFiles/lab2.dir/validator.c.obj
lab2.exe: CMakeFiles/lab2.dir/ui.c.obj
lab2.exe: CMakeFiles/lab2.dir/service.c.obj
lab2.exe: CMakeFiles/lab2.dir/build.make
lab2.exe: CMakeFiles/lab2.dir/linklibs.rsp
lab2.exe: CMakeFiles/lab2.dir/objects1.rsp
lab2.exe: CMakeFiles/lab2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Desktop\OOP\lab2\cmake-build-debug-coverage\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking C executable lab2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lab2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab2.dir/build: lab2.exe
.PHONY : CMakeFiles/lab2.dir/build

CMakeFiles/lab2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\lab2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/lab2.dir/clean

CMakeFiles/lab2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Desktop\OOP\lab2 C:\Desktop\OOP\lab2 C:\Desktop\OOP\lab2\cmake-build-debug-coverage C:\Desktop\OOP\lab2\cmake-build-debug-coverage C:\Desktop\OOP\lab2\cmake-build-debug-coverage\CMakeFiles\lab2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab2.dir/depend

