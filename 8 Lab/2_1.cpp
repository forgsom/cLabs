/*
Дан файл, содержащий произвольный текст. Выяснить, чего в нем больше: букв или цифр.
*/

/*
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    char s1;
    int cABC = 0, cOther = 0;
    cout << "Input a string: ";
    getline(cin, s);

    for (auto si: s)
    {
        if ((si >= 'a') && (si <= 'z') || (si >= 'A') && (si <= 'Z'))
        {
            cABC++;
        }
        else
        {
            cOther++;
        }
    }

    if (cABC > cOther)
    {
        cout << "Letters more: " << cABC;
    }
    else
    {
        cout << "Other chars more: " << cOther;
    }
}
*/

#include <iostream> 
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string s;
    int cABC = 0, cNum = 0;
	ifstream file("base.txt");
    getline(file, s);
	if (!file.is_open())
	{
		cout << "error";
	}
	else
	{
        for (auto si : s)
        {
            if ((si >= 'a') && (si <= 'z') || (si >= 'A') && (si <= 'Z'))
            {
                cABC++;
            }
            if ((si >= '0') && (si <= '9'))
            {
                cNum++;
            }
        }
        if (cABC > cNum)
        {
            cout << "Bukavi: " << cABC;
        }
        else
        {
            cout << "cbifri: " << cNum;
        }
	}
    file.close();
}
