/*
Дана строка символов, среди которых есть двоеточия (:). Подсчитать кол-во символов между двумя двоеточиями.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int k = 0;
	string s;
	cout << "Write string with ':'" << endl;
	getline(cin, s);

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == ':')
		{
			i++;
			for (i; s[i] != ':'; i++)
			{
				if (s[i] == ' ') { k++; }
			}
		}
	}
	cout << k << endl;
}
