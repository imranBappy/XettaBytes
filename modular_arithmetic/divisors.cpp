#include "iostream"
#include "math.h"
using namespace std;

/*
	Give an number N, find all devisors of N
*/

int main()
{
	freopen("input.txt", "r", stdin);
	int t;
	cin >> t;
	long long int n;
	int count = 0;
	while (t--)
	{
		cin >> n;
		for (long long int i = 1; i * i <= n; i++)
			if (n % i == 0)
				if (i * i == n)
					// cout << i << ", ";
					count++;
				else
					count += 2;
		// cout << i << ", " << n / i << ", ";
	}
	cout << count;
	return 0;
}