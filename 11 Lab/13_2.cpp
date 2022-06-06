/*
Составить программу, которая формирует список L,
включив в него по одному разу элементы, которые
входят в один из списков L1 и L2, но в то же
время не входят в другой.
*/

// PROGRAMMA BULIT BUKVU "L"
// NENAVIJU C++, BIL EGO V NOGU!

/*
1 3 5 141 8 3 14 6
8 1  3 5 6 3 1 6 2 89
141 14 2 89
*/


#include <list>
#include <iostream>
#include <ctime>
#include <iterator>
using namespace std;

void createList(list<int>& L, list<int>& L1, list<int>& L2, int n, int f)
{
	list <int>::iterator iter1 = L1.begin();
	list <int>::iterator iter2 = L2.begin();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (*iter1 == *iter2)
			{
				f = 0;
			}
			++iter2;
		}
		if (f == 1)
		{
			L.push_back(*iter1);
		}
		++iter1;
		f = 1;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (*iter2 == *iter1)
			{
				f = 0;
			}
			++iter1;
		}
		if (f == 1)
		{
			L.push_back(*iter2);
		}
		++iter2;
		f = 1;
	}
}

int main()
{
	srand(time(NULL));
	int n, r1, r2, f = 1;
	list <int> L;
	list <int> L1;
	list <int> L2;
	cout << "Enter list size " << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		r1 = rand() % 10;
		L1.push_back(r1);
		r2 = rand() % 10;
		L2.push_back(r2);
	}
	cout << "\n\n\n";
	createList(L, L1, L2, n, f);
	copy(L1.begin(), L1.end(), ostream_iterator<int>(cout, " "));
	cout << "\n";
	copy(L2.begin(), L2.end(), ostream_iterator<int>(cout, " "));
	cout << "\n\n\n";
	copy(L.begin(), L.end(), ostream_iterator<int>(cout, " "));
}
