#include <stdio.h>

//Operator trojargumentowy zastepuje ifa
//(WARUNEK)?JESLI_PRAWDA:JESLIE_NIE_PRAWDZIWY;

#define MAX(x,y)	(x>y)?x:y

#define MNOZ(x,y)	x*y

int main(){

	int a,b;

	scanf("%d", &a);
	scanf("%d", &b);
	printf("Wieksza liczba to %d\n", MAX(a,b));
	printf("Iloczyn tych liczb to %d\n", MNOZ(a,b));
	printf("Iloczyn tych liczb (w ktorej a jest powiekszona o 1) to %d\n", MNOZ((a+1),b));

	return 0;
}
