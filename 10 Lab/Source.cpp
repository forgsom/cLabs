#include "Header.h"

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
};

int Sum(int a, int d, int n)
{
    int c = ((2 * a + d * (n - 1)) / 2) * n;
    return c;
};

int fact(int n)
{
    return ((n == 0 || n == 1) ? 1 : n * fact(n - 1));
};

int sumfact(int n)
{
    return ((n == 0 || n == 1) ? 1 : fact(n) + sumfact(n - 1));
};
