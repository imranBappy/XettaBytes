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

    int arr[] = {1, 2, 3, 3, 5, 5};

    int r = find_firt_num(arr, 0, 5, 3);
    cout << r;

    return 0;
}