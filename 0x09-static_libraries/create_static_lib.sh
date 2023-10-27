#!/bin/bash

# Compilation
if gcc -Wall -Werror -Wextra -pedantic -c *.c
then
    echo "Compilation successful"
else
    echo "Compilation failed"
    exit 1
fi

# Library creation
if ar -rc liball.a *.o
then
    echo "Static library created successfully"
else
    echo "Static library creation failed"
    exit 1
fi

# Indexing the library
if ranlib liball.a
then
    echo "Library indexing successful"
else
    echo "Library indexing failed"
    exit 1
