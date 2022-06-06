/*
Написать функцию, которая использует исходный список
L и создает два новых списка L1 и L2. L1
содержит нечетные числа, а L2 – четные.
*/

// PROGRAMMA BULIT BUKVU "L"

#include <list>
#include <iostream>
#include <ctime>
#include <iterator>
using namespace std;

void createList(list<int>& L, list<int>& L1, list<int>& L2, int n)
{
	list <int>::iterator iter = L.begin();
	for (int i = 0; i < n; i++)
	{
		if (*iter % 2 == 0)
		{
			L2.push_back(*iter);
		}
		else
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
	list <int> L1;
	list <int> L2;
	list <int> L;
	cout << "Enter list size " << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		r = rand() % 10;
		L.push_back(r);
		cout << r << ", ";
	}
	cout << "\n\n\n";
	createList(L, L1, L2, n);
	copy(L1.begin(), L1.end(), ostream_iterator<int>(cout, " "));
	cout << "\n";
	copy(L2.begin(), L2.end(), ostream_iterator<int>(cout, " "));
}
