#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
long long dem(long long n)
{
    long long dem = 0;
    while (n > 0)
    {
        dem++;
        n = n / 10;
    }
    return dem;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, x, y;
        cin >> a >> x >> y;
        long long p = 0, q = 0;
        for (int i = 0; i < x; i++)
        {
            p = p * pow(10, dem(a)) + a;
        }
        for (int i = 0; i < y; i++)
        {
            q = q * pow(10, dem(a)) + a;
        }
        cout << gcd(p, q) << endl;
    }
}