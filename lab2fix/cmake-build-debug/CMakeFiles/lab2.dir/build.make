# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/nikita/CLionProjects/lab2fix

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/nikita/CLionProjects/lab2fix/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lab2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lab2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab2.dir/flags.make

CMakeFiles/lab2.dir/main.cpp.o: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nikita/CLionProjects/lab2fix/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab2.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab2.dir/main.cpp.o -c /Users/nikita/CLionProjects/lab2fix/main.cpp

CMakeFiles/lab2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab2.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nikita/CLionProjects/lab2fix/main.cpp > CMakeFiles/lab2.dir/main.cpp.i

CMakeFiles/lab2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab2.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nikita/CLionProjects/lab2fix/main.cpp -o CMakeFiles/lab2.dir/main.cpp.s

CMakeFiles/lab2.dir/StackCalculator.cpp.o: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/StackCalculator.cpp.o: ../StackCalculator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nikita/CLionProjects/lab2fix/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lab2.dir/StackCalculator.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab2.dir/StackCalculator.cpp.o -c /Users/nikita/CLionProjects/lab2fix/StackCalculator.cpp

CMakeFiles/lab2.dir/StackCalculator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab2.dir/StackCalculator.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nikita/CLionProjects/lab2fix/StackCalculator.cpp > CMakeFiles/lab2.dir/StackCalculator.cpp.i

CMakeFiles/lab2.dir/StackCalculator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab2.dir/StackCalculator.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nikita/CLionProjects/lab2fix/StackCalculator.cpp -o CMakeFiles/lab2.dir/StackCalculator.cpp.s

CMakeFiles/lab2.dir/Operations/Add.cpp.o: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/Operations/Add.cpp.o: ../Operations/Add.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nikita/CLionProjects/lab2fix/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/lab2.dir/Operations/Add.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab2.dir/Operations/Add.cpp.o -c /Users/nikita/CLionProjects/lab2fix/Operations/Add.cpp

CMakeFiles/lab2.dir/Operations/Add.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab2.dir/Operations/Add.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nikita/CLionProjects/lab2fix/Operations/Add.cpp > CMakeFiles/lab2.dir/Operations/Add.cpp.i

CMakeFiles/lab2.dir/Operations/Add.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab2.dir/Operations/Add.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nikita/CLionProjects/lab2fix/Operations/Add.cpp -o CMakeFiles/lab2.dir/Operations/Add.cpp.s

CMakeFiles/lab2.dir/Operations/Define.cpp.o: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/Operations/Define.cpp.o: ../Operations/Define.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nikita/CLionProjects/lab2fix/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/lab2.dir/Operations/Define.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab2.dir/Operations/Define.cpp.o -c /Users/nikita/CLionProjects/lab2fix/Operations/Define.cpp

CMakeFiles/lab2.dir/Operations/Define.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab2.dir/Operations/Define.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nikita/CLionProjects/lab2fix/Operations/Define.cpp > CMakeFiles/lab2.dir/Operations/Define.cpp.i

CMakeFiles/lab2.dir/Operations/Define.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab2.dir/Operations/Define.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nikita/CLionProjects/lab2fix/Operations/Define.cpp -o CMakeFiles/lab2.dir/Operations/Define.cpp.s

CMakeFiles/lab2.dir/Operations/Divide.cpp.o: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/Operations/Divide.cpp.o: ../Operations/Divide.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nikita/CLionProjects/lab2fix/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/lab2.dir/Operations/Divide.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab2.dir/Operations/Divide.cpp.o -c /Users/nikita/CLionProjects/lab2fix/Operations/Divide.cpp

CMakeFiles/lab2.dir/Operations/Divide.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab2.dir/Operations/Divide.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nikita/CLionProjects/lab2fix/Operations/Divide.cpp > CMakeFiles/lab2.dir/Operations/Divide.cpp.i

CMakeFiles/lab2.dir/Operations/Divide.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab2.dir/Operations/Divide.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nikita/CLionProjects/lab2fix/Operations/Divide.cpp -o CMakeFiles/lab2.dir/Operations/Divide.cpp.s

CMakeFiles/lab2.dir/Operations/Multiply.cpp.o: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/Operations/Multiply.cpp.o: ../Operations/Multiply.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nikita/CLionProjects/lab2fix/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/lab2.dir/Operations/Multiply.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab2.dir/Operations/Multiply.cpp.o -c /Users/nikita/CLionProjects/lab2fix/Operations/Multiply.cpp

CMakeFiles/lab2.dir/Operations/Multiply.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab2.dir/Operations/Multiply.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nikita/CLionProjects/lab2fix/Operations/Multiply.cpp > CMakeFiles/lab2.dir/Operations/Multiply.cpp.i

CMakeFiles/lab2.dir/Operations/Multiply.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab2.dir/Operations/Multiply.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nikita/CLionProjects/lab2fix/Operations/Multiply.cpp -o CMakeFiles/lab2.dir/Operations/Multiply.cpp.s

CMakeFiles/lab2.dir/Operations/Pop.cpp.o: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/Operations/Pop.cpp.o: ../Operations/Pop.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nikita/CLionProjects/lab2fix/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/lab2.dir/Operations/Pop.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab2.dir/Operations/Pop.cpp.o -c /Users/nikita/CLionProjects/lab2fix/Operations/Pop.cpp

CMakeFiles/lab2.dir/Operations/Pop.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab2.dir/Operations/Pop.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nikita/CLionProjects/lab2fix/Operations/Pop.cpp > CMakeFiles/lab2.dir/Operations/Pop.cpp.i

CMakeFiles/lab2.dir/Operations/Pop.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab2.dir/Operations/Pop.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nikita/CLionProjects/lab2fix/Operations/Pop.cpp -o CMakeFiles/lab2.dir/Operations/Pop.cpp.s

CMakeFiles/lab2.dir/Operations/Print.cpp.o: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/Operations/Print.cpp.o: ../Operations/Print.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nikita/CLionProjects/lab2fix/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/lab2.dir/Operations/Print.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab2.dir/Operations/Print.cpp.o -c /Users/nikita/CLionProjects/lab2fix/Operations/Print.cpp

CMakeFiles/lab2.dir/Operations/Print.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab2.dir/Operations/Print.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nikita/CLionProjects/lab2fix/Operations/Print.cpp > CMakeFiles/lab2.dir/Operations/Print.cpp.i

CMakeFiles/lab2.dir/Operations/Print.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab2.dir/Operations/Print.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nikita/CLionProjects/lab2fix/Operations/Print.cpp -o CMakeFiles/lab2.dir/Operations/Print.cpp.s

CMakeFiles/lab2.dir/Operations/Push.cpp.o: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/Operations/Push.cpp.o: ../Operations/Push.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nikita/CLionProjects/lab2fix/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/lab2.dir/Operations/Push.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab2.dir/Operations/Push.cpp.o -c /Users/nikita/CLionProjects/lab2fix/Operations/Push.cpp

CMakeFiles/lab2.dir/Operations/Push.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab2.dir/Operations/Push.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nikita/CLionProjects/lab2fix/Operations/Push.cpp > CMakeFiles/lab2.dir/Operations/Push.cpp.i

CMakeFiles/lab2.dir/Operations/Push.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab2.dir/Operations/Push.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nikita/CLionProjects/lab2fix/Operations/Push.cpp -o CMakeFiles/lab2.dir/Operations/Push.cpp.s

CMakeFiles/lab2.dir/Operations/Sqrt.cpp.o: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/Operations/Sqrt.cpp.o: ../Operations/Sqrt.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nikita/CLionProjects/lab2fix/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/lab2.dir/Operations/Sqrt.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab2.dir/Operations/Sqrt.cpp.o -c /Users/nikita/CLionProjects/lab2fix/Operations/Sqrt.cpp

CMakeFiles/lab2.dir/Operations/Sqrt.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab2.dir/Operations/Sqrt.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nikita/CLionProjects/lab2fix/Operations/Sqrt.cpp > CMakeFiles/lab2.dir/Operations/Sqrt.cpp.i

CMakeFiles/lab2.dir/Operations/Sqrt.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab2.dir/Operations/Sqrt.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nikita/CLionProjects/lab2fix/Operations/Sqrt.cpp -o CMakeFiles/lab2.dir/Operations/Sqrt.cpp.s

CMakeFiles/lab2.dir/Operations/Subtract.cpp.o: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/Operations/Subtract.cpp.o: ../Operations/Subtract.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nikita/CLionProjects/lab2fix/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/lab2.dir/Operations/Subtract.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab2.dir/Operations/Subtract.cpp.o -c /Users/nikita/CLionProjects/lab2fix/Operations/Subtract.cpp

CMakeFiles/lab2.dir/Operations/Subtract.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab2.dir/Operations/Subtract.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nikita/CLionProjects/lab2fix/Operations/Subtract.cpp > CMakeFiles/lab2.dir/Operations/Subtract.cpp.i

CMakeFiles/lab2.dir/Operations/Subtract.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab2.dir/Operations/Subtract.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nikita/CLionProjects/lab2fix/Operations/Subtract.cpp -o CMakeFiles/lab2.dir/Operations/Subtract.cpp.s

CMakeFiles/lab2.dir/Factory/OperationFactory.cpp.o: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/Factory/OperationFactory.cpp.o: ../Factory/OperationFactory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nikita/CLionProjects/lab2fix/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/lab2.dir/Factory/OperationFactory.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab2.dir/Factory/OperationFactory.cpp.o -c /Users/nikita/CLionProjects/lab2fix/Factory/OperationFactory.cpp

CMakeFiles/lab2.dir/Factory/OperationFactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab2.dir/Factory/OperationFactory.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nikita/CLionProjects/lab2fix/Factory/OperationFactory.cpp > CMakeFiles/lab2.dir/Factory/OperationFactory.cpp.i

CMakeFiles/lab2.dir/Factory/OperationFactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab2.dir/Factory/OperationFactory.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nikita/CLionProjects/lab2fix/Factory/OperationFactory.cpp -o CMakeFiles/lab2.dir/Factory/OperationFactory.cpp.s

# Object files for target lab2
lab2_OBJECTS = \
"CMakeFiles/lab2.dir/main.cpp.o" \
"CMakeFiles/lab2.dir/StackCalculator.cpp.o" \
"CMakeFiles/lab2.dir/Operations/Add.cpp.o" \
"CMakeFiles/lab2.dir/Operations/Define.cpp.o" \
"CMakeFiles/lab2.dir/Operations/Divide.cpp.o" \
"CMakeFiles/lab2.dir/Operations/Multiply.cpp.o" \
"CMakeFiles/lab2.dir/Operations/Pop.cpp.o" \
"CMakeFiles/lab2.dir/Operations/Print.cpp.o" \
"CMakeFiles/lab2.dir/Operations/Push.cpp.o" \
"CMakeFiles/lab2.dir/Operations/Sqrt.cpp.o" \
"CMakeFiles/lab2.dir/Operations/Subtract.cpp.o" \
"CMakeFiles/lab2.dir/Factory/OperationFactory.cpp.o"

# External object files for target lab2
lab2_EXTERNAL_OBJECTS =

lab2: CMakeFiles/lab2.dir/main.cpp.o
lab2: CMakeFiles/lab2.dir/StackCalculator.cpp.o
lab2: CMakeFiles/lab2.dir/Operations/Add.cpp.o
lab2: CMakeFiles/lab2.dir/Operations/Define.cpp.o
lab2: CMakeFiles/lab2.dir/Operations/Divide.cpp.o
lab2: CMakeFiles/lab2.dir/Operations/Multiply.cpp.o
lab2: CMakeFiles/lab2.dir/Operations/Pop.cpp.o
lab2: CMakeFiles/lab2.dir/Operations/Print.cpp.o
lab2: CMakeFiles/lab2.dir/Operations/Push.cpp.o
lab2: CMakeFiles/lab2.dir/Operations/Sqrt.cpp.o
lab2: CMakeFiles/lab2.dir/Operations/Subtract.cpp.o
lab2: CMakeFiles/lab2.dir/Factory/OperationFactory.cpp.o
lab2: CMakeFiles/lab2.dir/build.make
lab2: CMakeFiles/lab2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/nikita/CLionProjects/lab2fix/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX executable lab2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab2.dir/build: lab2

.PHONY : CMakeFiles/lab2.dir/build

CMakeFiles/lab2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab2.dir/clean

CMakeFiles/lab2.dir/depend:
	cd /Users/nikita/CLionProjects/lab2fix/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nikita/CLionProjects/lab2fix /Users/nikita/CLionProjects/lab2fix /Users/nikita/CLionProjects/lab2fix/cmake-build-debug /Users/nikita/CLionProjects/lab2fix/cmake-build-debug /Users/nikita/CLionProjects/lab2fix/cmake-build-debug/CMakeFiles/lab2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab2.dir/depend

