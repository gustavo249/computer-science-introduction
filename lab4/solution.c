#include <stdio.h>

//pt a genera secventa 1 2 2 3 3 3 4 4 4 4 5 5 5 5 5 avem nevoie de doua loop-uri
//primul merge pana la n
//pt fiecare i afisam valoare respectiva de i ori -> al doilea for
void afisareSecventa1(int n)
{
	int i;
	for (i = 1; i <= n; i++)
	{
		int j;
		for (j = 1; j <= i; j++)
			printf("%d ", i);	
	}
}

//pt a genera secventa 1 1 2 1 2 3 1 2 3 4 1 2 3 4 5 procedam asemanator ca si la secventa anterioara
//diferenta este ca nu mai afisam acelasi i, ci vom afisa valoarea care se incrementeaza pana la i adica j
//pt fiecare i afisam sirul de numere de la 1 la i
void afisareSecventa2(int n)
{
	int i;
	for (i = 1; i <= n; i++)
	{
		int j;
		for (j = 1; j <= i; j++)
			printf("%d ", j);
	}
}

int main()
{
	int n;

	printf("Introduceti n\n");
	scanf("%d", &n);

	afisareSecventa1(n);
	printf("\n");
	afisareSecventa2(n);
	return (0);
}
