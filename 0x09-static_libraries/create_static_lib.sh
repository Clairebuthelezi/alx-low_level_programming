#!/bin/bash

# Compile all .c files into object files
gcc -c *.c

# Create the static library
ar rcs liball.a *.o

# Cleanup - remove the object files
rm *.o

echo "Static library liball.a created successfully!"
