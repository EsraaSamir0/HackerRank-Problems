#!/bin/bash

countries=()

while read line; do
    countries+=("$line")
done

echo "${countries[@]}"
