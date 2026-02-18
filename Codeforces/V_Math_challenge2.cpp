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
	string S;
	cin >> S;
	int Sum = 0;
	for (int i = 0; i < S.length(); i++)
	{
		Sum += S[i] - '0';
	}

	cout << (Sum % 3 == 0 ? "YES" : "NO") << endl;

} 
