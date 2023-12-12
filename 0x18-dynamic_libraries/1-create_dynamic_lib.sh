#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY=.:$LD_LIBRARY_PATH
