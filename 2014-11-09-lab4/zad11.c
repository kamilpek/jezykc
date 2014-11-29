// Napisz program, ktory pyta uzytkownika o napis, a nastepnie sprawdza,
// czy w tym napisie wystepuje napis "gra". Sprawdz swoj program np.
// dla "gorna granica programowania".

#include <stdio.h>

int dlugosc(char napis[]){

        int n;
        while (napis[n] !=0) {
                n++; }
return n;

}

int main(){

	char c;
	char wzor[]="gra";
	char napis[50];
	int i = 0;
	int licznik = 0;

	printf("Podaj napis (max 50 znakow).\n");
	scanf("%s", napis);

	for(i-0; i<(dlugosc(napis)-2); i++){
		if(napis[i] == wzor[0] && napis[i+1] == wzor[1] && napis[i+2] == wzor[2]) {
			licznik=licznik+1; } }

	if(licznik == 1){
		printf("Slowo gra wystepuje. \n"); }
	else {
		printf("Slowo gra nie wystepuje ani razu. \n"); }

	// printf("Napis= %s\n", napis);
	printf("Licznik: %d\n", licznik);
	
return 0;
}
