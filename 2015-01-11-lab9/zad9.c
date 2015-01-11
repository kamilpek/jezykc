// zad9.c
#include <stdio.h>

int main(){

// e)

	// instrukcja if
	// if (0) { prawda } else { flase }
	// && - i logiczne
	// || - lub logiczne
	
	int a = 1, b= 2;
	
	if (a++ && b++) { 	// if (1 && 2)
		a = 0;			// a = 0
	}
	else {
		b = 0;
	}
	
	printf("%d %d \n", a, b); 
	
// f)
	if (--a && b++)		// if (0 && 2)	// leniwe operacje logiczne
	{
		a += 10;
	}
	else
	{
		b += 20;		// 0 22
	}

	printf("%d %d ", a, b);
	
	
return 0;
}
