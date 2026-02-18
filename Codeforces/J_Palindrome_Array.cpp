#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int Array[100000] = {};
	int N;
	cin >> N;
	bool Flag = true;

	for (int i = 0; i < N; i++)
	{
		cin >> Array[i];
	}

	for (int i = 0, j = N - 1; i < N, j >= 0; i++, j--)
	{
		if (Array[i] != Array[j])
		{
			Flag = false;
			break;
		}
	}
	cout << (Flag ? "YES" : "NO") << endl;
} 
