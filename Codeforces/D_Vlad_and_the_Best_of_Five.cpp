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
	short T; 
	cin >> T;

	while (T--)
	{
		short RA = 0, RB = 0;
		char C;
		for (short i = 0; i < 5; i++)
		{
			cin >> C;
			if (C == 'A') RA++;
			else RB++;
		}
		cout << ((RA > RB) ? 'A' : 'B') << endl;
	}

}

int main()
{
	fastIO();
	SolveProblem();
}