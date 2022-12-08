#include <bits/stdc++.h>
using namespace std;
string int_to_str(int n)
{
    stringstream stream;
    stream << n;
    string str;
    stream >> str;
    return str;
}
string print_triagle(int m)
{
    string triangle = "";
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            triangle.append(int_to_str(i));
        }
        triangle.append("\n");
    }
    for (int i = m - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
            triangle.append(int_to_str(i));
        if (1 != i)
            triangle.append("\n");
    }
    return triangle;
}
int main()
{
    int tc, m, f;
    cin >> tc;

    while (tc--)
    {
        cin >> m >> f;

        if (m == 1)
        {
            for (int i = 0; i < f; i++)
            {

                if (tc > 0)
                {
                    printf("1\n\n");
                }
                else
                {
                    if (i == f - 1)
                    {
                        printf("1");
                    }
                    else
                    {
                        printf("1\n\n");
                    }
                }
            }
        }
        else
        {

            string triangle = print_triagle(m);
            f = f - 1;
            for (int i = 0; i < f; i++)
            {
                cout << triangle;
                printf("\n\n");
            }
            cout << triangle;
            if (tc != 0)
            {
                printf("\n\n");
            }
        }
    }
    printf("\n");

    return 0;
}