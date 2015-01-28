#include <stdio.h>

int main(){

	int ola;
	int *zen;
	
	ola = 180;
	zen = &ola;
	
	printf("Wzrost Oli: %d\n", ola);
	printf("Wzrost Oli wg Zena: %d\n", *zen);
	printf("Adres Oli: %p\n", &ola);
	printf("Adres Oli wg zena: %p\n", zen);
	
	return 0;
}

