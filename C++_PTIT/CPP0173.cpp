#include <bits/stdc++.h>
using namespace std;
long long ucln(long long a, long long b)
{
    if (b == 0)
        return a;
    return ucln(b, a % b);
}
long long bcnn(long long a, long long b)
{
    return a * b / ucln(a, b);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, z, n;
        cin >> x >> y >> z >> n;
        long long res = pow(10, n - 1) / bcnn(bcnn(x, y), z); // 33
        long long dme = res * bcnn(bcnn(x, y), z);            // 1020
        if (dme >= pow(10, n - 1) && dme < pow(10, n))
            cout << dme << endl;
        else if ((res + 1) * bcnn(bcnn(x, y), z) >= pow(10, n - 1) && (res + 1) * bcnn(bcnn(x, y), z) < pow(10, n))
            cout << (res + 1) * bcnn(bcnn(x, y), z) << endl;
        else
            cout << "-1" << endl;
    }
}
