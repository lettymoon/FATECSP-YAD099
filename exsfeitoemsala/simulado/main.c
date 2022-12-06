/*1) Faça um algoritmo em C que calcule o fatorial de um digitado:

	0! = 1
	1! = 1
	2! = 1*2 = 2
	3! = 1*2*3 = 6
	4! = 1*2*3*4 = 24
	5! = 1*2*3*4*5 = 120
	n! = 1*2*3*4*5*6*7*8*9* .....*(n-2)*(n-1)*n*/

#include <stdio.h>

int main (){

    int fat, n = 0;
    scanf("%d", &n);

    for(fat = 1; n > 1; n = n - 1)
    fat = fat * n;

    printf("%d", fat);

return 0;
}