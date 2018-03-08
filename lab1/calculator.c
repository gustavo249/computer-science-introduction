#include <stdio.h>

int main()
{
	//declaram doua variable fara valori momentan
	int a, b;
	printf("Introduceti primul nr:\n");
	scanf("%d", &a); //se atribuie valoare introdusa de utilizator in variabila a
	printf("Introduceti al doilea nr:\n");
	scanf("%d", &b); //same shit with b
	
	//se printeaza calculele efectuate, %d va fi un inlocuitor pt valoarea rezultata
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
