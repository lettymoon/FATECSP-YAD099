#include <stdio.h>
int main()
{

    int n = 0;
    scanf("%d", &n);

    if (n % 400 == 0)
    {
        printf("É bissexto.");
    }
    else
    {
        if (n % 4 == 0 && n % 100 != 0)
        {
            printf("É bissexto.");
        }
        else
        {
            printf("Não é bissexto.");
        }
    }

    return 0;
}