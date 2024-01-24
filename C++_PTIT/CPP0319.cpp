#include <iostream>
#include <string>
using namespace std;
string solve1(int sum, int m)
{
    string ans = "";
    for (int i = 0; i < m; i++)
    {
        if (sum >= 9)
        {
            ans = "9" + ans;
            sum -= 9;
        }
        else
        {
            ans = (char)(sum + '0') + ans;
            sum = 0;
        }
    }
    if (ans[0] == '0')
    {
        ans[0] = '1';
        int i = 1;
        while (ans[i] == '0')
        {
            i += 1;
        }
        ans[i] = (char)(((ans[i] - '0') - 1) + '0');
    }
    return ans;
}
string solve2(int sum, int m)
{
    string ans = "";
    for (int i = 0; i < m; i++)
    {
        if (sum >= 9)
        {
            ans = ans + "9";
            sum -= 9;
        }
        else
        {
            ans = ans + (char)(sum + '0');
            sum = 0;
        }
    }
    return ans;
}
int main()
{
    int m, s;
    cin >> m >> s;
    if (s > m * 9 || s == 0 && m > 1)
    {
        cout << "-1 -1" << endl;
    }
    else
    {
        string num1 = solve1(s, m);
        string num2 = solve2(s, m);
        cout << num1 << " " << num2 << endl;
    }
}