#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void fastIO()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

struct Stars
{
	int X;
	int Y;
	int Z;
};

struct Print
{
	int X = 0;
	int Y = 0;
	int Z = 0;
};

void SolveProblem()
{
	int N;
	cin >> N;

	Stars* Arr = new Stars[N];
	Print* ArrPrint = new Print[N];

	for (int i = 0; i < N; i++)
	{
		cin >> Arr[i].X >> Arr[i].Y >> Arr[i].Z;
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i == j) continue;
			if (Arr[i].X == Arr[j].X) ArrPrint[i].X++;
			if (Arr[i].Y == Arr[j].Y) ArrPrint[i].Y++;
			if (Arr[i].Z == Arr[j].Z) ArrPrint[i].Z++;
		}
	}

	for (int i = 0; i < N; i++)
	{
		cout << ArrPrint[i].X << " " << ArrPrint[i].Y << " " << ArrPrint[i].Z << endl;
	}
}

int main()
{
	fastIO();
	SolveProblem();
}