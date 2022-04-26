/*
Дана строка. Определить, сколько слов заканчивается введенной пользователем буквой.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	char c;
	int k = 0;
	string s;
	cout << "Write string" << endl;
	getline(cin, s);
	cout << "Enter Char: ";
	cin >> c;

	for (int i = 0; i < s.length(); i++)
	{
		if (((s[i] == ' ') || ((s[i] == '.'))) && (s[i - 1] == c))
		{
			k++;
		}
	}
	cout << k << endl;
}
