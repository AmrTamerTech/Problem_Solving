#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool CheckColors(string S1, string S2, int n)
{
	for (int i = 0; i < n; i++)
	{
		if ((S1[i] == 'B' || S1[i] == 'G') != (S2[i] == 'B' || S2[i] == 'G'))
			return false;
	}
	return true;
}
int main()
{
	int T;
	cin >> T;
	int n;
	string S1, S2;
	while (T--)
	{
		cin >> n;
		cin >> S1 >> S2;
		cout << (CheckColors(S1, S2, n) ? "YES" : "NO") << endl;
	}
} 
