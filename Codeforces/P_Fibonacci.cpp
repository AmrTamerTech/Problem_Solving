#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

void Fast()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
}

int main()
{
	int n;
	cin >> n;
	vector<long long> fib(n + 1);
	fib[1] = 0;
	fib[2] = 1;
	for (int i = 3; i <= n; ++i) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	cout << fib[n];

} 
