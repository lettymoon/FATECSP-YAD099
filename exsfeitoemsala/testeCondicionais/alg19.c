#include <stdio.h>

int main(){

    //maior e menor nota para médias de alunos

    float a, b, c = 0;
    scanf("%f %f %f", &a, &b, &c);
    float menor;
    float maior;

    if(a > b){
        maior = a;
        menor = b;
    }else{
        maior = b;
        menor = a;
    }
    if(c > maior){
        maior = c;
    }
    if(c < menor){
        menor = c;
    }

    float media = (maior+menor)/2;
    printf("%.1f\n", media);

    return 0;
}