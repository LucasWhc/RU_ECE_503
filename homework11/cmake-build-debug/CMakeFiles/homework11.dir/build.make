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
CMAKE_SOURCE_DIR = "E:\Program Files (x86)\cpp\homework11"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\Program Files (x86)\cpp\homework11\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/homework11.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/homework11.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/homework11.dir/flags.make

CMakeFiles/homework11.dir/main.cpp.obj: CMakeFiles/homework11.dir/flags.make
CMakeFiles/homework11.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\Program Files (x86)\cpp\homework11\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/homework11.dir/main.cpp.obj"
	D:\Applications\MinGW\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\homework11.dir\main.cpp.obj -c "E:\Program Files (x86)\cpp\homework11\main.cpp"

CMakeFiles/homework11.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/homework11.dir/main.cpp.i"
	D:\Applications\MinGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\Program Files (x86)\cpp\homework11\main.cpp" > CMakeFiles\homework11.dir\main.cpp.i

CMakeFiles/homework11.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/homework11.dir/main.cpp.s"
	D:\Applications\MinGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\Program Files (x86)\cpp\homework11\main.cpp" -o CMakeFiles\homework11.dir\main.cpp.s

# Object files for target homework11
homework11_OBJECTS = \
"CMakeFiles/homework11.dir/main.cpp.obj"

# External object files for target homework11
homework11_EXTERNAL_OBJECTS =

homework11.exe: CMakeFiles/homework11.dir/main.cpp.obj
homework11.exe: CMakeFiles/homework11.dir/build.make
homework11.exe: CMakeFiles/homework11.dir/linklibs.rsp
homework11.exe: CMakeFiles/homework11.dir/objects1.rsp
homework11.exe: CMakeFiles/homework11.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\Program Files (x86)\cpp\homework11\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable homework11.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\homework11.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/homework11.dir/build: homework11.exe

.PHONY : CMakeFiles/homework11.dir/build

CMakeFiles/homework11.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\homework11.dir\cmake_clean.cmake
.PHONY : CMakeFiles/homework11.dir/clean

CMakeFiles/homework11.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\Program Files (x86)\cpp\homework11" "E:\Program Files (x86)\cpp\homework11" "E:\Program Files (x86)\cpp\homework11\cmake-build-debug" "E:\Program Files (x86)\cpp\homework11\cmake-build-debug" "E:\Program Files (x86)\cpp\homework11\cmake-build-debug\CMakeFiles\homework11.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/homework11.dir/depend

