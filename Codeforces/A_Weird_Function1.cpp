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

int Function(int X)
{
	return 2 * X + 3;
}

void SolveProblem()
{
	int X;
	cin >> X;

	cout << Function(Function(Function(X))) + 2 * Function(X * Function(X)) << endl;
}

int main()
{
	fastIO();
	SolveProblem();
}