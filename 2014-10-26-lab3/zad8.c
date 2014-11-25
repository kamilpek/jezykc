#include <stdio.h>

int main(){

int a;

printf("Podaj liczbe w przedziale 1-7: \n");
scanf("%d", &a);

switch(a){

case 1:
printf("Pn\n");
break;

case 2:
printf("Wt\n");
break;

case 3:
printf("Sr\n");
break;

case 4:
printf("Cz\n");
break;

case 5:
printf("Pt\n");
break;

case 6:
printf("Sb\n");
break;

case 7:
printf("Nd\n");
break;

default:
printf("ERROR\n");
break;

}

return 0;

}
