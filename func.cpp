#include "func.hpp"
#include <iostream>
#include <cmath>

void matrixCreation(int mat[100][100], int n)
{
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
		{ 
			std::cin >> mat[i][j];
		}
}

bool isPrime(int x)
{
	if (x == 1) return 0;
	if (x == 2) return 1;
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x % i) == 0
			return 0;
	}
	return 1;
}


int max_prime_element(int mat[100][100], int n)
{
	int max_prime = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			if (isPrime(mat[i][j]) && max_prime < mat[i][j])
				max_prime = mat[i][j];

		}
	return max_prime;
}

bool sameRows(int mat[100][100], int n)
{
	bool same = true;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = 0; k < n; k++) {
				if (not same) break;
				if (matrix[i][k] != matrix[j][k]) 
				same = false;
			}
			if (same) return 1;
			same = true;
		}
	}
	return 0;
}

void replaceMinimalElements(int matrix[100][100], int n, int value) {
	for (int i = 0; i < n; i++) {
		int minimal = 1000000, index;
		for (int j = 0; j < n; j++) {
			if (matrix[j][i] < minimal) {
				minimal = matrix[j][i];
			}
		}
		for (int j = 0; j < n; j++) {
			if (matrix[j][i] == minimal) {
				matrix[j][i] = value;
			}
		}
	}
}