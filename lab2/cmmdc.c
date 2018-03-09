#include <stdio.h>


//metoda scaderilor repetate
int cmmdcScaderiRepetate(int a, int b)
{
	
	//scadem din numarul mai mare pe celalalt pana numerele ajung egale
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a;	
}

//metoda euclid
int cmmdcEuclid(int a, int b)
{
	int rest = 0;
	while (b != 0)
	{
		rest = a % b;
		a = b;
		b = rest;
	}
	return a;
}

int main()
{
	int a, b;
	printf("Introduceti a si b\n");
	scanf("%d %d", &a, &b);
	
	printf("Cmmd este %d\n", cmmdcScaderiRepetate(a, b));	
	return (0);
}
