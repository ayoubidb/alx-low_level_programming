#!/bin/bash
gcc -c -Wall -Wextra -c *.c
ar rcs libmy.a *.o
