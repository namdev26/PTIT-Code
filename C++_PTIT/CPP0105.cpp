#include <bits/stdc++.h>

using namespace std ;
	
int main (){
	int t; cin >> t;
	while ( t--){
		int n; cin >> n;
	if ( n <= 9) {
		int rec = n;
		if ( rec == 0) cout << "YES\n";
		else if ( rec == 6) cout << "YES\n";
		else if ( rec == 8) cout << "YES\n";
		else cout << "N0\n";
	}
	else {
		while ( n > 9){
			int rec = n % 10;
			if ( rec != 0 && rec != 6 && rec != 8){
				cout << "NO\n";
				break;
			}
			else {
				cout << "YES\n";
				break;
				}
			n = n / 10;
			}
		}
	}
}

