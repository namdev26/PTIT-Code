#include <bits/stdc++.h>

using namespace std;

int main (){
	int t; cin >> t;
	while (t--){
		int n, m;
		int lcm = lcm (n,m);
		cin >> n>> m;
		cout << __gcd(n, m);
		cout << lcm;
	}
}
