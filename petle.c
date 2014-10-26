#include <stdio.h>
#include <stdlib.h>

int main(){

int i;

// Wyswietlanie 50 kolejnych liczb calkowityc parzystych
for (i=50; i>=1; i--) {
if (i%2 == 0) {
printf("i = %d\n", i); }
}

// Suma pierwyszch 50 liczb naturalnych
int suma = 0;
for (i=1; i<=50; i++){
suma = suma + i;
}

printf("Suma wynosi: %d\n", suma);

// Petla while
int j = 1;
while (j<=20){		// petla wykonywana dopoki warunke jes prawdziwy
j=j+1;
printf("j = %d\n", j); }

return 0;

}
