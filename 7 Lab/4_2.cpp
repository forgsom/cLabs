/*
Создать массив, элементами которого являются структуры – список стартовой пятерки баскетбольной команды
(фамилия, рост, амплуа (нападающий, защитник, центровой), номер). Создать функцию, сортирующую данную
структуру (например, по росту), и функцию для изменения игрока под определенным номером. Использовать эти
функции по назначению в программе (для вывода отсортированной информации и изменения нужной информации).
*/

#include <iostream>
#include <string>
using namespace std;

struct Team
{
	string second_name;
	int height;
	string amplua;
	int number;
};

void Sortirovka(Team* sportsmeni, const int n)
{
	string second_name, amplua;
	int height, number;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (sportsmeni[i].height < sportsmeni[j].height)
			{
				height = sportsmeni[i].height;
				sportsmeni[i].height = sportsmeni[j].height;
				sportsmeni[j].height = height;

				number = sportsmeni[i].number;
				sportsmeni[i].number = sportsmeni[j].number;
				sportsmeni[j].number = number;

				second_name = sportsmeni[i].second_name;
				sportsmeni[i].second_name = sportsmeni[j].second_name;
				sportsmeni[j].second_name = second_name;

				amplua = sportsmeni[i].amplua;
				sportsmeni[i].amplua = sportsmeni[j].amplua;
				sportsmeni[j].amplua = amplua;
			}
		}
	}
}

void Change(Team* Sportsmeni, const int n, int lenght)
{
	for (int i = 0; i < lenght; i++)
	{
		if (Sportsmeni[i].number == n)
		{
			cout << "\nNew second name" << endl;
			cin >> Sportsmeni[i].second_name;
			cout << "New height" << endl;
			cin >> Sportsmeni[i].height;
			cout << "New amplua" << endl;
			cin >> Sportsmeni[i].amplua;
			cout << "New number" << endl;
			cin >> Sportsmeni[i].number;
		}
	}
}

int main()
{
	int i = 0, n, lenght;
	cout << "lenght is ";
	cin >> lenght;
	Team* Sportsmeni = new Team[lenght];

	for (i; i < lenght; i++)
	{
		cout << "second name ";
		cin >> Sportsmeni[i].second_name;
		cout << "height ";
		cin >> Sportsmeni[i].height;
		cout << "amplua ";
		cin >> Sportsmeni[i].amplua;
		cout << "number ";
		cin >> Sportsmeni[i].number;
	}
	i = 0;

	cout << "Sportsmeni:" << endl;
	for (i = 0; i < lenght; i++)
	{
		cout << Sportsmeni[i].second_name << "   " << Sportsmeni[i].height << "   " << Sportsmeni[i].amplua << "   " << Sportsmeni[i].number << endl;
	}
	i = 0;

	Sortirovka(Sportsmeni, lenght);

	cout << "\nSportsmeni v2:" << endl;
	for (i = 0; i < lenght; i++)
	{
		cout << Sportsmeni[i].second_name << "   " << Sportsmeni[i].height << "   " << Sportsmeni[i].amplua << "   " << Sportsmeni[i].number << endl;
	}
	i = 0;
	cout << "\nCto Iskat? ";
	cin >> n;
	
	Change(Sportsmeni, n, lenght);


	cout << "\nSportsmeni v3:" << endl;
	for (i = 0; i < lenght; i++)
	{
		cout << Sportsmeni[i].second_name << "   " << Sportsmeni[i].height << "   " << Sportsmeni[i].amplua << "   " << Sportsmeni[i].number << endl;
	}
	i = 0;
	delete[] Sportsmeni;
}
