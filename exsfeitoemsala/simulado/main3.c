/*
3) Faça um algoritmo em C que leia um número inteiro e mostre todos os seus divisores. 

Teste:
-10: 1, 2, 5, 10
-100: 1, 2, 4, 5, 10, 20, 50, 100
-49: 1, 7, 49
-121: 1, 11, 121
-45: 1, 3, 5, 15, 45
-400: 1, 2, 4, 5, 8, 10, 20, 40, 50, 100, 200, 400
-7: 1, 7
-11: 1, 11
-13: 1, 13
-1: 1
*/

#include <stdio.h>

int main (){

    int i = 0;
    int n = 0;
    scanf("%d", &n);

    i = 1;

    while(i<=n){
        if(n % i == 0){
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}