#!/bin/bash

# Compile all .c files into .o object files
for file in *.c; do
    gcc -c -fPIC "$file"
done

# Create the dynamic library liball.so from the .o files
gcc -shared -o liball.so *.o

# Clean up the .o files
rm *.o
