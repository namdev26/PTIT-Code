#include <iostream>
#include <set>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n][n];
        set<int> set;
        int check[100005] = {0};
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                if (check[a[i][j]] == i)
                {
                    check[a[i][j]] = i + 1;
                }
                if (i == n - 1 && check[a[i][j]] == n)
                {
                    set.insert(a[i][j]);
                }
            }
        }
        cout << set.size() << endl;
    }
}