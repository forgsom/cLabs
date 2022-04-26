//Дан массив. Удалить из него нули и после каждого числа, оканчивающего на 5, вставить 1.

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int j, i, n = 10;
	int arr[100] = {};

	//generate random array
	srand(time(NULL));
	for (i = 0; i < n; i++)
	{
		cout << (arr[i] = rand() % 10) << " ";
	}

	for (i = 0; i < n; i++)
	{
		if (arr[i] == 0)
		{
			for (j = i; j < n; j++)
			{
				arr[j] = arr[j + 1];
			}
			i--;
			n--;
		}
		else if (arr[i] % 10 == 5)
		{
			n++;
			for (j = n; j > i + 1; j--)
			{
				arr[j] = arr[j - 1];
			}
			arr[j] = 1;
			i++;
		}
	}

	cout << endl << "Result" << endl;

	for (i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}
