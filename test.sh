#!/bin/sh

set -r
trap 'echo err' ERR

time  python sec_prime.py


exit 0

