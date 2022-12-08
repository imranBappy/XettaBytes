#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int n, x;
    cin >> n;
    if (n == 4)
    {
        cout << "YES\n";
        return 0;
    }

    int count_lucky = 0;
    int foreIsThare = 0;
    int sevenIsThare = 0;
    while (n)
    {
        int last = n % 10;
        if (last == 7)
        {
            count_lucky++;
            sevenIsThare = 1;
        }
        else if (last == 4)
        {
            count_lucky++;
            foreIsThare = 1;
        }
        n = n / 10;
    }
    if (count_lucky == 7 || count_lucky == 4)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}

/*
    int count = 0;
    string nums;
    cin >> nums;
    for (int i = 0; i < sizeof(nums); i++)
        if (nums[i] == '4' || nums[i] == '7')
            count++;
    if (count == 4 || count == 7)
        cout << "YES\n";
    else
        cout << "NO\n";
*/