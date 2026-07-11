#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

void SolveProblem()
{
	long long m, n;
	cin >> n >> m;

	if (m <= n && (n - m) % 2 == 0) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main()
{
	SolveProblem();
	return 0;
}