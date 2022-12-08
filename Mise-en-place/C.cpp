#include <bits/stdc++.h>
using namespace std;

void print_triagle(int m, int s)
{
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    for (int i = m - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        if (i == 1 && s)
        {
        }
        else
        {
            printf("\n");
        }
    }
}
int main()
{
    int tc, m, f;
    cin >> tc;

    while (tc--)
    {
        cin >> m >> f;
        f = f - 1;
        for (int i = 1; i <= f; i++)
        {
            // if (i % 2 == 0)
            //     print_triagle(m, 0);
            // else
            // {
            //     print_triagle(m, 0);
            //     printf("\n");
            // }
            print_triagle(m, 0);
            printf("\n");
        }
        print_triagle(m, 1);
    }
    // printf("\n");

    return 0;
}