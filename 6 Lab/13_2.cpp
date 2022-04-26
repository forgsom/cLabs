/*
Дана строка, среди символов которой есть двоеточия. Получить все символы, расположенные между первым и вторым
двоеточиями. Если второго двоеточия нет, то получить все символы после первого двоеточия.

apgfka: afafa gAgfa sg 
afagg: agfaga afa fa: aggag 
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cout << "Write string with ':'" << endl;
	getline(cin, s);

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == ':')
		{
			i++;
			for (i; i < s.length(); i++)
			{
				if (s[i] == ':') { break; }
				cout << s[i];
			}
		}
	}
}
