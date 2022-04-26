/*
Дана строка (слова разделены пробелами). Вывести на экран слово, в котором найдено искомое (вводится с клавиатуры)
буквосочетание

wadaaasfa fsdgfsdfds dsgsdgsd ggdsfgdf
*/

#include <iostream>
#include <string>
using namespace std;


int main()
{
	int j;
	string s, iscomoe, word;
	cout << "Write string with " << endl;
	getline(cin, s);
	s += " ";
	cout << "Write ISCOMOE " << endl;
	getline(cin, iscomoe);

	for (int i = 0; i < s.length(); i++)
	{
		for (i; s[i] != ' '; i++)
		{
			word += s[i];
			j = word.find(iscomoe);
		}
		if (j != s.npos)
		{
			cout << word << endl;
		}
		word = "";
	}
}
