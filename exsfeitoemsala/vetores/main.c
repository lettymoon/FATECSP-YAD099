/*1) Criar um código em C para ler 10 números reais para um vetor, calcular a média deles e informar quantos estão acima desta média calculada.*/

#include <stdio.h>

int main(){


    int vetor[10];
    int soma = 0, cont = 0;

    for(int i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
    }

    float media = soma/10.0;
    printf("Média = %.2f\n", media);

    for(int i = 0; i < 10; i++){
        if(vetor[i] > media){
            cont++;
        }
    }

    printf("%d estão acima da média\n", cont);


    return 0;
}

