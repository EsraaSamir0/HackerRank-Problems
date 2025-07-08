#!/bin/bash

read X
read Y
read Z

if (( X > 0 && X <= 1000 && Y > 0 && X <= 1000 && Z > 0 && Z <= 1000)); then
    if (( X==Y && X==Z )); then
        echo "EQUILATERAL"
    elif (( X==Y || X==Z || Y==Z ));then
        echo "ISOSCELES"
    else
        echo "SCALENE"
    fi
fi
