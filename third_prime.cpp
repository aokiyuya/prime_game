// Author: yuya aoki
// solve prime number using Sieve of Eratosthenes
#define MAXNUM 10000
#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]){
	int list[MAXNUM];
	int first_num;
	for(int i = 0 ; i <= MAXNUM - 2 ; i++){
		list[i] = i + 2;
	}
	for(int tmp = 0 ; tmp <= sqrt(MAXNUM) ; tmp++){
		if (list[tmp] == 0) continue;
		first_num = list[tmp];
		for(int temp = tmp + 1 ; temp <= MAXNUM ; temp++){
			if(list[temp]%first_num == 0) list[temp] = 0;
		}
	}
	for(int tmp = 0 ; tmp <= MAXNUM ; tmp ++){
		if (list[tmp] == 0) continue;
		printf("%d\n", list[tmp]);
		}
	return 0;
}

