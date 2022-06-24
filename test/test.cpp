/*
FIRST
Дан массив целых чисел из n элементов, заполненный
случайным образом числами из заданного пользователем
промежутка. Удалить из него все отрицательные элементы
кратные 5 и принадлежащие промежутку [a,b] (задает
пользователь). Отсортировать получившийся массив и вывести
его на экран и в файл.
*/

/*
SECOND
Дан двумерный массив размером n*m, заполненный
случайными числами из заданного пользователем промежутка.
Определить номера строк массива, содержащих только
положительные элементы и найти среди них наибольший, есди
такие строки есть, то вывести все на экран и в файл.
*/

/*
THIRD
Создать массив, элементами которого являются структуры –
список детей в садике. В записи должны содержаться имя,
фамилия, вес, рост, группа. Отсортировать по росту, вывести
средний рост и вес. Запрограммировать возможность вывода
всех детей, входящих в одну группу, введенную пользователем,
запись данных в файл и чтение из файла уже записанных данных.
*/

#include <iostream>
#include <cstdlib>
#include "solution.h"
using namespace std;

int main()
{
    int a;
    do
    {
        system("cls");
        cout << "Enter:" << endl;
        cout << "1 and Enter to display the solution of 1 ex (array)" << endl;
        cout << "2 and Enter to display the solution of 2 ex (two-dimensional array)" << endl;
        cout << "3 and Enter to display the solution of 3 ex (struct)" << endl;
        cout << "0 and Enter to exit the program" << endl;
        cout << "> ";

        cin >> a;
        cout << endl;
        switch (a)
        {
        case 1:
            ex_first();
            break;
        case 2:
            ex_second();
            break;
        case 3:
            ex_third();
            break;
        }
        cout << endl;
        system("pause");
    } while (a != 0);
}
