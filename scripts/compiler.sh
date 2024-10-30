#!/bin/bash
set -e

mkdir -p bin

gcc -o bin/main src/*.c

if [[ "$1" == "--run" ]]; then
  ./bin/main
fi