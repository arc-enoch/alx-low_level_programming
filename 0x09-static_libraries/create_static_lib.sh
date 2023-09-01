#!/bin/bash

# Compile all .c files into .o files
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create a static library named liball.a
ar -rc liball.a *.o

# Index the library
ranlib liball.a

# Clean up .o files
rm *.o

echo "Static library liball.a created."

