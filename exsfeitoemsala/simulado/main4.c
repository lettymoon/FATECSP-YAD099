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