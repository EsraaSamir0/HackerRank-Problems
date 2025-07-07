#!/bin/bash

read X
read Y 

declare -i Sum=0
declare -i Difference=0
declare -i Product=0
declare -i Quotient=0

if (( X >= -100 && X <= 100)); then
    if (( Y >= -100 && Y <= 100 && Y != 0)); then
        Sum=$((X + Y))
        Difference=$((X - Y))
        Product=$((X * Y))
        Quotient=$((X / Y))
    fi
fi

echo "$Sum"
echo "$Difference"
echo "$Product"
echo "$Quotient"
