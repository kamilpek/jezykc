#include <stdio.h>
#include <string.h>

struct Data {
	short Dzien;
	short Miesiac;
	short Rok; } ;

struct Pracownik {
	char nazwisko[20];
	float pensja;
	struct Data DataUrodzenia; };
	
struct Data NowaData(short dzien, short miesiac, short rok){
	struct Data nowa;
	nowa.Dzien = dzien;
	nowa.Miesiac = miesiac;
	nowa.Rok = rok;
	return nowa; } 

struct Data WypiszData(struct Pracownik *DataUrodzenia){
	printf("Dzien %d, Miesiac %d, Rok %d\n", pracownik->DataUrodzenia.dzien, pracownik->DataUrodzenia.miesiac, pracownik->DataUrodzenia.rok); }

struct Pracownik NowyPracownik(char nazwisko[], float pensja, struct Data DataUrodzenia){
	struct Pracownik nowy;
	strcpy(nowy.nazwisko, nazwisko);
	nowy.pensja = pensja;
	
	return nowy; }


struct Pracownik Wypisz(struct Pracownik *prac){
	printf("%s urodził/a się w roku %d i zarabia %f.\n)", *prac->nazwisko, prac.rok_urodzenia, prac.pensja); 

	return prac; }

struct Pracownik Podwyzka(struct Pracownik * prac, float ile){
	*(prac->pensja) += ile; }

void ZmienNazwisko(struct Pracownik *prac, char nowe_nazwisko[]){
	struct Pracownik prac;
	*prac->nazwisko = nowe_nazwisko[]; }

int main(){

	// Tworzymy obiekt poracownik
	struct Pracownik prac;
	int i;
	struct Data data_ur;
	data_ur.Dzien = 1;
	data_ur.Miesiac = 2;
	data_ur.Rok = 1994;
	
	// Uzupelniamy jego skladowe 
	strcpy(prac.nazwisko, "Kowalski")'
	prac.pensja = 1200;
	prac.DataUrodzenia = data_ur;

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
