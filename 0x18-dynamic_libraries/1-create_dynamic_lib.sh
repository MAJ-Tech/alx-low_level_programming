#!/bin/bash

gcc -c *.c

gcc -shared -o liball.so *.o

echo "Dynamic Library liball.so successfully Created."
