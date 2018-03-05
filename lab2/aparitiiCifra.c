#include <stdio.h>

int main()
{
	int n;
	int cifra;
	int aparitiiCifra = 0;

	printf("Introduceti n:\n");
	scanf("%d", &n);
	printf("Introduceti cifra\n");
	scanf("%d", &cifra);


	int nInitial = n;
	while (n % 10 != 0)
	{
		int cifraCurenta = n % 10;
		if (cifraCurenta == cifra)
			aparitiiCifra++;

		//taiem ultima cifra
		n /= 10;
	}

	printf("Aparitii cifra %d in %d este = %d\n", cifra, nInitial, aparitiiCifra);
	return (0);
}
