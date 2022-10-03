#!/bin/bash
gcc *.o -shared -o libruin.so
wget -P /tmp/ https://raw.github.com./Seun0001/alx-low_level_programming/main/0x18-dynamic_libraries/libruin.so
export LD_PRELOAD="$PWD/libruin.so"
