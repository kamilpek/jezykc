#include <stdio.h>

// --------------------------------------------------------------------
// SILNIA 20!
// 0! = 1;
// n! = n * (n-1)!	n>0

long int silnia(int n){
	if (n == 0)	return 1;
	else return n * silnia(n-1);
}
// --------------------------------------------------------------------


int main(){
	
	printf("Silnia 20 to %ld \n", silnia(20));
	
return 0;
}
