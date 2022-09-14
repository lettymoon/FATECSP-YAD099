#include <stdio.h>
#include <math.h>

int main()
{

    float p = 0;
    float a = 0;
    scanf("%f %f", &p, &a);

    float imc = p / pow(a, 2);

    if (imc < 18.55)
    {
        printf("Magreza.");
    }
    else if (imc < 25)
    {
        printf("Normal.");
    }
    else if (imc < 30)
    {
        printf("Sobrepeso.");
    }
    else if (imc < 40)
    {
        printf("Obesidade.");
    }
    else
    {
        printf("Obesidade grave.");
    }

    return 0;
}