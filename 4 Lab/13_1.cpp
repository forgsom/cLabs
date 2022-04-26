/*
Задан массив действительных чисел.Определить, сколько раз меняется знак в данной последовательности чисел, 
напечатать номера позиций, в которых происходит смена знака
*/

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	const int SIZE = 10;
	int arr[SIZE] = {};
	int k = 0, flag = 0;

	//generate random array
	cout << "Original array" << endl;
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++)
	{
		cout << (arr[i] = rand() % 23 - 10) << " ";
	}

	//FLAG
	if (arr[0] > 0)
	{
		flag = 1;
	}
	else flag = 0;


	cout << endl << "Index" << endl;

	//comparison arr[i] and arr[i-1]
	for (int i = 1; i < SIZE; i++)
	{
		if ((arr[i] > 0) && (flag == 0))
		{
			cout << i << " ";
			k++;
			flag = 1;
		}
		else if ((arr[i] < 0) && (flag == 1))
		{
			cout << i << " ";
			k++;
			flag = 0;
		}
	}
	cout << endl << "Count" << endl << "K = " << k << endl;
}
