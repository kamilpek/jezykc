#include <stdio.h>

int main(){
	int Rok=0;
	printf("Podaj rok urodzenia\n");
	scanf("%d", &Rok);

	if(Rok>2014) {
		printf("O! Przybywasz z przyszlosci!\n");
	}
	else {
		int wiek = 2014 - Rok;
		printf ("Uplynelo %d lat.\n", wiek);
	}
return 0;

}
