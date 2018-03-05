#include <stdio.h>

int main()
{
	int n;
	int sumaCifre = 0;

	printf("Introduceti n:\n");
	scanf("%d", &n);

	while (n % 10 != 0)
	{
		//adunam ultima cifra a lui n
		sumaCifre += n % 10;

		//taiem ultima cifra
		n /= 10;
	}

	printf("Suma cifre = %d\n", sumaCifre);
	return (0);
}
