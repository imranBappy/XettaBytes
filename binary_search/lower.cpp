#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int lb, int ub, int target)
{
    int n = ub;
    while (lb <= ub)
    {
        int mid = (lb + ub) / 2;
        cout << mid << ", ";
        if (arr[mid] == target)
            return mid;
        else if ((arr[mid] < target && target < arr[mid + 1]) && mid + 1 <= n)
            return mid + 1;
        else if (arr[mid] > target)
            ub = mid - 1;
        else if (arr[mid] < target)
            lb = mid + 1;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 5, 8, 10};
    //           0  1  2  3  4  5
    int idx = binary_search(arr, 0, 5, 3);
    cout << "\n";
    cout << idx << endl;
    cout << arr[idx] << endl;

    return 0;
}