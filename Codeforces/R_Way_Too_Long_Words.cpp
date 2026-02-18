#include <iostream>
using namespace std;
void CalculateString(string S)
{
	short Size = S.length();
	if (Size <= 10)
		cout << S << endl;
	else
		cout << S[0] << Size - 2 << S[Size - 1] << endl;
}

void SolveProblem()
{
	short N;
	cin >> N;
	string S;
	while (N--)
	{
		cin >> S;
		CalculateString(S);
	}
}


int main()
{
	SolveProblem();

}