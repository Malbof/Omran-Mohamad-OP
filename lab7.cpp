#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void ArraysInit(int*, int*, int, const int);
void ArrayOutput(int*, int);
void CheckArrays(int*, int*, int);
void ClearMemory(int*, int*);

int main()
{
	int n = 0;
	const int MAX_RAND = 10;

	while (n <= 0)
	{
		cout << "Enter n: ";
		cin >> n;
		cout << endl;
	}
	
	int *A = new int[n];
	int *B = new int[n];

	ArraysInit(A, B, n, MAX_RAND);
	cout << "array A: ";
	ArrayOutput(A, n);
	cout << endl << "array B: ";
	ArrayOutput(B, n);

	CheckArrays(A, B, n);

	cout << endl << "changed array A: ";
	ArrayOutput(A, n);

	ClearMemory(A, B);
	return 0;
}

void ArraysInit(int *A, int *B, int n, const int MAX_RAND)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		A[i] = rand() % MAX_RAND;
		B[i] = rand() % MAX_RAND;
	}
}

void ArrayOutput(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void CheckArrays(int* A, int* B, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (A[i] == B[j])
			{
				A[i] = 0;
			}
		}
	}
}

void ClearMemory(int *A, int *B)
{
	delete [] A;
	delete [] B;
}