#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define ll long long;
using namespace std;

void fastIO()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

string F(int X, string S1, string S2)
{
	if (X == 1)
		return S1 + S2;
	else
		return S2 + S1;
}

void SolveProblem()
{
	string S1, S2;
	cin >> S1 >> S2;

	cout << F(1, F(1, F(0, S1, S2) + S1, S2), S1 + F(0, S1 + S2, F(1, S2, S1)));
}
int main()
{
	fastIO();
	SolveProblem();
}