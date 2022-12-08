#include <iostream>
using namespace std;
/*
prime factor must will ba a prime
*/
int main()
{

    freopen("input.txt", "r", stdin);
    long long int n;
    cin >> n;
    for (long long int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }
    cout << n;
    return 0;
}