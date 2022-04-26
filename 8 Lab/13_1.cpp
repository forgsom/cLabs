/*
Дан файл, содержащий текст. Подсчитать количество слов, начинающихся и заканчивающихся на одну и ту же букву, и
вывести их в другой файл.
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	int i = 0;
	string flag = "";
	string result = "";
	string s;
	ifstream file("base.txt");
	if (!file.is_open())
	{
		cout << "File not found!";
	}
	else
	{
		while (!file.eof())
		{
			getline(file, s);
		}
		cout << s << endl;
		s += " ";

		do
		{
			if (s[i] == ' ')
			{
				if (flag[0] == flag[flag.length()-1])
				{
					result += flag + " ";
				}
				flag = "";
			}
			else
			{
				flag += s[i];
			}
			i++;
		} while (i < s.length());
	}
	cout << result << endl;
	file.close();
	i = 0;
	ofstream fout("base2.txt");
	fout << result;
	file.close();
}
