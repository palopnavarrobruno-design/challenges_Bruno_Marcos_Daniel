#!/bin/bash 

set -e # Hacer que el bash salga con codigo fallido si cualquier comando falla

CC=gcc
CFLAGS="-Wall -Wextra -Werror"


$CC $CFLAGS -o test_challenge05 -DEXISTE=1 starter.c test_challenge05.c

if ./test_challenge05; then
  echo "PASSED"
  exit 0
else
  echo "FAILED"
  exit 1
fi
