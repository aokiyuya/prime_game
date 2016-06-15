#!/usr/bin/env python
# encoding: utf-8
###########################
# Author: Yuya Aoki
#
###########################
import math
def prime():
    print "2"
    print "3"
    for num in range(1, 1667):
        num1, num2 = around_six(num)
        test_prime(num1)
        test_prime(num2)

def test_prime(num):
    if pow(2, num - 1, num) == 1:
        print str(num) + "\n"

def prime2():
    prime_num = []
    prime_num.append(2)
    prime_num.append(3)
    for tmp in range (1,16667):
        num1, num2 = around_six(tmp)
        prime_num = test_prime2(num1, prime_num)
        prime_num = test_prime2(num2, prime_num)
    print prime_num

def test_prime2(num, prime_num):
    for tmp in prime_num:
        if tmp > math.sqrt(num):
            break
        if num%tmp == 0:
            return prime_num
    prime_num.append(num)
    return prime_num

def around_six(num):
    return 6*num - 1, 6*num + 1

if __name__ == '__main__':
    # code
    prime()
