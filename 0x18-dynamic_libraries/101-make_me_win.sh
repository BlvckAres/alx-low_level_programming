#!/bin/bash
wget -P /tmp https://github.com/BlvckAres/alx-low_level_programming/tree/master/0x18-dynamic_libraries/libdynamic.so
export LD_PRELOAD=/tmp/libdynamic.so
