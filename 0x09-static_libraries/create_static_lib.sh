#!/bin/bash

# Create a temporary directory to hold object files
temp_dir=$(mktemp -d)

# Compile all .c files in the current directory into object files
for source_file in *.c; do
    gcc -c "$source_file" -o "$temp_dir/${source_file%.c}.o"
done

# Create the static library liball.a from the object files
ar rcs liball.a "$temp_dir"/*.o

# Clean up the temporary directory
rm -r "$temp_dir"
