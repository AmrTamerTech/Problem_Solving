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
	short N;
	cin >> N;
	string First, Element, Temp;

	for (short i = 0; i < 4; i++)
	{
		cin >> Temp;
		First += Temp;
	}
	bool Flage = false;

	for (short i = 1; i < N; i++)
	{
		Element = "";
		for (short j = 0; j < 4; j++)
		{
			cin >> Temp;
			Element += Temp;
		}
		if (Element != First) Flage = true;
	}
	cout << (Flage ? "you were right" : "Empedocles was right") << endl;
}

int main()
{
	fastIO();
	SolveProblem();
}