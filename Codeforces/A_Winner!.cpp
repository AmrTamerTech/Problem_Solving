#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void fastIO() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void SolveProblem()
{
	int A, S;
	cin >> A >> S;
	cout << (A > S ? "Adham is the winner" : "Samer is the winner") << endl;
}

int main() 
{
	fastIO();
	SolveProblem();

	return 0;
}