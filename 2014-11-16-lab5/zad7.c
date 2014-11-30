#include <stdio.h>
#include <string.h>

struct Pracownik {
	char nazwisko[20];
	float pensja;
	int rok_urodzenia;
};

struct Pracownik NowyPracownik(char nazwisko[20], float pensja, int rok_urodzenia){
	struct Pracownik nowy;
	strcpy(nowy.nazwisko, nazwisko);
	nowy.pensja = pensja;
	nowy.rok_urodzenia = rok_urodzenia;

	return nowy; }


struct Pracownik Wypisz(struct Pracownik prac){
	printf("%s urodził/a się w roku %d i zarabia %f.\n)", prac.nazwisko, prac.rok_urodzenia, prac.pensja); 

	return prac; }

struct Pracownik Podwyzka(struct Pracownik pracownik, float ile){
	pracownik.pensja += ile; }

int main(){

	struct Pracownik tab[4];
	int i;

	tab[0] = NowyPracownik("Capek", 1234.56, 1890);
	tab[1] = NowyPracownik("Lem", 6543.12, 1921);
	tab[2] = NowyPracownik("Hlasko", 2222.22, 1934);
	tab[3] = NowyPracownik("Stasium", 9876.54, 1960);

	for(i=0; i < 4; i++) {
		Podwyzka(tab[i], 100); } 
	
	for(i=0; i < 4; i++) {
		Wypisz(tab[i]); }
return 0;
}
