#include <stdio.h>

struct Kolo {
	int x;
	int y;
	float r; } ;

void Zwieksz(struct Kolo * wsk){
	wsk->x+=1;
	wsk->y+=1;
	wsk->r+=1;
} 

int main(){
	
	struct Kolo kol = { 1, 2, 3.0 };
	struct Kolo *wsk;
	wsk = &kol; 
	
	Zwieksz(wsk);
	printf("Skladowe po zwiekszeniu %d %d %f \n", kol.x, kol.y, kol.r);
	
	return 0; 
}
