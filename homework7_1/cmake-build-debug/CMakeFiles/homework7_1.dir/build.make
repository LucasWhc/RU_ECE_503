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
CMAKE_COMMAND = "E:\Program Files (x86)\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\Program Files (x86)\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "E:\Program Files (x86)\cpp\homework7_1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\Program Files (x86)\cpp\homework7_1\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/homework7_1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/homework7_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/homework7_1.dir/flags.make

CMakeFiles/homework7_1.dir/main.cpp.obj: CMakeFiles/homework7_1.dir/flags.make
CMakeFiles/homework7_1.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\Program Files (x86)\cpp\homework7_1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/homework7_1.dir/main.cpp.obj"
	D:\Applications\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\homework7_1.dir\main.cpp.obj -c "E:\Program Files (x86)\cpp\homework7_1\main.cpp"

CMakeFiles/homework7_1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/homework7_1.dir/main.cpp.i"
	D:\Applications\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\Program Files (x86)\cpp\homework7_1\main.cpp" > CMakeFiles\homework7_1.dir\main.cpp.i

CMakeFiles/homework7_1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/homework7_1.dir/main.cpp.s"
	D:\Applications\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\Program Files (x86)\cpp\homework7_1\main.cpp" -o CMakeFiles\homework7_1.dir\main.cpp.s

CMakeFiles/homework7_1.dir/Polynomial.cpp.obj: CMakeFiles/homework7_1.dir/flags.make
CMakeFiles/homework7_1.dir/Polynomial.cpp.obj: ../Polynomial.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\Program Files (x86)\cpp\homework7_1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/homework7_1.dir/Polynomial.cpp.obj"
	D:\Applications\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\homework7_1.dir\Polynomial.cpp.obj -c "E:\Program Files (x86)\cpp\homework7_1\Polynomial.cpp"

CMakeFiles/homework7_1.dir/Polynomial.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/homework7_1.dir/Polynomial.cpp.i"
	D:\Applications\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\Program Files (x86)\cpp\homework7_1\Polynomial.cpp" > CMakeFiles\homework7_1.dir\Polynomial.cpp.i

CMakeFiles/homework7_1.dir/Polynomial.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/homework7_1.dir/Polynomial.cpp.s"
	D:\Applications\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\Program Files (x86)\cpp\homework7_1\Polynomial.cpp" -o CMakeFiles\homework7_1.dir\Polynomial.cpp.s

# Object files for target homework7_1
homework7_1_OBJECTS = \
"CMakeFiles/homework7_1.dir/main.cpp.obj" \
"CMakeFiles/homework7_1.dir/Polynomial.cpp.obj"

# External object files for target homework7_1
homework7_1_EXTERNAL_OBJECTS =

homework7_1.exe: CMakeFiles/homework7_1.dir/main.cpp.obj
homework7_1.exe: CMakeFiles/homework7_1.dir/Polynomial.cpp.obj
homework7_1.exe: CMakeFiles/homework7_1.dir/build.make
homework7_1.exe: CMakeFiles/homework7_1.dir/linklibs.rsp
homework7_1.exe: CMakeFiles/homework7_1.dir/objects1.rsp
homework7_1.exe: CMakeFiles/homework7_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\Program Files (x86)\cpp\homework7_1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable homework7_1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\homework7_1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/homework7_1.dir/build: homework7_1.exe

.PHONY : CMakeFiles/homework7_1.dir/build

CMakeFiles/homework7_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\homework7_1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/homework7_1.dir/clean

CMakeFiles/homework7_1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\Program Files (x86)\cpp\homework7_1" "E:\Program Files (x86)\cpp\homework7_1" "E:\Program Files (x86)\cpp\homework7_1\cmake-build-debug" "E:\Program Files (x86)\cpp\homework7_1\cmake-build-debug" "E:\Program Files (x86)\cpp\homework7_1\cmake-build-debug\CMakeFiles\homework7_1.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/homework7_1.dir/depend
