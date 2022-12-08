#include <bits/stdc++.h>
using namespace std;
#define MAX 1000
bool prime[MAX];
/*
odd number of sum is one even number
example
 3 * 4 = 12 even
 3 * 3 = 9 odd
 7 * 6 = 42 even
 7 * 9 = 63 odd

*/
void sieve()
{
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for (int i = 4; i <= MAX; i += 2)
        prime[i] = false;
    for (int i = 3; i * i <= MAX; i += 2)
        if (prime[i])
            for (int j = i * 3; j <= MAX; j += i + i)
                prime[j] = false;
                
}

int main()
{
    freopen("out.txt", "w", stdout);
    sieve();
    for (int i = 2; i < MAX; i++)
    {
        if (prime[i])
        {
            cout << i << ", ";
        }
    }

    return 0;
}