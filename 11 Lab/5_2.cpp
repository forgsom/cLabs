/*
Составить программу, которая удаляет из списка L все отрицательные элементы.
*/

// PROGRAMMA BULIT BUKVU "L"
// NENAVIJU C++, BIL EGO V NOGU!
//NENAVIGU VISUAL STUDIO, POMOIKA


#include <list>
#include <iostream>
#include <ctime>
#include <iterator>
using namespace std;

void createList(list<int>& L, list<int>&L1, int n)
{
	list <int>::iterator iter = L.begin();
	for (int i = 0; i < n; i++)
	{
		if (*iter >= 0)
		{
			L1.push_back(*iter);
		}
		++iter;
	}
}

int main()
{
	srand(time(NULL));
	int n, r;
	list <int> L;
	list <int> L1;
	cout << "Enter list size " << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		r = rand() % 10 - 5;
		L.push_back(r);
	}
	cout << "\n\n\n";
	copy(L.begin(), L.end(), ostream_iterator<int>(cout, " "));
	createList(L, L1, n);
	cout << "\n\n\n";
	copy(L1.begin(), L1.end(), ostream_iterator<int>(cout, " "));
}
