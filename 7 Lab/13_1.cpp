/*
Создать массив, элементами которого являются структуры – список клиентов автосервиса (фамилия, марка
автомобиля, дата обслуживания). Вывести информацию по клиентам с определенной маркой автомобиля.
*/

#include <iostream>
#include <string>
using namespace std;

struct Date
{
	int day;
	int month;
	int year;
};

struct Servise
{
	string second_name;
	string marka;
	Date date;
};

int main()
{
	int i;
	string s;

	/*
	Servise Iosif;
	Servise Kira;
	Servise Kakashi;
	Servise Barry;
	Servise Isadora;
	*/

	struct Servise client[4] =
	{
	{"Stalin", "Mercedes", {5, 3, 1953}},
	{"Yoshikage", "Lada", { 13, 12, 2019}},
	{"Hatake", "Opel", { 7, 4, 2015 }},
	{"Allen", "Opel", { 4, 1, 2018}}
	};

	/*
	Iosif.second_name = "Stalin";
	Iosif.marka = "Mercedes";
	Iosif.date = {5, 3, 1953};

	Kira.second_name = "Yoshikage";
	Kira.marka = "Lada";
	Kira.date = { 13, 12, 2019};

	Kakashi.second_name = "Hatake";
	Kakashi.marka = "Opel";
	Kakashi.date = { 7, 4, 2015 };

	Barry.second_name = "Allen";
	Barry.marka = "Opel";
	Barry.date = { 4, 1, 2018};
	*/

	cout << "Clients:" << endl;
	for (i = 0; i < 4; i++)
	{
		cout << client[i].second_name << "      " << client[i].marka << "      " << client[i].date.day << "." << client[i].date.month << "." << client[i].date.year << endl;
	}
	i = 0;
	cout << "\n" << "Enter Marka" << endl;
	cin >> s;
	cout << "\n" << "Result" << endl;
	for (i; i < 4; i++)
	{
		if (s == client[i].marka)
		{
			cout << client[i].second_name << "      " << client[i].marka << "      " << client[i].date.day << "." << client[i].date.month << "." << client[i].date.year << endl;
		}
	}
}
