# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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
CMAKE_SOURCE_DIR = "E:\Program Files (x86)\cpp\RetVal"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\Program Files (x86)\cpp\RetVal\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/RetVal.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/RetVal.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RetVal.dir/flags.make

CMakeFiles/RetVal.dir/main.cpp.obj: CMakeFiles/RetVal.dir/flags.make
CMakeFiles/RetVal.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\Program Files (x86)\cpp\RetVal\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/RetVal.dir/main.cpp.obj"
	D:\Applications\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\RetVal.dir\main.cpp.obj -c "E:\Program Files (x86)\cpp\RetVal\main.cpp"

CMakeFiles/RetVal.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RetVal.dir/main.cpp.i"
	D:\Applications\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\Program Files (x86)\cpp\RetVal\main.cpp" > CMakeFiles\RetVal.dir\main.cpp.i

CMakeFiles/RetVal.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RetVal.dir/main.cpp.s"
	D:\Applications\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\Program Files (x86)\cpp\RetVal\main.cpp" -o CMakeFiles\RetVal.dir\main.cpp.s

# Object files for target RetVal
RetVal_OBJECTS = \
"CMakeFiles/RetVal.dir/main.cpp.obj"

# External object files for target RetVal
RetVal_EXTERNAL_OBJECTS =

RetVal.exe: CMakeFiles/RetVal.dir/main.cpp.obj
RetVal.exe: CMakeFiles/RetVal.dir/build.make
RetVal.exe: CMakeFiles/RetVal.dir/linklibs.rsp
RetVal.exe: CMakeFiles/RetVal.dir/objects1.rsp
RetVal.exe: CMakeFiles/RetVal.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\Program Files (x86)\cpp\RetVal\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable RetVal.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\RetVal.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RetVal.dir/build: RetVal.exe

.PHONY : CMakeFiles/RetVal.dir/build

CMakeFiles/RetVal.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\RetVal.dir\cmake_clean.cmake
.PHONY : CMakeFiles/RetVal.dir/clean

CMakeFiles/RetVal.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\Program Files (x86)\cpp\RetVal" "E:\Program Files (x86)\cpp\RetVal" "E:\Program Files (x86)\cpp\RetVal\cmake-build-debug" "E:\Program Files (x86)\cpp\RetVal\cmake-build-debug" "E:\Program Files (x86)\cpp\RetVal\cmake-build-debug\CMakeFiles\RetVal.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/RetVal.dir/depend

