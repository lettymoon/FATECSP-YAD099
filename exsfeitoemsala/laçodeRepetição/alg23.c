#include <stdio.h>

int main(){

    int i = 0;
    int n = 0;
    scanf("%d", &n);

    while(i<=9){
        i++;
        printf("%d\n", n*i);
    }

    return 0;
}