#include <iostream>
#include <ctime>
#include <fstream>
#include <cstdlib>
#include "solution.h"
using namespace std;


void ex_first()
{
	system("cls");
	int n, firstBorder, secondBorder, index = 0, tmp;
	srand(time(NULL));


	//generate random array
	cout << "Enter the length of the array" << endl;
	cin >> n;
	int* arr = new int[n];
	int* result = new int[n];
	ofstream file("ex 1.txt");

	cout << "Enter the border of array:" << endl;
	cout << "First: ";
	cin >> firstBorder;
	cout << "Second: ";
	cin >> secondBorder;
	cout << endl;

	cout << "Original array" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << (arr[i] = rand() % (secondBorder - firstBorder + 1) + firstBorder) << " ";
	}


	//remove value from original array
	cout << "\n\nEnter the border to remove\n";
	cout << "First: ";
	cin >> firstBorder;
	cout << "Second: ";
	cin >> secondBorder;
	cout << endl;
	
	for (int i = 0; i < n; i++)
	{
		if ((arr[i] < firstBorder) || (arr[i] > secondBorder))
		{
			if ((arr[i] < 0) && (arr[i] % 5 != 0) || (arr[i] > 0))
			{
				result[index] = arr[i];
				index++;
			}
		}
	}


	//sort
	for (int i = 0; i < index - 1; i++)
	{
		for (int j = 0; j < index - i - 1; j++)
		{
			if (result[j] > result[j + 1])
			{
				tmp = result[j];
				result[j] = result[j + 1];
				result[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < index; i++)
	{
		file << result[i] << " ";
		cout << result[i] << " ";
	}

	cout << endl;
	file.close();
	delete[] arr;
	delete[] result;
}
