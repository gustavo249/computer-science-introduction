#include <stdio.h>

int main()
{
	int a, b;
	printf("Introduceti a si b\n");
	scanf("%d %d", &a, &b);

	int rest = 0;
	while (b != 0)
	{
		rest = a % b;
		a = b;
		b = rest;
	}
	printf("Cmmd este %d\n", a);	
	return (0);
}
