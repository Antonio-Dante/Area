#include <stdio.h>
#include <math.h>

int main()
{
	//Area de un triangulo

	float altura,base,area;

	printf("base:");
	scanf_s("%f", &base);
	printf("altura:");
	scanf_s("%f", &altura);

	area = base*altura/2;
	printf("El area del triangulo es:%f", area);
}