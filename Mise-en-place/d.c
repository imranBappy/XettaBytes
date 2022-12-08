int roll = 8882;
// 8882(Integer) to (10001010110010)
#include <stdio.h>
#include <string.h>
#define llu nusigned long long
int main()
{

    int tc, n, op, l, r, val, nq, q, i;
    scanf("%d ", &tc); // input test case

    while (tc--)
    {
        scanf("%d %d", &n, &op); // number of element and number of op
        // int arr[10000] = {0};
        int arr[n];
        memset(arr, 0, sizeof(arr)); // set defual 0

        // update arry by value
        while (op--)
        {
            scanf("%d %d %d", &l, &r, &val); // input update opration index, end, value
            while (l <= r)
            {
                arr[l] += val;
                l++;
            }
        }
        // queries arry by value

        scanf("%d", &nq); // input number of queires
        while (nq--)
        {
            scanf("%d", &q); // input index for query
            printf("%d\n", arr[q]);
        }
    }

    return 0;
}