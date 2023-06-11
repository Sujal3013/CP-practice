#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        // Your code starts here
        int n, m, k, win=0, sec=0, a;
        cin >> n >> m >> k;
        if (m > 0)
        {
            a = n / k;
            win = min(m, a);
            k--;
            m -= win;
            sec = m / k;
            if (m % k)
            {
                sec = sec + 1;
            }
        }
        cout << win - sec << endl;
    }
    return 0;
}