#!/usr/bin/env python
# encoding: utf-8
###########################
# Author: Yuya Aoki
#
###########################
def prime(num):
    if pow(2, num - 1, num) == 1:
        print str(num) + "\n"

def around_six(num):
    return 6*num - 1, 6*num + 1

if __name__ == '__main__':
    # code
    print "2"
    print "3"
    for num in range(1, 16667):
        num1, num2 = around_six(num)
        prime(num1)
        prime(num2)
