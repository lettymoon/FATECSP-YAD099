#include <stdio.h>
#include <math.h>

int main() {

    float a = 0;
    float b = 0;
    float c = 0;

    scanf("%f %f %f", &a, &b, &c);

    float delta = pow(b,2) - 4*a*c;

    if (delta < 0){
        printf("Não há raízes reais.");
    }else{
        if(delta > 0){
            float raizdelta = sqrt(delta);
            float x1 = (-b + raizdelta) / 2*a;
            float x2 = (-b - raizdelta) / 2*a;

            printf("%f", x1);
            printf("%f", x2);
        }else{
            float x = (-b) / (2*a);
            printf("%f", x);
        }           
    }

    return 0;
}