#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#define ll long long
using namespace std;

void fastIO()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

bool Compare(short N, int Arr[100])
{
	for (int i = 0; i < N - 1; i++)
	{
		if (Arr[i] == Arr[i + 1])
			return true;
	}
	return false;
}

void SolveProblem()
{
	short T, N;
	cin >> T;

	while (T--)
	{
		cin >> N;
		int Arr[100];
		for (short i = 0; i < N; i++)
		{
			cin >> Arr[i];
		}
		sort(Arr, Arr + N);
		cout << (Compare(N, Arr) ? "NO" : "YES") << endl;
	}
}

int main()
{
	fastIO();
	SolveProblem();
}