// Дан двумерный массив.Заменить первый нуль в каждой строке на количество нулей в этой строке.

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    bool flag = false;
    int Ar[20][20];
    int i, j, k=0, m, n;
    cout << "Row: ";
    cin >> m;
    cout << "Col: ";
    cin >> n;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            Ar[i][j] = rand() % 2;
        }
    }
    cout << "Original" << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            cout << Ar[i][j] << "\t";
        cout << endl;
    }
    
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (Ar[i][j] == 0)
            {
                for (j = 0; j < n; j++)
                {
                    if (Ar[i][j] == 0)
                    {
                        k++;
                    }
                    
                }
                for (j = 0; j < n; j++)
                {
                    if ((flag == false) && (Ar[i][j] == 0))
                    {
                        Ar[i][j] = k;
                        flag = true;
                    }
                }
                flag = false;
                k = 0;
            }
        }
    }


    cout << endl << "RESULT" << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            cout << Ar[i][j] << "\t";
        cout << endl;
    }
}
