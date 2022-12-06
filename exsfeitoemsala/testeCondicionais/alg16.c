#include <stdio.h>
#include <math.h>

int main() {

float a, b, c;
scanf("%f %f %f", &a, &b, &c);

float delta = pow(b,2) - (4*a*c);
if (delta < 0)
  printf("Não há raízes reais.");
else{
if(delta > 0){
  float raizdelta = sqrt(delta);
  float x1 = (-b + raizdelta) / (2*a);
  float x2 = (-b - raizdelta) / (2*a);
  printf("x1 = %.2f\n", x1);
  printf("x2 = %.2f\n", x2);
}else{
  float x = (-b) / (2*a);
  printf("x = %.2f\n", x);
  }  
}

return 0;
}