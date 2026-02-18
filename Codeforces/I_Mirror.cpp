#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int Array[100000] = {};
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> Array[i];
	}

	sort(Array, Array + N);
	for (int i = 0; i < N / 2; i++)
	{
		cout << Array[i] << " ";
	}
	for (int i = (N/2) - 1; i >= 0; i--)
	{
		cout << Array[i] << " ";
	}
	cout << endl;
	sort(Array, Array + N, greater<int>());
	for (int i = 0; i < N / 2; i++)
	{
		cout << Array[i] << " ";
	}
	for (int i = (N / 2) - 1; i >= 0; i--)
	{
		cout << Array[i] << " ";
	}
} 
