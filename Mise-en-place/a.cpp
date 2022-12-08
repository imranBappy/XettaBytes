#include <bits/stdc++.h>
using namespace std;

int main()
{
    string sub, seq;
    cin >> sub >> seq;
    int i, j = 0;
    int sub_len = sub.length();
    int seq_len = seq.length();

    for (i = 0; i < sub_len; i++)
    {
        for (; j < seq_len; j++)
        {
            if (sub[i] == seq[j])
                break;
            if (seq_len - 1 == j)
            {
                printf("No\n");
                return 0;
            }
        }
    }
    printf("Yes\n");
    return 0;
}