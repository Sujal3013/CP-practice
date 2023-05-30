#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, floor = 1,i=1;
        cin >> n >> x;
        n = n - 2;
        while (n > 0)
        {
            n = n - i * x;
            floor++;
        }
        cout <<floor<< endl;
    }
}