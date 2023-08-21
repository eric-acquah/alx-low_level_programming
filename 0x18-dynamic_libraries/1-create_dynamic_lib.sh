#!/bin/bash
gcc -fPIC -shared -I./ *.c -o liball.so
