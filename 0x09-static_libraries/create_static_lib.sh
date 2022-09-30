#!/bin/bash
gcc -c -Wall -Werror -Wextra -pefantic -std=gnu89 *.c
ar -rc liball.a *.o
