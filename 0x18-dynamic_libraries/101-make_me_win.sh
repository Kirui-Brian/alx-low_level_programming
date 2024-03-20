#!/bin/bash
wget -P /tmp https://github.com/Kirui-brian/alx-low_level_programming/raw/master/0x18-dynamic_libraries/nrandom.so/tmp
export LD_PRELOAD=/tmp/nrandom.so
