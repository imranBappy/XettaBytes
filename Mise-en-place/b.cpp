#include <bits/stdc++.h>
using namespace std;
/*
    Imran Hossen
    imranbappy.me
*/
int main()
{
    // declared variable
    int n, t, start, end, i;

    // input size of array
    cin >> n;

    // declared array and  prefix sun of array
    int arr[n], prefix_sum[n];

    // input array element
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // prefix sun of array
    prefix_sum[0] = arr[0];
    for (i = 1; i < n; i++)
        prefix_sum[i] = prefix_sum[i - 1] + arr[i];

    // input how many will query
    cin >> t;
    for (i = 0; i < t; i++)
    {
        // input taka query
        cin >> start >> end;
        if (start > 0)
            printf("%d\n", prefix_sum[end] - prefix_sum[start - 1]);
        else
            printf("%d\n", prefix_sum[end]);
    }

    return 0;
}
