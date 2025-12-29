#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int arr[5];
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	int* min = min_element(arr, arr + N);
	int* max = max_element(arr, arr + N);

	swap(*min, *max);
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}
}
