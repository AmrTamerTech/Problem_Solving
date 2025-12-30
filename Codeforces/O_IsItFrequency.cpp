#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
	int N, M;
	cin >> N >> M;
	M++;
	int arr[N];
	int Freq[M] = {};
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		Freq[arr[i]]++;
	}
	for (int i = 1; i < M; i++)
	{
		cout << Freq[i] << endl;
	}
}
