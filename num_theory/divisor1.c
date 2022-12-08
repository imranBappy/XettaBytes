#include <stdio.h>

int main()
{
    int t, n, _case = 1;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        printf("Case %d:", _case);
        for (int i = 1; i <= n / 2; i++)
            if (n % i == 0)
                printf(" %d", i);

        printf(" %d\n", n);
        _case++;
    }

    return 0;
}