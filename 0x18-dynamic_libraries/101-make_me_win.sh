#!/bin/bash

# Remove the symbolic link if it already exists
if [ -L fake_gm ]; then
    rm fake_gm
fi

# Create a symbolic link to the gm program
ln -s gm fake_gm

# Run the original gm program through the symbolic link
./fake_gm 9 8 10 24 75 9
