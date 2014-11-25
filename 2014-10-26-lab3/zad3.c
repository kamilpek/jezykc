#include <stdio.h>

int main(){

double a = 1.62;
double b = 3.14;
double c = 2.72;

double d=c*((a+b)*(a+b))-(a*a*a)+b-c;
printf("Wartość d = : %.7f\n", d);

return 0;

}
