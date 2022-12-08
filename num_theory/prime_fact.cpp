#include <iostream>
using namespace std;

int main()
{

    freopen("input.txt", "r", stdin);

    int n;
    scanf("%d ", &n);

    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            printf("%d\n", i);
            n = n / i;
        }
    }
    cout << n;
    return 0;
}