/*
    Author : Imran Hossen
*/

#include <bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sn sf("%d", &n)
#define eof while (cin >> n)
#define llu unsigned long long
#define endl "\n"

llu BIT[10001];
int n, u, i, l, r, val, k;

void update(int i, int val)
{
    for (; i <= n; i += i & (-i))
        BIT[i] += val;
}

llu query(int i)
{
    llu sum = 0;

    for (; i > 0; i -= i & (-i))
        sum += BIT[i];

    return sum;
}
void pirnt_arr(llu arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%llu, ", arr[i]);
    printf(endl);
}
void range_update(int i, int j, int val)
{
    update(i, val);
    update(j + 1, -val);
}

int main(void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */
    int tc;
    sf("%d", &tc);
    while (tc--)
    {
        sf("%d %d", &n, &u);
        // printf("n = %d\tu = %d\n", n, u);
        memset(BIT, 0, sizeof(llu) * (n + 1));
        // pirnt_arr(BIT, n + 1);
        for (i = 1; i <= u; i++)
        {
            sf("%d %d %d", &l, &r, &val);
            // printf("l = %d\tr = %d\tval = \n\n", l, r, val);

            range_update(l + 1, r + 1, val);
            // pirnt_arr(BIT, n + 1);
        }

        sf("%d", &k);
        // printf("k = %d\n\n", k);

        for (i = 1; i <= k; i++)
        {
            sf("%d", &val);
            // printf("val = %d\n\n", val);
            // pf("%llu\n", query(val + 1));
            printf("%llu\n", BIT[i]);
        }
    }

    return 0;
}