#include <stdio.h>

int main(){

enum PORAROKU {PORA, WIOSNA, LATO, JESIEN, ZIMA};

int a;
 
	enum PORAROKU poraroku;

	printf("Prosze podac numer miesiaca: \n");
	scanf("%d", &a);

switch (a){

	case 3: case 4: case 5:
	poraroku = WIOSNA;
	// printf("Pora roku: %d\n", a);
	break;

	case 6: case 7: case 8:
	poraroku = LATO;
	break;

	case 9: case 10: case 11:
	poraroku = JESIEN;
	break;

	case 12: case 1: case 2:
	poraroku = ZIMA;
	break;
	
	default:
	printf("ERROR ;)\n");
	break;
}
	if (poraroku == ZIMA)
		printf("Zima, zima, zima. \n");

	// printf("A = %d\n", a);	
	
return 0;
}
