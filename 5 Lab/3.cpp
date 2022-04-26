//Дано число n. Вычислите сумму: 1! + 2! + 3! + ... +n!, создав функцию вычисления факториала числа.

#include <iostream>
using namespace std;
typedef unsigned long long ull;


ull fact(int n)
{
    return ((n == 0 || n == 1) ? 1 : n * fact(n - 1));
}


ull sumfact(int n)
{
    return ((n == 0 || n == 1) ? 1 : fact(n) + sumfact(n - 1));
}


int main()
{
    int n;
    cout << "Input N" << endl;
    cin >> n;
    cout << sumfact(n);
}
