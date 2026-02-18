#include <iostream>
using namespace std;

short GiveIndexOfDifferentNumber(short Size, int arr[100], int Freq[101])
{
	for (int i = 0; i < Size; i++)
	{
		if (Freq[arr[i]] == 1) return i + 1;
	}
}

void SolveProblem()
{
	short T;
	cin >> T;
	while (T--)
	{
		short Num;
		cin >> Num;
		int arr[100];
		int Freq[101] = {};
		for (int i = 0; i < Num; i++)
		{
			cin >> arr[i];
			Freq[arr[i]]++;
		}
		cout << GiveIndexOfDifferentNumber(Num, arr, Freq) << endl;
	}
}


int main()
{
	SolveProblem();

}