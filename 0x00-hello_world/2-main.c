#!/bin/bash

# Check if $CFILE is set
if [ -z "$CFILE" ]; then
    echo "Error: CFILE variable is not set."
    exit 1
fi

# Generate assembly code and save to .s file
gcc -S "$CFILE" -o "${CFILE%.c}.s"

# Check if gcc command was successful
if [ $? -ne 0 ]; then
    echo "Error: Failed to generate assembly code."
    exit 1
fi

echo "Assembly code generated successfully in ${CFILE%.c}.s"

