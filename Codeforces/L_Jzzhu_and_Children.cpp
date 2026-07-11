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



void SolveProblem()
{
	short N, M;
	cin >> N >> M;

	int arr[102] = { 0 };

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		arr[i] = ceil(arr[i] / (double)M);
	}

	int res = N, Max = INT_MIN;

	for (int i = 0; i < N; i++)
	{
		if (Max <= arr[i])
		{
			Max = arr[i];
			res = i + 1;
		}
	}

	cout << res << endl;
}

int main()
{
	fastIO();
	SolveProblem();
}