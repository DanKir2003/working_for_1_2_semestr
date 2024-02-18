#include <iostream> 
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int m, n;
    cout << "Введите размеры матрицы" << endl;
    cin >> m;
    cin >> n;
    int i, j;
    int** matrica = new int* [m];
    for (i = 0; i < m; ++i)
        matrica[i] = new int[n];
    char a;
    cout << "Выберите способ ввода масива:" << endl;
    cout << "a:вручную" << endl;
    cout << "b:автоматически" << endl;
    cin >> a;
    if (a == 'a')
    {
        cout << "Введите элементы массива" << endl;
        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
                cin >> matrica[i][j];
        }
    }
    else
    {
        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
                matrica[i][j] = rand() % 9 + 1;

        }
    }
    cout<<"Исходная матрица"<<endl;
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
            cout << matrica[i][j] << "   ";
        cout << endl;

    }
    int t, sum, min;
    if (m > 1)
    {
        int min = 0;
        int sum = 0;
        for (i = 0, j = 0; j < n; ++j)
            min += matrica[i][j];
        for (i = 1; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
                sum += matrica[i][j];
            if (sum < min)
            {
                min = sum;
                t = i;
            }
            sum = 0;
        }
    }
    int* mas1 = new int[n];
    mas1 = matrica[t];
    for (i = t; i < m - 1; ++i)
        matrica[i] = matrica[i + 1];
    matrica[m - 1] = mas1;

    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Преобразованная матрица 1" << endl;
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
            cout << matrica[i][j] << "   ";
        cout << endl;

    }

    int max;
    max = 0;
    int* mas2 = new int[m];
    for (j = 0; j < n; ++j)
    {
        sum = 0;
        for (i = 0; i < m; ++i)
            sum += matrica[i][j];
        if (sum > max)
        {
            max = sum;
            t = j;
        }
    }
    for (i = 0; i < m; ++i)
        mas2[i] = matrica[i][t];
    for (i = 0; i < m; ++i)
    {
        for (j = t; j < n - 1; ++j)
            matrica[i][j] = matrica[i][j + 1];
    }
    for (j = 0; j < m; ++j)
        matrica[j][n - 1] = mas2[j];

    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Преобразованная матрица 2" << endl;
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
            cout << matrica[i][j] << "   ";
        cout << endl;

    }
    for (i = 0; i < m; ++i)
        delete[] matrica[i];
    delete[] matrica;
    return 0;
}
