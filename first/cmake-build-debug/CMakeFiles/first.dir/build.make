# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\Users\saud\Clion\AdvC\first

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Users\saud\Clion\AdvC\first\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/first.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/first.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/first.dir/flags.make

CMakeFiles/first.dir/tIntArray..c.obj: CMakeFiles/first.dir/flags.make
CMakeFiles/first.dir/tIntArray..c.obj: ../tIntArray..c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Users\saud\Clion\AdvC\first\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/first.dir/tIntArray..c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\first.dir\tIntArray..c.obj   -c E:\Users\saud\Clion\AdvC\first\tIntArray..c

CMakeFiles/first.dir/tIntArray..c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/first.dir/tIntArray..c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\Users\saud\Clion\AdvC\first\tIntArray..c > CMakeFiles\first.dir\tIntArray..c.i

CMakeFiles/first.dir/tIntArray..c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/first.dir/tIntArray..c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\Users\saud\Clion\AdvC\first\tIntArray..c -o CMakeFiles\first.dir\tIntArray..c.s

CMakeFiles/first.dir/IntArray.c.obj: CMakeFiles/first.dir/flags.make
CMakeFiles/first.dir/IntArray.c.obj: ../IntArray.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Users\saud\Clion\AdvC\first\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/first.dir/IntArray.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\first.dir\IntArray.c.obj   -c E:\Users\saud\Clion\AdvC\first\IntArray.c

CMakeFiles/first.dir/IntArray.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/first.dir/IntArray.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\Users\saud\Clion\AdvC\first\IntArray.c > CMakeFiles\first.dir\IntArray.c.i

CMakeFiles/first.dir/IntArray.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/first.dir/IntArray.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\Users\saud\Clion\AdvC\first\IntArray.c -o CMakeFiles\first.dir\IntArray.c.s

# Object files for target first
first_OBJECTS = \
"CMakeFiles/first.dir/tIntArray..c.obj" \
"CMakeFiles/first.dir/IntArray.c.obj"

# External object files for target first
first_EXTERNAL_OBJECTS =

first.exe: CMakeFiles/first.dir/tIntArray..c.obj
first.exe: CMakeFiles/first.dir/IntArray.c.obj
first.exe: CMakeFiles/first.dir/build.make
first.exe: CMakeFiles/first.dir/linklibs.rsp
first.exe: CMakeFiles/first.dir/objects1.rsp
first.exe: CMakeFiles/first.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Users\saud\Clion\AdvC\first\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable first.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\first.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/first.dir/build: first.exe

.PHONY : CMakeFiles/first.dir/build

CMakeFiles/first.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\first.dir\cmake_clean.cmake
.PHONY : CMakeFiles/first.dir/clean

CMakeFiles/first.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Users\saud\Clion\AdvC\first E:\Users\saud\Clion\AdvC\first E:\Users\saud\Clion\AdvC\first\cmake-build-debug E:\Users\saud\Clion\AdvC\first\cmake-build-debug E:\Users\saud\Clion\AdvC\first\cmake-build-debug\CMakeFiles\first.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/first.dir/depend

