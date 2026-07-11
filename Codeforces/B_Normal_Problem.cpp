#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void fastIO() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void SolveProblem()
{
	int T;
	cin >> T;
	string S;
	while (T--)
	{
		cin >> S;
		reverse(S.begin(), S.end());
		for (char& C : S)
		{
			if (C == 'q') C = 'p';
			else if (C == 'p') C = 'q';
		}
		cout << S << endl;
	}
}

int main() 
{
	fastIO();
	SolveProblem();

	return 0;
}