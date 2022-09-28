#include <stdio.h>

int main(){

    int n = 0;
    int i, divs;
    scanf("%d", &n);
    divs =0;
    for(i = 1; i <= n; i = i + 1)   {
        if(n % i == 0 && n % n == 0){
            divs = divs + 1;
        }
    }
    if(divs == 2)   {
        printf("primo");
    }   else    {
        printf("não é primo");
    }



    return 0;
}