/*4) Faça um algoritmo em C que descubra se um número é ou não é PRIMO. Um número primo é definido como tendo exatamente 2 divisores; assim, 
use o exercício anterior para lhe ajudar!!

Teste:
-100: Não é primo
-49: Não é primo
-121: Não é primo
-45: Não é primo
-400: Não é primo
-7: É primo
-11: É primo
-13: É primo
-1: Não é primo (só tem 1 divisor, e não 2!!!)*/

#include <stdio.h>

int main(){

    int n = 0;
    int i = 0;
    scanf("%d", &n);

    i = 2;

    while(i < n){
        if(n % i == 0){
            printf("não é primo");
            break;
        }
        i++;
    }
    if (i >= n )
        printf("é primo");

    return 0;
}