#include <stdio.h>

int main()
{
	Cena komputer = 2100.50;
	Cena samochod = 999.99;
	
	Pytanie p1;
	
	if (komputer > samochod)
	{
		p1 = TAK;
	}
	else
	{
		p1 = NIE;
	}
	
	if (p1 == TAK)
	{
		printf("Twoj komputer jest drozszy niz moj samochod!");
	}
	
	return 0;
}