// Author: Yuya Aoki
// use Fermat's little theorem
#include<stdio.h>
#include<math.h>
/*
unsigned long long int pow(int a, int p){
	static unsigned long long int tmp;
	tmp = 1;
	for(int i; i >= p; i++){
		tmp = tmp * a;
	}
	return tmp;

}
*/

void Modular_exponentiation(int a, int p){
	static unsigned long long int ans, tmp;
	ans = powl(a, p - 1);
	tmp = ans%p;
	if(tmp == 1) printf("%d\n", p);
}

int main(int argc, char *argv[]){
	int ans = 1;
	int num1, num2;
	printf("2\n");
	for(;ans < 16667 ; ans ++){
		num1 = 6 * ans - 1;
		num2 = 6 * ans + 1;
		Modular_exponentiation(2,num1);
		Modular_exponentiation(2, num2);
	}
	return 0;
}

