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
CMAKE_SOURCE_DIR = E:\Users\saud\Clion\AdvC\Stack2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Users\saud\Clion\AdvC\Stack2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Stack2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Stack2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Stack2.dir/flags.make

CMakeFiles/Stack2.dir/tStack.c.obj: CMakeFiles/Stack2.dir/flags.make
CMakeFiles/Stack2.dir/tStack.c.obj: ../tStack.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Users\saud\Clion\AdvC\Stack2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Stack2.dir/tStack.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Stack2.dir\tStack.c.obj   -c E:\Users\saud\Clion\AdvC\Stack2\tStack.c

CMakeFiles/Stack2.dir/tStack.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Stack2.dir/tStack.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\Users\saud\Clion\AdvC\Stack2\tStack.c > CMakeFiles\Stack2.dir\tStack.c.i

CMakeFiles/Stack2.dir/tStack.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Stack2.dir/tStack.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\Users\saud\Clion\AdvC\Stack2\tStack.c -o CMakeFiles\Stack2.dir\tStack.c.s

CMakeFiles/Stack2.dir/lStack.c.obj: CMakeFiles/Stack2.dir/flags.make
CMakeFiles/Stack2.dir/lStack.c.obj: ../lStack.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Users\saud\Clion\AdvC\Stack2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Stack2.dir/lStack.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Stack2.dir\lStack.c.obj   -c E:\Users\saud\Clion\AdvC\Stack2\lStack.c

CMakeFiles/Stack2.dir/lStack.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Stack2.dir/lStack.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\Users\saud\Clion\AdvC\Stack2\lStack.c > CMakeFiles\Stack2.dir\lStack.c.i

CMakeFiles/Stack2.dir/lStack.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Stack2.dir/lStack.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\Users\saud\Clion\AdvC\Stack2\lStack.c -o CMakeFiles\Stack2.dir\lStack.c.s

# Object files for target Stack2
Stack2_OBJECTS = \
"CMakeFiles/Stack2.dir/tStack.c.obj" \
"CMakeFiles/Stack2.dir/lStack.c.obj"

# External object files for target Stack2
Stack2_EXTERNAL_OBJECTS =

Stack2.exe: CMakeFiles/Stack2.dir/tStack.c.obj
Stack2.exe: CMakeFiles/Stack2.dir/lStack.c.obj
Stack2.exe: CMakeFiles/Stack2.dir/build.make
Stack2.exe: CMakeFiles/Stack2.dir/linklibs.rsp
Stack2.exe: CMakeFiles/Stack2.dir/objects1.rsp
Stack2.exe: CMakeFiles/Stack2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Users\saud\Clion\AdvC\Stack2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable Stack2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Stack2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Stack2.dir/build: Stack2.exe

.PHONY : CMakeFiles/Stack2.dir/build

CMakeFiles/Stack2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Stack2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Stack2.dir/clean

CMakeFiles/Stack2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Users\saud\Clion\AdvC\Stack2 E:\Users\saud\Clion\AdvC\Stack2 E:\Users\saud\Clion\AdvC\Stack2\cmake-build-debug E:\Users\saud\Clion\AdvC\Stack2\cmake-build-debug E:\Users\saud\Clion\AdvC\Stack2\cmake-build-debug\CMakeFiles\Stack2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Stack2.dir/depend

