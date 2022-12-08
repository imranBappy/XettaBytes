#include <bits/stdc++.h>

using namespace std;

int main()
{
    // pair<int, char> p1(100, 'G');
    pair<int, int> p1(1, 3);
    pair<int, int> p2(3, 23);

    p1.swap(p2);
    // p1 = make_pair(100, 'A');

    // p1.first = 100;
    // p1.second = 'A';
    int a, b;
    tie(a, ignore) = p1;
    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;
    cout << a << " " << b << endl;

    return 0;
}