#include  <iostream>  
using  namespace  std;

void SolveProblem()
{
	int Num, Follow;
	cin >> Num >> Follow;

	int* pSmaller = new int[Num];
	int* pBigger = new int[Num];
	int Element;
	int CounterSmaller = 0;
	int CounterBigger = 0;
	for (int i = 0; i < Num; i++)
	{
		cin >> Element;
		if (Element < Follow)
		{
			pSmaller[CounterSmaller] = Element;
			CounterSmaller++;
		}
		else if (Element > Follow)
		{
			pBigger[CounterBigger] = Element;
			CounterBigger++;
		}
	}
	for (int i = 0; i < CounterSmaller; i++)
	{
		cout << pSmaller[i] << " ";
	}
	for (int i = 0; i < CounterBigger; i++)
	{
		cout << pBigger[i] << " ";
	}
}

int main()
{
	SolveProblem();
	return 0;
}