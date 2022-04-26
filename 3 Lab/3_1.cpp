//Найдите сумму квадратов четных чисел в интервале m-n (2-4-6-8) (4+16+36+64)

#include <iostream>
using namespace std;

int main()
{
	int m, n, sum = 0;
	cout << "Input M and N" << endl;
	cin >> m >> n;

	while (m < n)
	{
		if (m % 2 == 0)
		{
			sum += m * m;
		}
		m++;
	}

	cout << sum << endl;
}
