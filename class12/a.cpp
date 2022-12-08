#include <bits/stdc++.h>
using namespace std;

int find_firt_num(int arr[], int lb, int ub, int target)
{
    while (lb <= ub)
    {
        int mid = (lb + ub) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
            ub = mid - 1;
        else
            lb = mid + 1;
    }
    return -1;
}

int main()
{
    int tc = 0;
    while (1)
    {
        int n, q;
        tc++;
        scanf("%d %d", &n, &q);
        if (n == 0 & q == 0)
            break;  

        printf("CASE# %d:\n", tc);
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int size = sizeof(arr) / sizeof(arr[0]);
        sort(arr, arr + size);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        while (q--)
        {
            int target;
            cin >> target;
            int inx = find_firt_num(arr, 0, n - 1, target);
            if (inx == -1)
                printf("%d not found\n", target);
            else
                printf("%d found at %d\n", target, inx + 1);
        }
    }

    return 0;
}