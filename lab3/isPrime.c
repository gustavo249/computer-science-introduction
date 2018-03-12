#include <stdio.h>

int isPrime(int n)
{
	if (n > 0 && n <= 3)
		return (1);
	else if (n % 2 == 0) //numerele pare nu sunt prime
		return (0);
	int i = 3;

	while (i <= n / 2)
	{
		if (n % i == 0) //daca am gasit un divizor numarul nu e prim
			return (0);
		i += 2; //mergem din 2 in 2 pe numere impare
	}
	return (1); //nu am gasit divizor comun pana la jumatatea numarului, deci e prim
}

int main()
{
	int n;

	printf("Introduceti n:\n");
	scanf("%d", &n);

	if (isPrime(n) == 1)
	{
		printf("Numarul %d este prim", n);
	} else 
	{
		printf("Numarul %d nu e prim", n);
	}
	return (0);
}
