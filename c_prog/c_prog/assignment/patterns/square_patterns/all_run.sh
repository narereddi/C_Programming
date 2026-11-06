#!/bin/bash
# Script to compile and run multiple C programs separately

# List all your C files here (with different names)
files=("p5.c" "p2.c" "p3.c" "p4.c" "p6.c" "p7.c" "p8.c" "p9.c" "p10.c" "p11.c" "p12.c" "p13.c")

# Loop through each file
for file in "${files[@]}"
do
    # Get program name without the .c extension
    name="${file%.c}"

    echo "--------------------------------"
    echo "Compiling $file ..."

    gcc "$file" -o "$name"    # compile to separate executable

    if [ $? -eq 0 ]; then
        echo " Compilation successful: $name"
        echo "Running $name ..."
        echo "------------------------------"
        ./"$name"              # run the executable
        echo "------------------------------"
        echo "Completed $name"
        echo
    else
        echo " Compilation failed for $file"
        exit 1
    fi
done

echo "================================"
echo "All programs compiled and executed successfully!"

