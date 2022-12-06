/*2) Crie um algoritmo em C que peça o valor do salário bruto e que calcule os descontos devidos, juntamente com o salário líquido, de acordo com as regras:
	a) todos têm desconto de 8% do sal. bruto, referente ao INSS;
	b) salários brutos acima de 7000,00 pagam 22% de imposto de renda; entre 4000,00 e 7000,00 pagam 15%; entre 2000,00 e 3999,99 pagam 7%; abaixo de 2000,00 estão isentos.

Casos de teste:
-Alguém que ganhe 1500,00 brutos:
	INSS = 0.08*1500 = 120
	Sal. Líq = 1500 - 120  = 1380
-Alguém que ganhe 3000,00 brutos:
	INSS = 0.08*3000 = 240
	IR = 0.07*3000 = 210
	Sal. Líq = 3000 - 240 - 210  = 2550
-Alguém que ganhe 10000,00 brutos:
	INSS = 0.08*10000 = 800
	IR = 0.22*10000 = 2200
	Sal. Líq = 10000 - 800 - 2200  = 7000*/

#include <stdio.h>

int main (){

    float sl, sb = 0;
    scanf("%f", &sb);

    sl = sb - (0.08 * sb);

    if(sb >= 7000){
        sl = sl - (0.22 * sb);
        printf("%.2f", sl);
    }else if(sb >= 4000){
        sl = sl - (0.15 * sb);
        printf("%.2f", sl);
    }else if(sb >= 2000){
        sl = sl - (0.07 * sb);
        printf("%.2f", sl);
    }else{
        printf("%.2f", sl);
    }

    return 0;
}