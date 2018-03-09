#include <stdio.h>

int fibonacci(int n)
{
	int x = 0;
	int y = 1;
	int z = 1;

	int i = 0;
	while(i <= n)
	{
		z = x + y;
		printf("%d ", z);

		x = y;
		y = z;
		i++;
	}
	return x;
}

int main()
{
	int n;
	
	printf("introduceti n\n");
	scanf("%d", &n);
	fibonacci(n);
}
