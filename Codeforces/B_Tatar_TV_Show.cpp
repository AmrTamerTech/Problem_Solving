#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#define ll long long
using namespace std;

void fastIO()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}


void SolveProblem()
{
    int t;
    cin >> t;

    while (t--) 
	{
		int N, K;
		cin >> N >> K;

		string S;
		cin >> S;

		bool Flage = true;
		for (int g = 0; g < K; g++)
		{
			int Ones = 0;
			for (int i = g; i < N; i += K)
			{
				if (S[i] == '1') Ones++;
			}
			if (Ones % 2 == 1)
			{
				Flage = false;
				break;
			}
		}
		cout << (Flage ? "YES" : "NO") << endl;
    }
}

int main()
{
	fastIO();
	SolveProblem();
}