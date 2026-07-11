#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void Fast()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
}

int RemoveZero(int num)
{
	string newString = to_string(num);
	string Result = "";

	for (char C : newString)
	{
		if (C != '0')
			Result += C;
	}
	return stoi(Result);
}

int main() 
{
	Fast();
	int num1, num2, num3 = 0;
	cin >> num1 >> num2;
	num3 = num1 + num2;
	int newNum1 = RemoveZero(num1);
	int newNum2 = RemoveZero(num2);
	int newNum3 = RemoveZero(num3);
	
	if (newNum1 + newNum2 == newNum3)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}