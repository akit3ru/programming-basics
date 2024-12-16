/*
// lab 6.3
const int matrixI = 100;
const int matrixJ = 100;

int main()
{
    int mat[matrixI][matrixJ];
    cout << "Введите количество строк и столбцов матрицы: " << endl;
    int n, m;
    cin >> n >> m;
    cout << "Введите матрицу: " << endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> mat[i][j];

    // Найти столбец с наименьшей суммой элементов и увеличить все элементы этого столбца на 3.
    int min_sum = 0;
    int min_sum_j = 0;

    for (int j = 0; j < m; j++)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
            sum = sum + mat[i][j];
        min_sum = min(min_sum, sum);
        if (min_sum == sum)
            min_sum_j = j;
    }
    
    for (int i = 0; i < n; i++)
        mat[i][min_sum_j] = mat[i][min_sum_j] + 3;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << mat[i][j] << " ";
        cout << '\n';
    }
}
*/

/*
// lab 6.4
#include <iostream>
using namespace std;

bool is_digits_different(int x)
{
    bool digits[10] = { false };
    while (x > 0)
    {
        int digit = x % 10;
        if (digits[digit])
            return false;
        digits[digit] = true;
        x /= 10;
    }
    return true;
}

bool is_prod_kr14(int x, int y)
{
    if (x * y == 14)
        return true;
    return false;
}

int main()
{
    const int n_max = 20000;
    int n;
    int mas[n_max];
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> mas[i];

    for (int i = 0; i < n; i++)
    {
        if (is_digits_different(mas[i]))
        {
            for (int j = i; j < (n - 1); j++)
            {
                mas[j] = mas[j + 1];
            }
            i--;
            n--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < (n - 1); j++)
        {
            if (is_prod_kr14(mas[i], mas[j]))
            {
                for (int j = n; j > i; j--)
                {
                    mas[j] = mas[j - 1];
                }
                i++;
                n++;

            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << mas[i] << " ";
}
*/

#include "func.hpp"
#include <iostream>

int main()
{
    int mat[100][100] = { 0 };
    int n;
    std::cin >> n;
    matrixCreation(mat, n);

    if (sameRows)
    {
        replaceMinimalElements(mat, n, max_prime_element(mat, n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                std::cout << mat[i][j] << " ";
            }
            std::cout << std::endl;
        }

    }

    return 0;
}
