/*
Написать функцию, вычисляющую сумму арифметической прогрессии. В качестве параметров ей передается первый
элемент последовательности, разность и кол-во (a, d, n).
*/

#include <iostream>
using namespace std;

int Sum(int a, int d, int n)
{
	int c = ((2 * a + d * (n - 1)) / 2) * n;
	return c;
}

int main()
{
	int a, d, n;
	cout << "A, D, N = ";
	cin >> a >> d >> n;
	cout << Sum(a, d, n) << endl;
}
