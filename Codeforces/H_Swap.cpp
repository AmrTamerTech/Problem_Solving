#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int arr[N];
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	int* minAddress = min_element(arr, arr + N);
	int* maxAddress = max_element(arr, arr + N);

	swap(*minAddress, *maxAddress);
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}
}