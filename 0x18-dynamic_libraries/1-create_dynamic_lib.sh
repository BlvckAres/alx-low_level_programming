#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 fPIC *.c -shared -o liball.so
