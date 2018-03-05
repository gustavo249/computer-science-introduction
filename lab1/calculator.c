#include <stdio.h>

int main()
{
	int a, b;
	printf("Introduceti primul nr:\n");
	scanf("%d", &a);
	printf("Introduceti al doilea nr:\n");
	scanf("%d", &b);
	
	printf("Suma = %d\n", a + b);
	printf("Diferenta = %d\n", a - b);
	printf("Produsul = %d\n", a * b);
	if (b != 0)
	{
		printf ("Catul = %d\n", a / b);
	} else 
	{
		printf("Impartire la 0\n");
	}
	printf("Restul = %d\n", a % b);

	return (0);	
}
