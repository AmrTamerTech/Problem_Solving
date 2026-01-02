#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int Arr[100][100] = {};
	int PrimaryDiagonal = 0, SecondDiagonal = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> Arr[i][j];
			if (i == j)
				PrimaryDiagonal += Arr[i][j];
			if (i + j == (N - 1))
				SecondDiagonal += Arr[i][j];
		}
	}
	cout << abs(PrimaryDiagonal - SecondDiagonal) << endl;
} 
