#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define ll long long;
using namespace std;

void fastIO()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

struct IndexArea
{
	int Index;
	long long Area;
};

bool Compare(IndexArea Area1, IndexArea Area2)
{
	return Area1.Area < Area2.Area;
}

void SolveProblem()
{
	int N;
	cin >> N;
	IndexArea ArrArea[N];

	for (int i = 0; i < N; i++)
	{
		int X1, X2, X3, X4, Y1, Y2, Y3, Y4;
		cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;

		long long Max_X = max({ X1, X2, X3, X4 });
		long long Min_X = min({ X1, X2, X3, X4 });
		long long Max_Y = max({ Y1, Y2, Y3, Y4 });
		long long Min_Y = min({ Y1, Y2, Y3, Y4 });

		long long  Width = Max_X - Min_X;
		long long Height = Max_Y - Min_Y;

		long long Area = Width * Height;
		ArrArea[i] = { i + 1, Area };
	}

	sort(ArrArea, ArrArea + N, Compare);

	for (int i = 0; i < N; i++)
	{
		cout << ArrArea[i].Index << " " << ArrArea[i].Area << "\n";
	}
	//
}

int main()
{
	fastIO();
	SolveProblem();
}