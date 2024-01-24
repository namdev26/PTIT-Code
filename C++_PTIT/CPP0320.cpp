#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string a;
		cin >> a;
		set<char> se;
		for (auto x : a)
		{
			se.insert(x);
		}
		int cnt = 0;
		for (auto x : se)
		{	if (isalpha(x))
			{
				cout << "INVALID" << endl;
				break;
			}
			if (isdigit(x))
				cnt++;
		}
		if (cnt == 10)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}
