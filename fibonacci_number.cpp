#include <iostream>

using namespace std;

int main()
{
	int n, a = -1, b = 1, c;

	n = 20;

	cout << "Fibonacci series of first " << n << " terms is given below:\n";
	for (int i = 0; i < n; i++)
	{
		c = a + b;
		cout << c << " ";
		a = b;
		b = c;
	}

	return 0;
}
