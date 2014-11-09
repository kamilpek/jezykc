#include <stdio.h>

int przestepne();

int main(){

	przestepne(2014,2025);
	
return 0;
}

int przestepne (int rok_od, int rok_do){
	int rok, punkt;
	
	if (rok_do < rok_od) {
		printf("Wybrano zly przedzial");
		return; }
	else {	
		punkt = 1;
	for (rok = rok_od; rok <= rok_do; rok++){
		if (rok % 4 == 0)
			printf("%d. Rok %d jest przestepny\n", punkt, rok);
			punkt++; }
	}
}
	
