#!/bin/bash

read N

declare Sum=0
declare Average=0

if (( N>0 && N<=500));then
    for ((i=0; i<N; i++)); do
    read num
    Sum=$(echo "$Sum + $num" | bc)
    done
    
    Average=$(echo "scale=3; $Sum / $N" | bc)

    # Print exactly 3 decimal places
    printf "%.3f" "$Average"
fi

