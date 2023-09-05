		0x00-hello_world README file

last updated: 28/08/23;
Contributors: MyAtlas0;

Requirement:

BETTY Linter
To run the Betty linter just with command betty <filename>:

	-Go to the Betty repository
	-Clone the repo to your local machine
	-cd into the Betty directory
	-Install the linter with sudo ./install.sh
	-emacs or vi a new file called betty, and copy the script below:


//#!/bin/bash
//# Simply a wrapper script to keep you from having to use betty-style
//# and betty-doc separately on every item.
//# Originally by Tim Britton (@wintermanc3r), multiargument added by
//# Larry Madeo (@hillmonkey)
//
//BIN_PATH="/usr/local/bin"
//BETTY_STYLE="betty-style"
//BETTY_DOC="betty-doc"
//
//if [ "$#" = "0" ]; then
//	echo "No arguments passed."
//	exit 1
//fi
//
//for argument in "$@" ; do
//	echo -e "\n========== $argument =========="
//	${BIN_PATH}/${BETTY_STYLE} "$argument"
//	${BIN_PATH}/${BETTY_DOC} "$argument"
//done

	-Once saved, exit file and change permissions to apply to all users with chmod a+x betty
	-Move the betty file into /bin/ directory or somewhere else in your $PATH with sudo mv betty /bin/
You can now type betty <filename> to run the Betty linter!



TASKS

0. Preprocessor

mandatory
Write a script that runs a C file through the preprocessor and save the result into another file.

The C file name will be saved in the variable $CFILE
The output should be saved in the file c

1. Compiler

mandatory
Write a script that compiles a C file but does not link.

The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .o instead of .c.
Example: if the C file is main.c, the output file should be main.o

2. Assembler

mandatory
Write a script that generates the assembly code of a C code and save it in an output file.

The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .s instead of .c.
Example: if the C file is main.c, the output file should be main.s

3. Name

mandatory
Write a script that compiles a C file and creates an executable named cisfun.

The C file name will be saved in the variable $CFILE

4. Hello, puts

mandatory
Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

Use the function puts
You are not allowed to use printf
Your program should end with the value 0

5. Hello, printf

mandatory
Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.

Use the function printf
You are not allowed to use the function puts
Your program should return 0
Your program should compile without warning when using the -Wall gcc option

6. Size is not grandeur, and territory does not make a nation

mandatory
Write a C program that prints the size of various types on the computer it is compiled and run on.

You should produce the exact same output as in the example
Warnings are allowed
Your program should return 0
You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option


7. Intel

#advanced
Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

The C file name will be saved in the variable $CFILE.
The output file should be named the same as the C file, but with the extension .s instead of .c.
Example: if the C file is main.c, the output file should be main.s


8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity

#advanced
Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.

You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
Your program should return 1
Your program should compile without any warnings when using the -Wall gcc option

