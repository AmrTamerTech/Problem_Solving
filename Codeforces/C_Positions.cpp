#include<iostream>
#include <algorithm>
using namespace std;


void PrintValidNumber(int arr[1000], int N)
{
	int A;
	for (int i = 0; i < N; i++)
	{
		cin >> A;
		if (A <= 10)
		{
			arr[i] = A;
			cout << "A[" << i << "] = " << arr[i] << endl;
		}
	}
}


int main()
{
	int arr[1000];
	int N;
	cin >> N;
	PrintValidNumber(arr,N);
} 
