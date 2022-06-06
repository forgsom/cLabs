/*
Написать функцию, которая создает список L2, 
являющийся копией списка L1, начинающегося с данного узла 
(задает пользователь).
*/

// PROGRAMMA BULIT BUKVU "L"

#include <list>
#include <iostream>
#include <ctime>
#include <iterator>
using namespace std;

void createList(list<int>& L1, list<int>& L2, int n, int f)
{
	int index = 0;
	list <int>::iterator iter = L1.begin();
	for (int i = 0; i < n; i++)
	{
		if (index > f)
		{
			L2.push_back(*iter);
		}
		++iter;
		++index;
	}
}

int main()
{
	srand(time(NULL));
	int n, r, f;
	list <int> L1;
	list <int> L2;
	cout << "Enter list size " << endl;
	cin >> n;
	cout << "Enter Flag " << endl;
	cin >> f;
	for (int i = 0; i < n; i++)
	{
		r = rand() % 10;
		L1.push_back(r);
	}
	cout << "\n\n\n";
	createList(L1, L2, n, f);
	copy(L1.begin(), L1.end(), ostream_iterator<int>(cout, " "));
	cout << "\n";
	copy(L2.begin(), L2.end(), ostream_iterator<int>(cout, " "));
}
