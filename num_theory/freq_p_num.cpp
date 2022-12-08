#include <bits/stdc++.h>
using namespace std;
#define MAX 2003
bool all_prime[MAX];

void prime_ganarate()
{
    for (int i = 0; i <= MAX; i++)
        all_prime[i] = true;

    all_prime[0] = all_prime[1] = false;

    for (int i = 4; i <= MAX; i += 2)
        all_prime[i] = false;

    for (int i = 3; i * i <= MAX; i += 2)
    {
        if (all_prime[i])
        {
            for (int j = i * 3; j < MAX; j += i * 2)
            {
                all_prime[j] = false;
            }
        }
    }
}

void make_frequncy(int *count, int len, string s)
{
    memset(count, 0, len * 4);
    int s_len = s.length();
    for (int i = 0; i < s_len; i++)
        count[int(s[i]) - 48]++;
}
int main()
{

    // freopen("input.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    prime_ganarate();
    int t;
    cin >> t;

    string s = "";
    string s_out = "";
    int count[75];
    // for (int i = 2; i < MAX; i++)
    // {
    //     cout << i << " - " << all_prime[i] << endl;
    // }

    int _case = 1;
    int flag = 1;
    while (t--)
    {
        cin >> s;
        if (s.length() < 2001)
        {
            make_frequncy(count, 75, s);
            cout << "Case " << _case << ": ";
            for (int i = 0; i < s.length(); i++)
            {
                if (count[int(s[i]) - 48])
                {
                    if (all_prime[count[int(s[i]) - 48]])
                    {
                        s_out += s[i];
                        flag = 0;
                    }
                    count[int(s[i]) - 48] = 0;
                }
            }
            _case++;
            if (flag)
            {
                cout << "empty\n";
            }
            else
            {
                sort(s_out.begin(), s_out.end());
                cout << s_out << endl;
                s_out = "";
            }
            flag = 1;
        }
    }

    return 0;
}