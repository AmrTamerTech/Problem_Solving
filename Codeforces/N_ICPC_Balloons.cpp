#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main()
{
	int T, N;
	cin >> T;
	string S;
	
	while (T--)
	{
		int ArrFrqString[26] = {};
		cin >> N;
		cin >> S;
		int Counter = 0;
		for (char C : S)
		{
			int index = C - 'A';
			if (ArrFrqString[index] == 0)
			{
				Counter++;
				ArrFrqString[index]++;
			}
		}
		cout << (Counter + N) << endl;
	}
} 
