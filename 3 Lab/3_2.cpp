//Разложить заданное число на простые множители

#include <iostream>
using namespace std;

int main()
{
	int Number, div = 2;
	cout << "Enter Number" << endl;
	cin >> Number;
	cout << Number << " = 1";

	while (Number > 1)
	{
		while (Number % div == 0)
		{
			cout << " * " << div;
			Number /= div;
		}
		div++;
	}
}
