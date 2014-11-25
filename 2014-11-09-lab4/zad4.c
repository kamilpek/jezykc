#include <stdio.h>

int dlugosc(char napis[]){

	int i;
	while (napis[i] !=0) {
		i++; }
return i;
		
}

int main(){
	
	char napis[20];

	printf("Podaj lancuch znakow (max 20): ");
        scanf("%s", napis);
	
	printf("%d\n", dlugosc(napis));

	

return 0;
}
