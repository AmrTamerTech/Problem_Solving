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
	Fast();
	int L, R, N;
	cin >> L >> R >> N;
	int Range = R - (L - 1);

	int NumberNotDivisible = Range - (R / N - ((L - 1) / N));
	cout << NumberNotDivisible << endl;

} 
