#include <stdio.h>
#include <math.h>

int main (){

float a = 0;
float b = 0;
float c = 0;

scanf("%f %f %f", &a, &b, &c);

if(a < b+c && b < a+c && c < a+b){
    printf("É triangulo.\n");
    if(pow(a,2) == pow(b,2) + pow(c,2) || pow(b,2) == pow(a,2) + pow(c,2) || pow(c,2) == pow(a,2) + pow(b,2)){
        printf("É triangulo retangulo.\n");
    }else{
        printf("Não é triangulo retangulo.\n");
    }
    if(a == b && b == c ){
        printf("É triangulo equilátero.\n");
    }else if( a != b && a != c && b != c ){
        printf("É triangulo escaleno.\n");
    }else{
        printf("É triangulo isósceles.\n");
    }
    }
else{
    printf("Não é triangulo.\n");
}

    return 0;
    }