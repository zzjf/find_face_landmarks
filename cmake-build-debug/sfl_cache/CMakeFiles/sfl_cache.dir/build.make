# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/kevinjfliu/Downloads/find_face_landmarks

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/kevinjfliu/Downloads/find_face_landmarks/cmake-build-debug

# Include any dependencies generated for this target.
include sfl_cache/CMakeFiles/sfl_cache.dir/depend.make

# Include the progress variables for this target.
include sfl_cache/CMakeFiles/sfl_cache.dir/progress.make

# Include the compile flags for this target's objects.
include sfl_cache/CMakeFiles/sfl_cache.dir/flags.make

sfl_cache/CMakeFiles/sfl_cache.dir/sfl_cache.cpp.o: sfl_cache/CMakeFiles/sfl_cache.dir/flags.make
sfl_cache/CMakeFiles/sfl_cache.dir/sfl_cache.cpp.o: ../sfl_cache/sfl_cache.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kevinjfliu/Downloads/find_face_landmarks/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object sfl_cache/CMakeFiles/sfl_cache.dir/sfl_cache.cpp.o"
	cd /Users/kevinjfliu/Downloads/find_face_landmarks/cmake-build-debug/sfl_cache && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sfl_cache.dir/sfl_cache.cpp.o -c /Users/kevinjfliu/Downloads/find_face_landmarks/sfl_cache/sfl_cache.cpp

sfl_cache/CMakeFiles/sfl_cache.dir/sfl_cache.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sfl_cache.dir/sfl_cache.cpp.i"
	cd /Users/kevinjfliu/Downloads/find_face_landmarks/cmake-build-debug/sfl_cache && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kevinjfliu/Downloads/find_face_landmarks/sfl_cache/sfl_cache.cpp > CMakeFiles/sfl_cache.dir/sfl_cache.cpp.i

sfl_cache/CMakeFiles/sfl_cache.dir/sfl_cache.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sfl_cache.dir/sfl_cache.cpp.s"
	cd /Users/kevinjfliu/Downloads/find_face_landmarks/cmake-build-debug/sfl_cache && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kevinjfliu/Downloads/find_face_landmarks/sfl_cache/sfl_cache.cpp -o CMakeFiles/sfl_cache.dir/sfl_cache.cpp.s

sfl_cache/CMakeFiles/sfl_cache.dir/sfl_cache.cpp.o.requires:

.PHONY : sfl_cache/CMakeFiles/sfl_cache.dir/sfl_cache.cpp.o.requires

sfl_cache/CMakeFiles/sfl_cache.dir/sfl_cache.cpp.o.provides: sfl_cache/CMakeFiles/sfl_cache.dir/sfl_cache.cpp.o.requires
	$(MAKE) -f sfl_cache/CMakeFiles/sfl_cache.dir/build.make sfl_cache/CMakeFiles/sfl_cache.dir/sfl_cache.cpp.o.provides.build
.PHONY : sfl_cache/CMakeFiles/sfl_cache.dir/sfl_cache.cpp.o.provides

sfl_cache/CMakeFiles/sfl_cache.dir/sfl_cache.cpp.o.provides.build: sfl_cache/CMakeFiles/sfl_cache.dir/sfl_cache.cpp.o


# Object files for target sfl_cache
sfl_cache_OBJECTS = \
"CMakeFiles/sfl_cache.dir/sfl_cache.cpp.o"

# External object files for target sfl_cache
sfl_cache_EXTERNAL_OBJECTS =

sfl_cache/sfl_cache: sfl_cache/CMakeFiles/sfl_cache.dir/sfl_cache.cpp.o
sfl_cache/sfl_cache: sfl_cache/CMakeFiles/sfl_cache.dir/build.make
sfl_cache/sfl_cache: /usr/local/lib/libboost_filesystem-mt.dylib
sfl_cache/sfl_cache: /usr/local/lib/libboost_program_options-mt.dylib
sfl_cache/sfl_cache: /usr/local/lib/libboost_system-mt.dylib
sfl_cache/sfl_cache: sequence_face_landmarks/libsequence_face_landmarks_d.a
sfl_cache/sfl_cache: /usr/local/lib/libboost_filesystem-mt.dylib
sfl_cache/sfl_cache: /usr/local/lib/libboost_program_options-mt.dylib
sfl_cache/sfl_cache: /usr/local/lib/libboost_system-mt.dylib
sfl_cache/sfl_cache: /usr/local/lib/libopencv_features2d.3.3.0.dylib
sfl_cache/sfl_cache: /usr/local/lib/libopencv_highgui.3.3.0.dylib
sfl_cache/sfl_cache: /usr/local/lib/libopencv_flann.3.3.0.dylib
sfl_cache/sfl_cache: /usr/local/lib/libopencv_videoio.3.3.0.dylib
sfl_cache/sfl_cache: /usr/local/lib/libopencv_imgcodecs.3.3.0.dylib
sfl_cache/sfl_cache: /usr/local/lib/libopencv_face.3.3.0.dylib
sfl_cache/sfl_cache: /usr/local/lib/libopencv_objdetect.3.3.0.dylib
sfl_cache/sfl_cache: /usr/local/lib/libopencv_imgproc.3.3.0.dylib
sfl_cache/sfl_cache: /usr/local/lib/libopencv_core.3.3.0.dylib
sfl_cache/sfl_cache: /usr/local/lib/libdlib.dylib
sfl_cache/sfl_cache: /usr/X11R6/lib/libSM.dylib
sfl_cache/sfl_cache: /usr/X11R6/lib/libICE.dylib
sfl_cache/sfl_cache: /usr/X11R6/lib/libX11.dylib
sfl_cache/sfl_cache: /usr/X11R6/lib/libXext.dylib
sfl_cache/sfl_cache: /usr/local/lib/libpng.dylib
sfl_cache/sfl_cache: /usr/lib/libcblas.dylib
sfl_cache/sfl_cache: /usr/lib/liblapack.dylib
sfl_cache/sfl_cache: /usr/lib/libsqlite3.dylib
sfl_cache/sfl_cache: /usr/local/lib/libprotobuf.dylib
sfl_cache/sfl_cache: sfl_cache/CMakeFiles/sfl_cache.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/kevinjfliu/Downloads/find_face_landmarks/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sfl_cache"
	cd /Users/kevinjfliu/Downloads/find_face_landmarks/cmake-build-debug/sfl_cache && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sfl_cache.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
sfl_cache/CMakeFiles/sfl_cache.dir/build: sfl_cache/sfl_cache

.PHONY : sfl_cache/CMakeFiles/sfl_cache.dir/build

sfl_cache/CMakeFiles/sfl_cache.dir/requires: sfl_cache/CMakeFiles/sfl_cache.dir/sfl_cache.cpp.o.requires

.PHONY : sfl_cache/CMakeFiles/sfl_cache.dir/requires

sfl_cache/CMakeFiles/sfl_cache.dir/clean:
	cd /Users/kevinjfliu/Downloads/find_face_landmarks/cmake-build-debug/sfl_cache && $(CMAKE_COMMAND) -P CMakeFiles/sfl_cache.dir/cmake_clean.cmake
.PHONY : sfl_cache/CMakeFiles/sfl_cache.dir/clean

sfl_cache/CMakeFiles/sfl_cache.dir/depend:
	cd /Users/kevinjfliu/Downloads/find_face_landmarks/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/kevinjfliu/Downloads/find_face_landmarks /Users/kevinjfliu/Downloads/find_face_landmarks/sfl_cache /Users/kevinjfliu/Downloads/find_face_landmarks/cmake-build-debug /Users/kevinjfliu/Downloads/find_face_landmarks/cmake-build-debug/sfl_cache /Users/kevinjfliu/Downloads/find_face_landmarks/cmake-build-debug/sfl_cache/CMakeFiles/sfl_cache.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : sfl_cache/CMakeFiles/sfl_cache.dir/depend

