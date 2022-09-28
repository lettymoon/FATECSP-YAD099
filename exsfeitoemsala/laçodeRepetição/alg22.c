#include <stdio.h>
#include <math.h>

int main (){

    int n = 0;
    int i = 0;

    while(n <=19){
        n = n + 1;
        i = pow(n,2);
        printf("%.2d\n", i);
    }

    return 0;
}