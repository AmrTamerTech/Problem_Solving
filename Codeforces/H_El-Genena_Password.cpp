#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

void SolveProblem()
{
	int T;
	cin >> T;
	while (T--)
	{
		string S;
		cin >> S;
		for (int i = 1; i < S.size(); i++)
		{
			int j = i;
			while (S[j] != '0' && j > 0 && (S[j] - 1) > S[j - 1])
			{
				S[j]--;
				swap(S[j], S[j - 1]);
				j--;
			}
		}
		cout << S << endl;
	}
}

int main()
{
	SolveProblem();
	return 0;
}