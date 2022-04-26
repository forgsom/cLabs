/*
Записать в файл N натуральных случайных чисел a1,a2,a3,…,an. Сформировать новый файл, элементами которого
являются числа а1, а1+а2, а1+а2+а3,..., a1+a2+a3+...+an.
*/

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
using namespace std;

int main()
{
	int n = 5;
	int s = 0, b = 0;
	srand(time(NULL));


	ofstream file("N.txt");
	for (int i; i < n; i++)
	{
		file << rand() % 20 << '\n';
	}
	file.close();

	ifstream path("N.txt");
	ofstream fout("M.txt");
	for (int i; i < n; i++)
	{
		path >> b;
		s += b;
		fout << s << '\n';
	}
	path.close();
	fout.close();
}
