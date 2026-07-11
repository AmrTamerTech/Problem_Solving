#include <iostream>
#include <algorithm>
using namespace std;
void Fast()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
}

void SolveProblem()
{
	short number_string, m;
	cin >> number_string >> m;
	string arr[number_string];
	int Result = INT_MAX;

	for (short i = 0; i < number_string; i++)
	{
		cin >> arr[i];
	}
	for (short i = 0; i < number_string; i++)
	{
		for (short j = i + 1; j < number_string; j++)
		{
			int Diff = 0;
			for (int k = 0; k < m; k++)
			{
				Diff += abs(arr[j][k] - arr[i][k]);
			}
			Result = min(Result, Diff);
		}
	}

	cout << Result << endl;
}

int main() 
{
	Fast();
	int T;
	cin >> T;
	while (T--)
	{
		SolveProblem();
	}

	return 0;
}