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