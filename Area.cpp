#include <stdio.h>
#include <math.h>

int main()
{
	//Area de un circulo

	float radio, pi, area;
	pi = 3.1416;

	printf("Radio:");
	scanf_s("%f", &radio);

	area = pi * (radio*radio);
	printf("El area del circulo es:%f", area);
}