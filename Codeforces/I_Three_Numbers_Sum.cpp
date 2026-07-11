#include <iostream>
using namespace std;

void SolveProblem()
{
	int K, S, Count = 0;
	cin >> K >> S;

	for (int X = 0; X <= K; X++)
	{
		for (int Y = 0; Y <= K; Y++)
		{
			int Z = S - X - Y;
			if (Z >= 0 && Z <= K)
				Count++;
		}
	}
	cout << Count << endl;
}

int main()
{
	SolveProblem();
}