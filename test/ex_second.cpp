#include <iostream>
#include <ctime>
#include <fstream>
#include <cstdlib>
#include "solution.h"
using namespace std;

void ex_second()
{
    system("cls");
    srand(time(NULL));
    int i, j, n, m, firstBorder, secondBorder, flag = 1, max = -100;
    ofstream file2("ex 2.txt");

    cout << "Row: ";
    cin >> n;
    cout << "Col: ";
    cin >> m;
    cout << "First: ";
    cin >> firstBorder;
    cout << "Second: ";
    cin >> secondBorder;

    int** arr = new int* [n];
    cout << "Original array: \n";
    for (i = 0; i < n; i++)
    {
        arr[i] = new int[m];
        for (int j = 0; j < m; j++)
        {
            cout << (arr[i][j] = rand() % (secondBorder - firstBorder + 1) + firstBorder) << "\t";
        }
        cout << endl;
    }
    cout << "\nResult" << endl;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (arr[i][j] < 0)
            {
                flag = 0;
            }
        }
        if (flag)
        {
            for (int o = 0; o < m; o++)
            {
                cout << arr[i][o] << "\t";
                file2 << arr[i][o] << "\t";
                if (arr[i][o] > max)
                {
                    max = arr[i][o];
                }
            }
            cout << endl;
            file2 << endl;
        }
        flag = 1;
    }
    if (max > 0)
    {
        cout << "\n\nMax element is " << max << endl;
    }
    cout << endl;
    file2.close();
    delete[] arr;
}
