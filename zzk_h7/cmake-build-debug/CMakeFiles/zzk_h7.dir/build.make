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
CMAKE_SOURCE_DIR = "E:\Program Files (x86)\cpp\zzk_h7"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\Program Files (x86)\cpp\zzk_h7\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/zzk_h7.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/zzk_h7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/zzk_h7.dir/flags.make

CMakeFiles/zzk_h7.dir/main.cpp.obj: CMakeFiles/zzk_h7.dir/flags.make
CMakeFiles/zzk_h7.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\Program Files (x86)\cpp\zzk_h7\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/zzk_h7.dir/main.cpp.obj"
	D:\Applications\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\zzk_h7.dir\main.cpp.obj -c "E:\Program Files (x86)\cpp\zzk_h7\main.cpp"

CMakeFiles/zzk_h7.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/zzk_h7.dir/main.cpp.i"
	D:\Applications\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\Program Files (x86)\cpp\zzk_h7\main.cpp" > CMakeFiles\zzk_h7.dir\main.cpp.i

CMakeFiles/zzk_h7.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/zzk_h7.dir/main.cpp.s"
	D:\Applications\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\Program Files (x86)\cpp\zzk_h7\main.cpp" -o CMakeFiles\zzk_h7.dir\main.cpp.s

# Object files for target zzk_h7
zzk_h7_OBJECTS = \
"CMakeFiles/zzk_h7.dir/main.cpp.obj"

# External object files for target zzk_h7
zzk_h7_EXTERNAL_OBJECTS =

zzk_h7.exe: CMakeFiles/zzk_h7.dir/main.cpp.obj
zzk_h7.exe: CMakeFiles/zzk_h7.dir/build.make
zzk_h7.exe: CMakeFiles/zzk_h7.dir/linklibs.rsp
zzk_h7.exe: CMakeFiles/zzk_h7.dir/objects1.rsp
zzk_h7.exe: CMakeFiles/zzk_h7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\Program Files (x86)\cpp\zzk_h7\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable zzk_h7.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\zzk_h7.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/zzk_h7.dir/build: zzk_h7.exe

.PHONY : CMakeFiles/zzk_h7.dir/build

CMakeFiles/zzk_h7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\zzk_h7.dir\cmake_clean.cmake
.PHONY : CMakeFiles/zzk_h7.dir/clean

CMakeFiles/zzk_h7.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\Program Files (x86)\cpp\zzk_h7" "E:\Program Files (x86)\cpp\zzk_h7" "E:\Program Files (x86)\cpp\zzk_h7\cmake-build-debug" "E:\Program Files (x86)\cpp\zzk_h7\cmake-build-debug" "E:\Program Files (x86)\cpp\zzk_h7\cmake-build-debug\CMakeFiles\zzk_h7.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/zzk_h7.dir/depend
