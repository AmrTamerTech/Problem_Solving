#include <iostream>
#include <string>
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
	string S;
	cin >> S;
	int Size = S.size();
	int Left = 0, Right = Size - 1;
	int Diff = 0;
	while (Left <= Right)
	{
		if (S[Left] != S[Right]) Diff++;
		Left++;
		Right--;
	}

	if (Diff == 1) cout << "YES" << endl;
	else if (Diff == 0 && Size % 2 == 1) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main() 
{
	Fast();
	SolveProblem();

	return 0;
}