#!/bin/bash

# Directory containing source files
SOURCE_DIR="0x09-static_libraries"
# Name of the static library
LIBRARY_NAME="liball.a"

# Compile source files into object files
echo "Compiling source files..."
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c

# Create the static library
echo "Creating the static library..."
ar -rcs ${LIBRARY_NAME} *.o

# Clean up by removing object files
echo "Cleaning up..."
rm -f *.o

echo "Static library ${LIBRARY_NAME} created!"
