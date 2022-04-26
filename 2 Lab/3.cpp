//Даны действительные числа a, b, c. Утроить эти числа, если a > b > c и заменить их абсолютными значениями, если это не так

#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c;
	printf("Input a, b, c: ");
	scanf("%f %f %f", &a, &b, &c);
	if (a > b && b > c) 
	{
		a *= 3;
		b *= 3;
		c *= 3;
	}
	else 
	{
		a = fabs(a);
		b = fabs(b);
		c = fabs(c);
	}
	printf("a = %.2f\nb = %.2f\nc = %.2f", a, b, c);
	return 0;
}
