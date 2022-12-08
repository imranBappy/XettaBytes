#include "iostream"
#include "math.h"
using namespace std;

/*
	Give an number N, find all devisors of N
*/

int main()
{
	freopen("input.txt", "r", stdin);
	int n;
	cin >> n;
	// 0(sqrt(n))
	int sum = 0;
	for (int i = 1; i * i <= n; i++)
		if (n % i == 0)
			if (i * i == n)
				cout << i << " ";
			// sum += i;
			else
				// sum += i + n / i;
				cout << i << " " << n / i << " ";

	// cout << sum << " ";

	return 0;
}