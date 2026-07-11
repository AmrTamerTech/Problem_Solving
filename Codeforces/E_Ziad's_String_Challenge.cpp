#include  <iostream>  
using  namespace  std;


void SolveProblem()
{
	string S;
	cin >> S;
	bool FlagY = false, Flage = false, Flags = false;
	for (char C : S)
	{
		if (C == 'Y') FlagY = true;
		if (C == 'e') Flage = true;
		if (C == 's') Flags = true;
	}
	cout << (FlagY == true && Flage == true && Flags == true ? "Ziad eld3eef" : "Ziad is weak") << endl;
}

int main()
{
	SolveProblem();
	return 0;
}