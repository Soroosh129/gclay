#!/bin/bash

cmake .. -Dusched=ON -Duser=ON -Ddriver=nouveau -DCMAKE_BUILD_TYPE=Debug
echo "cmake done."
make
echo "make done."
make install
./lib/gdev_usched_monitor
