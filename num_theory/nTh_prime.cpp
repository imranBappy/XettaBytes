
#include <iostream>
#include <vector>
using namespace std;
#define MAX 1500100
bool isPrime[MAX];
/*
author : Imran Hossen
*/
void prime_num()
{

    for (int i = 0; i <= MAX; i++)
        isPrime[i] = true;

    for (int i = 4; i <= MAX; i += 2)
        isPrime[i] = false;

    for (int i = 3; i * i <= MAX; i += 2)
    {
        if (isPrime[i])
        {
            for (int j = i * 3; j < MAX; j += i + i)
            {
                isPrime[j] = false;
            }
        }
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);

    prime_num();

    vector<int> v;
    for (int i = 2; i <= MAX; i++)
    {
        if (isPrime[i])
            v.push_back(i);
    }

    // int t;
    // cin >> t;
    // while (t--)
    // {
    int n;
    cin >> n;
    cout << v[n - 1] << endl;
    // }

    return 0;
}