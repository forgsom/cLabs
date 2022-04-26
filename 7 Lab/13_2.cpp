/*
Создать массив, элементами которого являются структуры – список журналов и газет (название, тираж, фамилия
главреда, год основания). Создать функцию, сортирующую данную структуру (например, по тиражу), и функцию для
поиска нужного значения в структуре. Использовать эти функции по назначению в программе (для вывода
отсортированной информации и поиска нужной информации).
*/

#include <iostream>
#include <string>
using namespace std;

struct Spisok
{
	string nazvanie;
	int tirazh;
	string second_name;
	int year;
};

void Sortirovka(Spisok* makulatura, const int n)
{
	string names, famm;
	int tirzh, dat;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (makulatura[i].tirazh < makulatura[j].tirazh)
			{
				tirzh = makulatura[i].tirazh;
				makulatura[i].tirazh = makulatura[j].tirazh;
				makulatura[j].tirazh = tirzh;

				dat = makulatura[i].year;
				makulatura[i].year = makulatura[j].year;
				makulatura[j].year = dat;

				names = makulatura[i].nazvanie;
				makulatura[i].nazvanie = makulatura[j].nazvanie;
				makulatura[j].nazvanie = names;

				famm = makulatura[i].second_name;
				makulatura[i].second_name = makulatura[j].second_name;
				makulatura[j].second_name = famm;
			}
		}
	}
}

void Poisk(Spisok* makulatura, int a)
{
	for (int i; i < 4; i++)
	{
		if ((makulatura[i].tirazh == a) || (makulatura[i].year == a))
		{
			cout << makulatura[i].nazvanie << "   " << makulatura[i].tirazh << "   " << makulatura[i].second_name << "   " << makulatura[i].year << endl;
		}
	}
}

int main()
{
	int i, s;
	struct Spisok makulatura[4] =
	{
		{"ctoTo2", 86, "petrov", 1945},
		{"ctoTo3", 95, "ivanov", 1999},
		{"ctoTo4", 19, "gusev", 2016},
		{"ctoTo1", 94, "artemov", 1986}
	};

	cout << "Makulatura:" << endl;
	for (i = 0; i < 4; i++)
	{
		cout << makulatura[i].nazvanie << "   " << makulatura[i].tirazh << "   " << makulatura[i].second_name << "   " << makulatura[i].year << endl;
	}
	i = 0;

	Sortirovka(makulatura, 4);

	cout << "\nMakulatura v2:" << endl;
	for (i = 0; i < 4; i++)
	{
		cout << makulatura[i].nazvanie << "   " << makulatura[i].tirazh << "   " << makulatura[i].second_name << "   " << makulatura[i].year << endl;
	}

	cout << "\nCto Iskat? ";
	cin >> s;

	Poisk(makulatura, s);
}
