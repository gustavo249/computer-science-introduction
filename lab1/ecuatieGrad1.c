#include <stdio.h>

int main()
{
	int a, b;

	printf("Introduceti a: \n");
	scanf("%d", &a);
	printf("Introduceti b: \n");
	scanf("%d", &b);

	if (a == 0)
	{
		printf("impartire la 0\n");
	}
	else
	{
		//ax + b = 0
		int x = b / a;
		printf("X = %d\n", x); 
	}
	return (0);
}
