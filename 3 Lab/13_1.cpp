//Даны два числа A и B (A < B). найдите сумму целых чисел от A до B включительно.

#include <iostream>
using namespace std;

int main()
{
	int a, b, sum = 0;
	cout << "Input A and B:\n";
	cin >> a >> b;
	
	if (a < b)
	{
		while (a <= b)
		{
			sum += a;
			a++;
		}
	}

	cout << sum << endl;
}
