#include <bits/stdc++.h>
using namespace std;

string xoaktuthua(string sdt)
{
    sdt.erase(remove_if(sdt.begin(), sdt.end(), [](char c)
                        { return !isdigit(c); }),
              sdt.end());
    if (sdt.substr(0, 2) == "84")
    {
        sdt = "0" + sdt.substr(2);
    }
    else if (sdt.substr(0, 3) == "+84")
    {
        sdt = "0" + sdt.substr(3);
    }
    return sdt;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string sdt;
        getline(cin, sdt);
        string xoa = xoaktuthua(sdt);
        cout << xoa << endl;
    }
}