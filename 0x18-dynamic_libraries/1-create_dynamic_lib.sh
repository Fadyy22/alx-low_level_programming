#!/bin/bash
gcc -c -fPBIC *.c
gcc -shared -o liball.so *.o
