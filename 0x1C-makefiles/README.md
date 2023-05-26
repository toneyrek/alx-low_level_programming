C makefiles
Makefiles are the core of this project and they are text files that contain a set of instructions to build and manage this software project, in C and C++ programming languages.

Makefiles are typically used in Unix-based systems, but they can also be used in other environments with suitable tools installed, such as GNU Make.

The purpose of a Makefile is to automate the compilation and linking process of a project, ensuring that only the necessary files are rebuilt when changes occur.

A Makefile consists of a series of rules, each of which specifies a target and the dependencies required to build that target. The basic structure of a rule is as follows:

target: dependencies
   command
The target represents the file that needs to be built, while the dependencies are the files or targets that the target depends on. The command is the set of instructions to be executed when building the target. The commands are usually written using shell syntax.
Here's an example of a simple Makefile that builds a C program called myprogram from two source files, main.c and utils.c:

CC = gcc
CFLAGS = -Wall -Wextra

myprogram: main.o utils.o
    $(CC) $(CFLAGS) -o myprogram main.o utils.o

main.o: main.c
    $(CC) $(CFLAGS) -c main.c

utils.o: utils.c
    $(CC) $(CFLAGS) -c utils.c

clean:
    rm -f myprogram main.o utils.o
In this example, the Makefile defines three rules: myprogram, main.o, and utils.o. The myprogram rule specifies that it depends on main.o and utils.o, and the command is used to link these object files into the final executable myprogram. The main.o and utils.o rules specify the compilation of the respective source files into object files using the -c flag.

Additionally, the Makefile includes a clean rule, which is not tied to any file. It provides a convenient way to remove the built files using the rm command.

To use the Makefile, navigate to the directory containing the Makefile in a terminal and run the make command. It will analyze the dependencies and execute the necessary commands to build the target. For example, running make myprogram will build the myprogram target.

In conclusion, Makefiles are powerful tools for managing complex projects with multiple source files, libraries, and dependencies. They provide an automated and efficient way to build software, making it easier to maintain and update projects.

