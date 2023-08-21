#!/bin/bash
wget -P /tmp https://github.com/NoelOsiro/alx-low_level_programming/raw/main/0x18-dynamic_libraries/makemewin.so
export LD_PRELOAD=/tmp/makemewin.so