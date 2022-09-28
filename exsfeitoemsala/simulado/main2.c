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