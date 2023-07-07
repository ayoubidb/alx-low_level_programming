#!/bin/bash
gcc -c -Wall -Wextra *.c
ar rcs libmy.a *.o
