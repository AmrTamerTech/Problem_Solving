#include  <iostream>  
using  namespace  std;


void SolveProblem()
{
	int N, K;
	cin >> N >> K;
	int* P = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> P[i];
	}
	for (int i = 0; i < K; i++)
	{
		cout << P[i] << " ";
	}
	for (int i = N - 1; i >= K; i--)
	{
		cout << P[i] << " ";
	}
}

int main()
{
	SolveProblem();
	return 0;
}