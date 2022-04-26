//Если первое число больше второго, то уменьшить первое в 5 раз

#include <stdio.h>
#include <math.h>

int main()
{
	float a, b;
	printf("Input a, b: ");
	scanf("%f %f", &a, &b);
	if (fabs(a) > fabs(b))
	{
		a /= 5;
	}
	printf("a = %.2f\nb = %.2f", a, b);
	return 0;
}
