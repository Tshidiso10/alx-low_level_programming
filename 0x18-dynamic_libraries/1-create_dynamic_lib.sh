#!/bin/bash
gcc -c -fPIC function.c
gcc -shared -o 100-operations.so *.o
