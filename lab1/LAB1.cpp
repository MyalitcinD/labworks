#include <iostream>
using namespace std;

int main()
{
	unsigned int n;
	unsigned long factorial=1;

	cout << "Enter positive number: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		factorial *= i;
	}

	cout << "Factorial " << n << " = " << factorial << "\n";
	return 0;
}