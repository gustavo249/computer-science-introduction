#include <stdio.h>

int main()
{
	int n;
	printf("Introduceti n:\n");
	scanf("%d", &n);

	//suma gauss
	int suma = n * (n + 1) / 2;
	printf("Suma pana la n = %d\n", suma);

	return (0);
}
