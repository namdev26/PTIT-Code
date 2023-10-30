#include <bits/stdc++.h>

using namespace std;

bool check(string s)
{
    if (!isdigit(s[0]) || !isdigit(s[s.size() - 1])) return 0;
    int i = 0, j = 0;
    int cnt = 0;
    while (i < s.size() && j < s.size()) {
        if (cnt > 4) return 0;
        if (!isdigit(s[i])) return 0;
        while (isdigit(s[j]) && j < s.size()) {
            j++;
        }
        if (j != s.size() && s[j] != '.') return 0;
        int num = 0;
        for (int k = i; k < j; k++) {
            num *= 10;
            num += s[k] - '0';
        }
        if (num < 0 || num > 255) return 0;
        cnt++;
        i = j + 1;
        j = i;
    }
    if (cnt != 4) return 0;
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (check(s))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}