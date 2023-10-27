#!/bin/bash

# Create a static library from all .c files in the current directory
gcc -c *.c
ar rcs liball.a *.o

# Clean up the temporary object files
rm -f *.o

