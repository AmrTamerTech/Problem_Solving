#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N, X, Num;
	cin >> N >> X;
	for (int i = 0; i < N; i++)
	{
		cin >> Num;
		if (Num == X)
		{
			cout << i << endl;
			return 0;
		}
	}
	cout << "Not Found" << endl;
} 
