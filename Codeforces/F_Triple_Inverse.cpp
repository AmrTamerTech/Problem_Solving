#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

void SolveProblem()
{
	int T;
	cin >> T;
	string S, newString;
	while (T--)
	{
		cin >> S;
		newString = "";
		for (int i = S.size() - 1; i >= 0; i--)
		{
			char C = S[i];
			if (islower(C)) C = toupper(C);
			else C = tolower(C);

			if (islower(C))
				newString += 'z' - (C - 'a');
			else if (isupper(C))
				newString += 'Z' - (C - 'A');
		}
		cout << newString << endl;
	}
}

int main()
{
	SolveProblem();
	return 0;
}