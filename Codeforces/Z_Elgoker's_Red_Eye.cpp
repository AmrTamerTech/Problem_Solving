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
	string Word;
	cin >> Word;
	int Size = Word.size();

	bool isPalindrome[Size][Size] = { 0 };
	for (int i = 0; i < Size; i++) //Length = 1 each element (Only One element)
		isPalindrome[i][i] = true;
	for (int i = 0; i < Size - 1; i++) //Length = 2
		isPalindrome[i][i + 1] = (Word[i] == Word[i + 1]);
	for (int Length = 3; Length <= Size; Length++) //Length > 2
	{
		for (int i = 0; i + Length - 1 < Size; i++) //Start
		{
			int j = i + Length - 1; // End
			isPalindrome[i][j] = (Word[i] == Word[j] && isPalindrome[i + 1][j - 1]);
		}
	}

	int q;
	cin >> q;
	while (q--)
	{
		int L, R;
		cin >> L >> R;
		L--; R--;
		if (isPalindrome[L][R])
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}

int main() 
{
	fastIO();
	SolveProblem();

	return 0;
}