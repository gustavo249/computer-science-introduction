#include <stdio.h>
#include <math.h> //librarie care ne ajuta sa facem calcule cu radical

int main()
{
	//lucram cu tipul de data double care permite numere reale nu doar intregi
	double a, b, c;
	printf("Introduceti a:\n");
	scanf("%lf", &a);
	printf("Introduceti b:\n");
	scanf("%lf", &b);
	printf("Introduceti c:\n");
	scanf("%lf", &c);

	double medieAritmetica = (a + b + c) / 3;
	printf("Media artimetica = %.2f\n", medieAritmetica);

	double medieGeometrica = sqrt(a * b * c);
	printf("Medie geometrica = %.2f\n", medieGeometrica);

	double medieArmonica = 3 / (1 / a + 1 / b + 1 / c);
	printf("Medie armonica = %.2f\n", medieArmonica);

	return (0);
}
