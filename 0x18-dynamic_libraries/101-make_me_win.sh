#!/bin/bash
gcc -shared -o /tmp/winning.so -fPIC -ldl 101-winning.c
LD_PRELOAD=/tmp/winning.so
