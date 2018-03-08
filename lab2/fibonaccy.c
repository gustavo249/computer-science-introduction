#include <stdio.h>

//aceasta este o functie ajutatoare care ne returneaza al n-lea numar din sirul lui fibonacci
//sirul lui fibonacci consta in suma elementului precedent cu pre-precendetul: ex: 0 1 1 2 3 5 8 13... got it? :)
int fibo(int n)
{
	//conditiile de oprire
	if (n == 0)
	{
		return 0;
	}
	if (n == 1 || n == 2)
	{
		return 1;
	}

	//functie recursiva - se apeleaza pe ea insasi pana intalneste conditia de oprire
	return fibo(n - 1) + fibo(n - 2);
}

int main()
{
	int n;
	printf("Introduceti n\n");
	scanf("%d", &n);

	int i = 0;
	//pt fiecare numar pana la n printam elementul corespunzator din sirul lui banditul de fibbonaci
	while (i < n)
	{
		printf("%d ", fibo(i));
		i++;
	}
	return (0);
}
