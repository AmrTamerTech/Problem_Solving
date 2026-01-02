#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int Arr[1000];

	for (int i = 0; i < N; i++)
		cin >> Arr[i];

	int* it = min_element(Arr, Arr + N);
	int index = it - Arr;   

	cout << *it << " " << index + 1 << endl;

} 
