/*
Создать массив, элементами которого являются структуры – список учеников класса (хранятся фамилия, оценки по 3
предметам). Вывести средний балл учеников класса по предмету, введенному пользователем. Вывести учеников,
имеющих средний балл выше среднего в классе
*/

#include <iostream>
#include <string>
#include<iomanip>
using namespace std;


struct Spisok
{
	string second_name;
	float math;
	float ph;
	float ch;
};

int main()
{
	int i = 0, lenght;
	float tmp;
	string flag;
	float mathAverage = 0, phAverage = 0, chAverage = 0;

	cout << "lenght is ";
	cin >> lenght;
	tmp = lenght;
	Spisok* student = new Spisok[lenght];

	for (i; i < lenght; i++)
	{
		cout << "second name ";
		cin >> student[i].second_name;
		cout << "math ";
		cin >> student[i].math;
		cout << "ph ";
		cin >> student[i].ph;
		cout << "ch ";
		cin >> student[i].ch;
	}


	cout << "Students:" << endl;
	for (i = 0; i < lenght; i++)
	{
		cout << student[i].second_name << setw(5) << student[i].math << setw(5) << student[i].ph << setw(5) << student[i].ch << endl;
		mathAverage += student[i].math;
		phAverage += student[i].ph;
		chAverage += student[i].ch;
	}
	i = 0;
	mathAverage = mathAverage / tmp;
	phAverage = phAverage / tmp;
	chAverage = chAverage / tmp;

	cout << "\n" << "What classes " << endl;
	cin >> flag;

	cout << "\n" << "Average score" << endl;
	if (flag == "math")
	{
		cout << mathAverage;
		cout << "\n\n" << "Students v2:" << endl;
		for (i = 0; i < lenght; i++)
		{
			if (student[i].math >= mathAverage)
			{
				cout << student[i].second_name << setw(5) << student[i].math << setw(5) << student[i].ph << setw(5) << student[i].ch << endl;
			}
		}
	}


	if (flag == "ph")
	{
		cout << phAverage;
		cout << "\n\n" << "Students v2:" << endl;
		for (i = 0; i < lenght; i++)
		{
			if (student[i].ph >= phAverage)
			{
				cout << student[i].second_name << setw(5) << student[i].math << setw(5) << student[i].ph << setw(5) << student[i].ch << endl;
			}
		}
	}


	if (flag == "ch")
	{
		cout << chAverage;
		cout << "\n\n" << "Students v2:" << endl;
		for (i = 0; i < lenght; i++)
		{
			if (student[i].ch >= chAverage)
			{
				cout << student[i].second_name << setw(5) << student[i].math << setw(5) << student[i].ph << setw(5) << student[i].ch << endl;
			}
		}
	}
	delete[] student;
}
