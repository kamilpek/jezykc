#include <stdio.h>

void Szescian(){

int a;
int i;

for(i=1; i<=10; i++){
a=i*i*i;
printf("Szescian %d: ", i);
printf("%d\n", a);
}
}

int main(){

Szescian();

return 0;

}

