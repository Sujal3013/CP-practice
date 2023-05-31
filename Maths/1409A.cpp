#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int x = abs(a - b) / 10;
        int y = abs(a - b) % 10;
        if (y)
        {
            cout << x + 1 << endl;
        }
        else
        {
            cout << x << endl;
        }
    }
}