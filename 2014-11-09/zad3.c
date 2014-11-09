#include <stdio.h>

int main(){
	
	char napis[20];

	printf("Podaj lancuch znakow (max 20): ");
	scanf("%s", napis);

	int i=0;
	while (napis[i] !=0) {
		i++; }
	
	printf("Dlugosc napisu to: %d\n", i);	

return 0;
}
