#include <stdio.h>

int main(){

	char dnitygodnia[8][15]={"Dnitygodnia", "Poniedzialek", "Wtorek", "Sroda", "Czwartek", "Piatek", "Sobota", "Niedziela"};  // tablica z nazwami tygodnia
	int i;
	
	printf("Podaj liczbe w przedziale 1-7: \n");
	scanf("%d", &i);

	switch(i){
		
		case 1:
		printf("%s\n", dnitygodnia[1]);
		break;
		
		case 2:
		printf("%s\n", dnitygodnia[2]);
		break;

		case 3:
                printf("%s\n", dnitygodnia[3]);
		break;

		case 4:
                printf("%s\n", dnitygodnia[4]);
		break;

		case 5:
                printf("%s\n", dnitygodnia[5]);
		break;

		case 6:
                printf("%s\n", dnitygodnia[6]);
		break;

		case 7:
                printf("%s\n", dnitygodnia[7]);
		break;
		
		default:
		printf("ERROR\n");
		break;
}
			

return 0;
}
