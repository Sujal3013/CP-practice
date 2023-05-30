#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    set<char> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(str[i]);
    }
    if (s.size() == 1)
    {
        cout << "NO" << endl;
        return 0;
    }
    else
    {

        for (int i = 0; i < n; i++)
        {
            if (str[i] != str[i + 1])
            {
                cout << "YES" << endl;
                cout << str[i] << str[i + 1] << endl;
                return 0;
            }
        }
    }
}