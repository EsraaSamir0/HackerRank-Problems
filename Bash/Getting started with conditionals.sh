#!/bin/bash

read Char

if [[ "$Char" = "Y" || "$Char" = "y" ]]  ; then
    echo "YES"
elif [[ "$Char" = "N" || "$Char" = "n" ]]  ; then
    echo "NO"
fi

