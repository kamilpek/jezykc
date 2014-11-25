#include <stdio.h>

double PI = 3.1415926535;
char Przedmiot[15] = "programowanie";
int rok;

int main(){

printf("a) PI= %.10f\n", PI);

printf("b) Lancuch znakow: %s\n", Przedmiot);

rok = -1;
printf("c) Rok: %d\n", rok);

printf("d) Typ int potrzebuje: %d bajtow. \n", sizeof(int));
printf("   Typ short potrzebuje %d bajtow. \n", sizeof(short));
printf("   Typ long potrzebuje %d bajtow. \n", sizeof(long));
printf("   Typ char potrzebuje %d bajtow. \n", sizeof(char)); 

return 0;
}

