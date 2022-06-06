/*
Составить программу, которая удаляет из списка L все отрицательные элементы.
*/

// PROGRAMMA BULIT BUKVU "L"
// NENAVIJU C++, BIL EGO V NOGU!


#include <list>
#include <iostream>
#include <ctime>
#include <iterator>
using namespace std;

void createList(list<int>& L, int n)
{
	list <int>::iterator iter = L.begin();
	for (int i = 0; i < n; i++)
	{
		if (*iter < 0)
		{
			L.remove(*iter);
		}
		++iter;
	}
}

int main()
{
	srand(time(NULL));
	int n, r;
	list <int> L;
	cout << "Enter list size " << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		r = rand() % 10 - 5;
		L.push_back(r);
	}
	cout << "\n\n\n";
	copy(L.begin(), L.end(), ostream_iterator<int>(cout, " "));
	createList(L, n);
	cout << "\n\n\n";
	copy(L.begin(), L.end(), ostream_iterator<int>(cout, " "));
}
