//Написать программу нахождения суммы большего и меньшего из трех чисел

#include <stdio.h>

int main() 
{
	int a, b, c, max, min, s;
	printf("Input a, b, c: ");
	scanf("%d %d %d", &a, &b, &c);
	if (a >= b) 
	{
		max = a;
		min = b;
	}
	else 
	{
		max = b;
		min = a;
	}
	if (c > max) 
	{
		max = c;
	}
	if (c < min)
	{
		min = c;
	}
	s = max + min;
	printf("%d + %d = %d", max, min,s);
	return 0;
}
