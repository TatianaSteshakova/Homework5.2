#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Rus");

    int n, m;
    cout << "Введите количество строк и столбцов двумерного массива (через пробел): " << endl;
    cin >> n >> m;

    int** mas = new int*[n];
    for (int i = 0; i < n; i++)
    {
        mas[i] = new int[m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Введите число mas[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> mas[i][j];
        }
    }

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mas[i][j] << " ";
        }
        cout << endl;
    }
}