#include <stdio.h>

int main()
{
    freopen("input.txt", "r", stdin);
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld, %lld\n", a, b);
    if (a % b == 0)
    {
        printf("divisible\n");
    }
    else
    {
        printf("not divisible\n");
    }

    return 0;
}