#include <stdio.h>
#include <math.h>


int main()
{
	int n;

	printf("Introduceti n\n");
	scanf("%d", &n);


	//printam de cate ori numarul se imparte la 2
	while (n % 2 == 0)
	{
		printf("%d ", 2);
		n /= 2;
	}

	//in acest punct n este impar
	int i = 3;
	while (i <= sqrt(n))
	{
		while (n % i == 0)
		{
			printf("%d ", i);
			n /= i;
		}
		i += 2;
	}
	if (n > 2)
		printf("%d", n);
	return (0);
}
