#include<iostream>
#include <algorithm>
using namespace std;

void ReadArray(int arr[100][100], int N, int M)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> arr[i][j];
		}
	}
}

bool CheckNumber(int arr[100][100],int N, int M, int NumberCheck)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (arr[i][j] == NumberCheck)
			{
				return true;
			}
		}
	}
	return false;
}


int main()
{
	int N, M;
	cin >> N >> M;
	int arr[100][100];
	ReadArray(arr, N, M);

	int NumberCheck;
	cin >> NumberCheck;
	if (CheckNumber(arr, N, M, NumberCheck)) cout << "YES\n";
	else cout << "NO" << endl;

}
