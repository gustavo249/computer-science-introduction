#include <stdio.h>

//un numar este palindrom daca citit invers este acelasi numar
//functie care inverseaza un numar
int invert(int n)
{
	int invers = 0;	
	while (n != 0)
	{
		invers = invers * 10 + n % 10; //inmultim inversul curent cu 10 si adaugam ultima cifra a numarului
		n /= 10; //scapam de o cifra
	}
	return invers;
}


int main()
{
	int n;
	printf("Insert n\n");
	scanf("%d", &n);

	int nInversat = invert(n);
	if (nInversat == n)
		printf("N %d este palindrom\n", n);
	else
		printf("N nu este palindrom\n");

	return (0);
}
