/*
Заполнить файл f целыми случайными числами. Из файла f получить файл g, исключив повторные вхождения чисел.
Порядок следования чисел сохранить.
*/

#include <iostream>
#include <fstream>
#include <ctime>
#include <unordered_set>
#include <iterator>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    int n = 5, r;
    srand(time(NULL));


    ofstream file("f.bin");
    for (int i = 0; i < n; i++)
    {
        r = rand() % 5;
        file << r << " ";
        cout << r << " ";
    }
    file.close();

    cout << endl;

    fstream ifs("f.bin", ios::in | ios::binary), ofs("g.bin", ios::out | ios::binary);
    if (ifs.is_open() && ofs.is_open())
    {
        unordered_set<int> set((istream_iterator<int>(ifs)), istream_iterator<int>());
        copy(set.begin(), set.end(), ostream_iterator<int>(cout, " "));
    }
    else std::cerr << "Can't open file(s)\n";
    ifs.close();
    ofs.close();
}
