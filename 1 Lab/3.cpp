//Дан прямоугольный треугольник с катетами a и b. Найти гипотенузу c.

#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	printf("Input a, b: ");
	scanf("%d %d", &a, &b);
	c = sqrt((a * a) + (b * b));
	printf("%d", c);
	return 0;
}
