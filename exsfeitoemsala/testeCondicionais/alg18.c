#include <stdio.h>

int main (){

    float a, b, c = 0;
    scanf("%f %f %f", &a, &b, &c);

    if(a==b && b==c){
        printf("Plano.");
    }else if(a<b && b<c){
        printf("Está subindo.");
    }else if(a>b && b>c){
        printf("Está descendo.");
    }else{
        printf("N.d.a");
    }

    return 0;
}