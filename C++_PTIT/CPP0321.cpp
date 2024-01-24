#include <bits/stdc++.h>
using namespace std;
#define FORD(i, a, b) for (int i = a; i >= b; --i) 
void solve()
{
    string a, b;
    cin >> a >> b;
    int len = max(a.length(), b.length());
    while (a.length() < len)
        a = "0" + a;
    while (b.length() < len)
        b = "0" + b;
    if (a < b)
        swap(a, b);
    string as(len, '0');
    int rmb = 0;
    FORD(i, len - 1, 0)
    {
        int tg = (a[i] - '0') - (b[i] - '0') - rmb;
        if (tg < 0)
        {
            tg += 10;
            rmb = 1;
        }
        else
            rmb = 0;
        as[i] = tg + '0';
    }
    cout << as << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}