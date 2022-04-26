//Даны катет и гипотенуза, найти второй катет и радиус вписанной окружности

#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
	int a, b, c;
	float r;

	printf("Input a, c: ");
	scanf("%d", &a);
	scanf("%d", &c);
	b = sqrt((c * c) - (a * a));
	r = (a * b) / (a + b + c);
	printf("\nb = %d\nr = %.2f\n", b, r);

	return 0;
}
