#include<iostream>
#include <algorithm>
using namespace std;

bool CheckElements(string& S)
{
	for (int i = 1; i < S.length(); i++)
	{
		if (islower(S[i]))
		{
			return false;
		}
	}
	return true;
}
int main()
{
	string S;
	cin >> S;

	if (CheckElements(S))
	{
		for (char& C : S)
		{
			if (islower(C)) C = toupper(C);
			else C = tolower(C);
		}
	}

	cout << S << endl;
} 
