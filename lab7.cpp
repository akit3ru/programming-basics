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
