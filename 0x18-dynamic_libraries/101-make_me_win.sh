#!/bin/bash
wget -P /tmp https://github.com/abdi8-GitHub/alx-low_level_programming/tree/master/0x18-dynamic_libraries/lottory.so
export LD_PRELOAD=/tmp/lottory.so
