//С клавиатуры вводится двузначное число, среди всех четырехзначных чисел вывести на экран те, которые начинаются или заканчиваются этим числом

#include <iostream>
using namespace std;

int main()
{
    int const SIZE = 9999; // грубо говоря, размер массива
    int first, // 1-е совпадение в начале
        last, // 2-е совпадение в конце
        num; // число с которым сравниваем
    int index = 0;

    int array[SIZE];

    cout << "The Number to be found" << endl;
    cin >> num;
    for (int i = 1000; i < SIZE; i++)
    {
        array[index] = i;
        index++;
    }

    for (int i = 0; i < SIZE; i++) {
        first = array[i] / 100; // на 100, потому что отрывать от четырёхзначных будет первые два числа
        last = array[i] % 100; // на 100, даёт остаток последние два числа, кроме целочисленного остатка в ноль
        if (first == num) // условно 27, сравниваем с введённым
            cout << "Array[" << i << "] = " << array[i] << " First = " << first << endl;
        if (last == num) // условно 27, сравниваем с введённым
            cout << "Array[" << i << "] = " << array[i] << " Last = " << last << endl;
    }
}
