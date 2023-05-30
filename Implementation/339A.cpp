#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, k = "";
    cin >> s;
    int a[(s.length() / 2) + 1],j=0;
    for (int i = 0; i < s.length();i++)
    {
        if (s[i] != '+')
        {
            int x = s[i] - '0';
            a[j] = x;
            j++;
        }
    }
    sort(a, a + ((s.length() / 2) + 1));
    for (int i = 0; i < ((s.length() / 2) + 1); i++)
    {
        k += to_string(a[i]);
        k += "+";
    }
    cout << k.substr(0, k.length() - 1);
}