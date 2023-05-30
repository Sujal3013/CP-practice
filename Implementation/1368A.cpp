#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n, count = 0;
        cin >> a >> b >> n;
        bool flag;
        while (!(a > n) && !(b > n))
        {
            flag = b > a;
            if (flag)
            {
                a = a + b;
                flag = false;
                count++;
            }
            else
            {
                b = a + b;
                flag = true;
                count++;
            }
        }
        cout << count<<endl;
    }
}
