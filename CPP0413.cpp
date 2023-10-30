#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }

        sort(a, a + n);
        sort(b, b + n, greater<int>());
        int c[n][2];
        for (int i = 0; i < n; i++)
        {
            c[i][0] = b[i];
        }
        for (int i = 0; i < n; i++)
        {
            c[i][1] = a[i];
        }
        if (n % 2 == 0)
        {
            for (int i = 0; i < n / 2; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    cout << c[i][j] << " ";
                }
            }
        }
        else if (n % 2 != 0)
        {
            for (int i = 0; i < n / 2; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    cout << c[i][j] << " ";
                }
            }
            cout << c[n / 2][0];
        }
        cout << endl;
    }
}