#include <iostream>
using namespace std;

bool is_prime(int n)
{
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return n > 1;
}


int main()
{
    freopen("input.txt", "r", stdin);

    int n;
    cin >> n;
    bool result = is_prime(n);
    cout << result << endl;
    if (result)
        cout << n << " is prime number \n";
    else
        cout << n << " is not prime number \n";

    return 0;
}