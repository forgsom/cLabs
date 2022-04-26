//Написать функцию sogl, которая возвращает 1, если символ, полученный функцией в качестве аргумента, является согласной буквой русского алфавита, и 0 — в противном случае

#include <iostream>
using namespace std;

bool sogl(char n)
{
    int k = 0;
    char mas[10] = { 'e', 'y', 'u', 'i', 'o', 'a' };
    for (int i = 0; i < 11; i++)
    {
        if (n == mas[i])
            k++;
    }
    return k == 0;
}

int main()
{
    char c;
    cout << "Enter Char" << endl;
    cin >> c;
    cout << sogl(c) << endl;
}
