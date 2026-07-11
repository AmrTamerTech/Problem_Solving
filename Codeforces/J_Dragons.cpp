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

struct Point
{
	int X;
	int Y;
};

bool Compare(Point a, Point b)
{
	return a.X < b.X;
}

void SolveProblem()
{
	int S, N;
	cin >> S >> N;
	Point Arr[N];
	for (int i = 0; i < N; i++)
		cin >> Arr[i].X >> Arr[i].Y;
	sort(Arr, Arr + N, Compare);
	bool Flage = true;
	for (int i = 0; i < N; i++)
	{

		if (S <= Arr[i].X)
		{
			Flage = false;
			break;
		}
		S += Arr[i].Y;
	}

	cout << (Flage ? "YES" : "NO") << endl;
}

int main()
{
	fastIO();
	SolveProblem();
}