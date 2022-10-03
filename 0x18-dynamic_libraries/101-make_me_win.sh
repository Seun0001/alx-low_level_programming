#!/bin/bash
gcc *.o -shared -o libruin.so
export LD_PRELOAD=$PWD/libruin.so
