#include <stdio.h>

int main(){

float a;
float b;
float c;

printf("Podaj a: \n");
scanf("%f", &a);

printf("Podaj b: \n");
scanf("%f", &b);

printf("Podaj c: \n");
scanf("%f", &c);

float d=c*((a+b)*(a+b))-(a*a*a)+b-c;
printf("Wartość d = : %.7f\n", d);

return 0;

}

