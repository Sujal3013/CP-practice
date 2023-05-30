#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int k = 0; k < n; k++)
    {
        cin >> a[k];
    }
    if (n == 2)
    {
        if (a[0] < a[1])
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    else
    {
        int max_e = *max_element(a, a + n), min_e = *min_element(a, a + n), i = 0, j = n - 1, max_i = 0, min_i = n - 1;
        if (max_e == min_e)
        {
            cout << 0 << endl;
            return 0;
        }
        while (max_e != a[i])
        {
            i++;
        }
        max_i = i;
        while (min_e != a[j])
        {
            j--;
            i++;
        }
        min_i = j;
        if (max_i > min_i)
        {
            cout << i - 1 << endl;
        }
        else
        {
            cout << i << endl;
        }
    }
}