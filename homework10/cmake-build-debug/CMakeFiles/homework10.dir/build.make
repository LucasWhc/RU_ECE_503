# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "E:\Program Files (x86)\CLion 2019.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\Program Files (x86)\CLion 2019.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "E:\Program Files (x86)\cpp\homework10"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\Program Files (x86)\cpp\homework10\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/homework10.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/homework10.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/homework10.dir/flags.make

CMakeFiles/homework10.dir/main.cpp.obj: CMakeFiles/homework10.dir/flags.make
CMakeFiles/homework10.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\Program Files (x86)\cpp\homework10\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/homework10.dir/main.cpp.obj"
	D:\Applications\MinGW\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\homework10.dir\main.cpp.obj -c "E:\Program Files (x86)\cpp\homework10\main.cpp"

CMakeFiles/homework10.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/homework10.dir/main.cpp.i"
	D:\Applications\MinGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\Program Files (x86)\cpp\homework10\main.cpp" > CMakeFiles\homework10.dir\main.cpp.i

CMakeFiles/homework10.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/homework10.dir/main.cpp.s"
	D:\Applications\MinGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\Program Files (x86)\cpp\homework10\main.cpp" -o CMakeFiles\homework10.dir\main.cpp.s

CMakeFiles/homework10.dir/Node.cpp.obj: CMakeFiles/homework10.dir/flags.make
CMakeFiles/homework10.dir/Node.cpp.obj: ../Node.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\Program Files (x86)\cpp\homework10\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/homework10.dir/Node.cpp.obj"
	D:\Applications\MinGW\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\homework10.dir\Node.cpp.obj -c "E:\Program Files (x86)\cpp\homework10\Node.cpp"

CMakeFiles/homework10.dir/Node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/homework10.dir/Node.cpp.i"
	D:\Applications\MinGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\Program Files (x86)\cpp\homework10\Node.cpp" > CMakeFiles\homework10.dir\Node.cpp.i

CMakeFiles/homework10.dir/Node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/homework10.dir/Node.cpp.s"
	D:\Applications\MinGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\Program Files (x86)\cpp\homework10\Node.cpp" -o CMakeFiles\homework10.dir\Node.cpp.s

CMakeFiles/homework10.dir/Linkedlist.cpp.obj: CMakeFiles/homework10.dir/flags.make
CMakeFiles/homework10.dir/Linkedlist.cpp.obj: ../Linkedlist.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\Program Files (x86)\cpp\homework10\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/homework10.dir/Linkedlist.cpp.obj"
	D:\Applications\MinGW\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\homework10.dir\Linkedlist.cpp.obj -c "E:\Program Files (x86)\cpp\homework10\Linkedlist.cpp"

CMakeFiles/homework10.dir/Linkedlist.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/homework10.dir/Linkedlist.cpp.i"
	D:\Applications\MinGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\Program Files (x86)\cpp\homework10\Linkedlist.cpp" > CMakeFiles\homework10.dir\Linkedlist.cpp.i

CMakeFiles/homework10.dir/Linkedlist.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/homework10.dir/Linkedlist.cpp.s"
	D:\Applications\MinGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\Program Files (x86)\cpp\homework10\Linkedlist.cpp" -o CMakeFiles\homework10.dir\Linkedlist.cpp.s

# Object files for target homework10
homework10_OBJECTS = \
"CMakeFiles/homework10.dir/main.cpp.obj" \
"CMakeFiles/homework10.dir/Node.cpp.obj" \
"CMakeFiles/homework10.dir/Linkedlist.cpp.obj"

# External object files for target homework10
homework10_EXTERNAL_OBJECTS =

homework10.exe: CMakeFiles/homework10.dir/main.cpp.obj
homework10.exe: CMakeFiles/homework10.dir/Node.cpp.obj
homework10.exe: CMakeFiles/homework10.dir/Linkedlist.cpp.obj
homework10.exe: CMakeFiles/homework10.dir/build.make
homework10.exe: CMakeFiles/homework10.dir/linklibs.rsp
homework10.exe: CMakeFiles/homework10.dir/objects1.rsp
homework10.exe: CMakeFiles/homework10.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\Program Files (x86)\cpp\homework10\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable homework10.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\homework10.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/homework10.dir/build: homework10.exe

.PHONY : CMakeFiles/homework10.dir/build

CMakeFiles/homework10.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\homework10.dir\cmake_clean.cmake
.PHONY : CMakeFiles/homework10.dir/clean

CMakeFiles/homework10.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\Program Files (x86)\cpp\homework10" "E:\Program Files (x86)\cpp\homework10" "E:\Program Files (x86)\cpp\homework10\cmake-build-debug" "E:\Program Files (x86)\cpp\homework10\cmake-build-debug" "E:\Program Files (x86)\cpp\homework10\cmake-build-debug\CMakeFiles\homework10.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/homework10.dir/depend

