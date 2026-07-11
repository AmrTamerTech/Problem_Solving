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
	int T;
	cin >> T;
	short N, H;

	while (T--)
	{
		short Mn = 7, Mx = 0;
		cin >> N;
		short Result = 0;
		for (short i = 0; i < N; i++)
		{
			cin >> H;
			Mn = min(H, Mn);
			Mx = max(H, Mx);

		}
		Result = (1 + Mx - Mn);
		cout << Result << endl;
	}
}

int main()
{
	fastIO();
	SolveProblem();
}