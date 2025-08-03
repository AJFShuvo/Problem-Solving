#!/usr/bin/env bash

# Usage: ./stress.sh [MAX_RUNS]
# If MAX_RUNS is given, stops after that many tests; otherwise infinite.

MAX=${1:-}

# check compiled programs exist
for prog in generator solution valid_solution; do
  if [[ ! -x ./$prog ]]; then
    echo "Error: '$prog' not found or not executable."
    echo "Compile it, e.g.: g++ ... $prog.cpp -o $prog"
    exit 1
  fi
done

i=0
while [[ -z $MAX || $i -lt $MAX ]]; do
  ((i++))
  
  # generate test input
  ./generator > input.txt
  
  # run both solutions
  ./solution < input.txt > my_output.txt
  ./valid_solution < input.txt > valid_output.txt
  
  # check if crashed
  code=$?
  if [[ $code -ne 0 ]]; then
    echo "❌ [Test Failed #$i] -> (crashed)"
    echo "----- input -----"
    cat input.txt
    exit 1
  fi
  
  # compare outputs
  if ! diff -q my_output.txt valid_output.txt >/dev/null; then
    INPUT_STR=$(tr -d '\n' < input.txt)
    echo "❌ [Test Failed #$i] -> $INPUT_STR"
    echo "Your output:"
    cat my_output.txt
    echo "Expected output:"
    cat valid_output.txt
    exit 1
  else
    echo "✅ [Test Passed #$i]"
  fi
done

echo "✅ Completed $i tests without failure."
