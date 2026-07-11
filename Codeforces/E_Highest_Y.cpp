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

bool Compare(Point A, Point B)
{
	return A.Y > B.Y;
}

void SolveProblem()
{
	short N;
	cin >> N;

	Point Arr[100];
	for (short i = 0; i < N; i++)
	{
		cin >> Arr[i].X >> Arr[i].Y;
	}
	sort(Arr, Arr + N, Compare);

	for (short i = 0; i < N; i++)
	{
		cout << Arr[i].X << " " << Arr[i].Y << "\n";
	}
}

int main()
{
	fastIO();
	SolveProblem();
}