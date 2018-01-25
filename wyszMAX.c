#include <stdio.h>


#define ROZMIAR 10 // rozmiar tablicy

// wyœwietlenie tablicy
void pokarz(int* tablica)
{
	int i;
	for(i=0;i<ROZMIAR;i++)
	{
		printf(" %d",tablica[i]);
	}
	printf("\n");
}
void sortowanie(int* tablica)    // funkcja sortuj¹ca tablicê
{
	int max;		// odnaleziona maksymalna wartoœæ
	int max_index;	// indeks maksymalnej wartoœci
	int i,j,tmp;	// zmienne pomocnicze

	for(i=ROZMIAR;i>0;i--)
	{
		max=tablica[0];			// pobieramy pierwszy element z tablicy jako "max"
		max_index=0;			// indeks pierwszego elementu
		for(j=1;j<i;j++)		// pêtla przeszukuj¹ca tablicê w poszukiwaniu
		{						// .. najwiêkszego elementu
			if(tablica[j]>max)
			{
				max=tablica[j];
				max_index=j;
			}
		}
		tmp=tablica[i-1];		// zamiana odnalezionego elementu z ostatnim
		tablica[i-1]=max;		// ... w niniejszej pêtli
		tablica[max_index]=tmp;
	}
}


int main()   // funkcja g³ówna
{
	int tablica[ROZMIAR]={11,8,5,2,31,4,15,5,23,12};
	printf("\n  \n");
	printf("  ************************************************************\n");
	printf("  *|                                                        |*\n"); 
	printf("  *|                      Praca domowa                      |*\n");
	printf("  *|                                                        |*\n");
	printf("  *|                      Wyszukiwanie MAX                  |*\n");
	printf("  ************************************************************\n");
	printf("\n");
	
	printf("Tablica przed posortowaniem: ");pokarz(tablica);
	sortowanie(tablica);
	printf(" Tablica po posortowaniuMAX: ");pokarz(tablica);
	return 0;
}
