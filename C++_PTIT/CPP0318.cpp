#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while (t--){
		string a;
		cin >> a;
		if (a[5] == a[6] && a[6] == a[7] && a[7] == a[9] && a[9] == a[10]) cout  << "YES" << endl;
		else if (a[5] < a[6] && a[6] < a[7] && a[7] < a[9] && a[9] <= a[10]) cout << "YES" << endl;
		else if (a[5] == a[6] && a[6] == a[7] && a[9] == a[10]) cout  << "YES" << endl;
		else if ((a[5] == '6' || a[5] == '8' ) && (a[6] == '6' || a[6] == '8' ) && (a[7] == '6' || a[7] == '8' ) && (a[9] == '6' || a[9] == '8' ) && (a[10] == '6' || a[10] == '8' ) ) cout  << "YES" << endl;
		else cout << "NO" << endl;
	}
}
