#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int Arr[100001];
	int N, Q;
	cin >> N >> Q;
	for (int i = 1; i <= N; i++)
	{
		cin >> Arr[i];
	}
	int l, r, x, Counter;
	for (int i = 0; i < Q; i++)
	{
		cin >> l >> r >> x;
		Counter = 0;
		for (int j = l; j <= r; j++)
		{
			if (Arr[j] == x) Counter++;
		}
		cout << Counter << endl;
	}
} 
