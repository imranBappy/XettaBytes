#include <cstring>
#include <iostream>
using namespace std;
#define MAX 100

bool primes[MAX];
int all_prime[MAX];
int prime_len = 0;
void sieve()
{
    memset(primes, true, sizeof(primes));
    primes[0] = primes[1] = false;
    for (int i = 4; i < MAX; i += 2)
        primes[i] = false;
    for (int i = 3; i * i < MAX; i += 2)
        if (primes[i])
            for (int j = i * 3; j <= MAX; j += i + i)
                primes[j] = false;
}

void filter_prime()
{
    for (int i = 2; i <= MAX; i++)
        if (primes[i])
            all_prime[prime_len++] = i;
}

int main()
{
    freopen("input.txt", "r", stdin);

    sieve();
    filter_prime();
    int num;
    cin >> num;
    int max_div = 1;
    for (int i = 0; i < prime_len; i++)
    {
        int p = all_prime[i];
        // cout << p << " ";
        int count = 1;
        while (num % p == 0)
        {
            num = num / p;
            count++;
        }
        if (count != 1)
        {
            cout << p << "^" << count << endl;
            max_div *= count;
            count = 1;
        }
    }
    cout << max_div << endl;
    return 0;
}