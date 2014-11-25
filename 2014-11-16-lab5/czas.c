#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 
struct timespec {
        time_t   tv_sec;        // sekundy
        long     tv_nsec;       // nanosekundy = 10^-9 sekundy
};
*/

void funkcja_ktora_cos_robi()
{
	printf("Pracuje!");
	int i;
	for(i=0; i<200; i++)
	{
		printf("\b!");
		_sleep(10);
		printf("\b ");
		_sleep(10);
	}
	
	
}

int main()
{
	// Dwie zmienne, ktore- policza czas przed uruchomieniem funkcji
	// oraz po zakonczeniu
	struct timespec t1, t2;
	
	
	// Pobierz aktualny czas procesora do zmiennej t1
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &t1);
	
	// Wykonaj funkcje, dla ktorej chcesz policzyc czas dzialania
	funkcja_ktora_cos_robi();
	
	
	// Pobierz aktualny czas procesora do zmiennej t2
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &t2);
	
	
	// Aby policzyc czas dzialania, nalezy odjac czas t2 od t1
	
	printf("Program dzialal:\n");
	double czas = ((double)t2.tv_sec + t2.tv_nsec) - ((double)t1.tv_sec + t1.tv_nsec);
	printf("Liczba sekund = %lf \n", czas);

	
	
	
	return 0;
}
