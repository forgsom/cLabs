#include <iostream>
#include <ctime>
#include <fstream>
#include <cstdlib>
#include <string>
#include "solution.h"
using namespace std;

struct Spisok
{
	string first_name;
	string second_name;
	int weight;
	int height;
	int group;
};


void ex_third()
{
	system("cls");
	int i = 0, lenght = 0, a, flag;
	float tmp, weightAverage = 0, heightAverage = 0;
	string string;
	ofstream file3("ex 3.txt");

	cout << "\nlenght is ";
	cin >> lenght;
	tmp = lenght;
	Spisok* child = new Spisok[lenght];
	Spisok tmp_sort;

	for (i; i < lenght; i++)
	{
		cout << "first name ";
		cin >> child[i].first_name;
		cout << "second name ";
		cin >> child[i].second_name;
		cout << "weight ";
		cin >> child[i].weight;
		cout << "height ";
		cin >> child[i].height;
		cout << "group ";
		cin >> child[i].group;
	}


	for (i = 0; i < lenght; i++)
	{
		weightAverage += child[i].weight;
		heightAverage += child[i].height;
	}

	weightAverage = weightAverage / tmp;
	heightAverage = heightAverage / tmp;


	//sort
	for (int i = 0; i < lenght - 1; i++)
	{
		for (int j = 0; j < lenght - i - 1; j++)
		{
			if (child[j].height > child[j + 1].height)
			{
				tmp_sort = child[j];
				child[j] = child[j + 1];
				child[j + 1] = tmp_sort;
			}
		}
	}
	cout << "\nWeight Average: " << weightAverage << endl;
	cout << "Height Average: " << heightAverage << endl;
	system("pause");


	//menu
	do
	{
		system("cls");
		cout << "Enter:" << endl;
		cout << "1 and Enter to display the sorted struct" << endl;
		cout << "2 and Enter to display the row with defined group" << endl;
		cout << "3 and Enter to write to a file" << endl;
		cout << "4 and Enter to read from file" << endl;
		cout << "0 and Enter to exit the program" << endl;
		cout << "> ";
		cin >> a;
		cout << endl;
		switch (a)
		{
		case 1:
			for (i = 0; i < lenght; i++)
			{
				cout << child[i].first_name << "   " << child[i].second_name << "   " << child[i].weight << "   " << child[i].height << "   " << child[i].group << endl;
			}
			break;
		case 2:
			cout << "Enter group" << endl;
			cin >> flag;
			for (i = 0; i < lenght; i++)
			{
				if (child[i].group == flag)
				{
					cout << child[i].first_name << "   " << child[i].second_name << "   " << child[i].weight << "   " << child[i].height << "   " << child[i].group << endl;

				}
			}
			break;
		case 3:
			for (i = 0; i < lenght; i++)
			{
				file3 << child[i].first_name << "   " << child[i].second_name << "   " << child[i].weight << "   " << child[i].height << "   " << child[i].group << endl;
			}
			file3.close();
			break;
		case 4:
			file3.close();
			ifstream file3("ex 3.txt");
			while (getline(file3, string))
			{
				cout << string << " ";
				cout << endl;
			}
			file3.close();
			break;
		}
		cout << endl;
		system("pause");
	} while (a != 0);

	cout << endl;
	delete[] child;
}
