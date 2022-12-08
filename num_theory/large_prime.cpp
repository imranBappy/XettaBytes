#include <bits/stdc++.h>
using namespace std;

#define MAX 100000008

bool isPrime[MAX];

void sieve()
{
    isPrime[0] = isPrime[1] = true;

    for (int i = 4; i < MAX; i += 2)
        isPrime[i] = true;
    for (int i = 3; i * i <= MAX; i += 2)
    {
        if (!isPrime[i])
        {
            for (int j = i * 3; j < MAX; j += 2 * i)
            {
                isPrime[j] = true;
            }
        }
    }
}

int main()
{

    sieve();
    cout << endl;
    for (int i = 0; i < 50; i++)
        cout << !isPrime[i] << ' ';
    return 0;
}