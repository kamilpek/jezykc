#include <stdio.h>

int main(){

// a)
	int a1=5, b1=1;
	printf("a)\t %d", a1++);
	printf("%d\n", ++b1);
	
// b)
	int a2=5, b2=1;
	int c2 = a2++ + ++b2;
	printf("b)\t %d %d %d\n", a2, b2, c2);
	
// c)
	//int e, f, g;
	//e = f = g++;
	//printf("%d %d %d", e, f, g);
	
// d)
	int a4=1, b4=2, c4=3;
	a4 = b4 += c4;
	printf("d)\t %d %d %d\n", a4, b4, c4);

// e)
	int a5=1, b5=2;
	if (a5++ && b5++){
		a5=0; }
	else {
		b5=0; }
	printf("e)\t %d %d \n", a5, b5);
	
// f)
	int a6=1, b6=2;
	if (--a6 && b6++){
		a6+=10; }
	else {
		b6+=20; }
	printf("f)\t %d %d\n", a6, b6);

// g)
	int a7=1, b7=2;
	if (a7 || b7++ == 3){
		a7 -= 1; }
	else {
		b7 -= 10; }
	printf("g)\t %d %d\n", a7, b7);
		
// h)
	int a8=1, b8=2;
	if (a8==1)
		if (b8==2)
			a8 = 9;
	else
		b8 = 1;
	printf("h)\t %d %d\n", a8, b8);

return 0;
}
