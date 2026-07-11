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
	ll N;
	cin >> N;
	
	cout << (N * (N + 1) * (2 * N + 1)) / 6;

}

int main()
{
	fastIO();
	SolveProblem();
}