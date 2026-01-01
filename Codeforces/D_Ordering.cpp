#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int Arr[100000] = {};
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> Arr[i];
	}

	sort(Arr, Arr + N);
	for (int i = 0; i < N; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;

	sort(Arr, Arr + N, greater<int>());
	for (int i = 0; i < N; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
} 
