#include <bits/stdc++.h>

using namespace std;
int main (){
	int t; cin >> t;
	while ( t--){
		long long n,k; cin >> n >> k;
		long long tongdu =0;
		long long du =0;
		for ( int i = 1; i <=n; i++){
			du = i % k ;
			tongdu = tongdu + du;
		}
		cout << tongdu << endl;
	}
	return 0;
}
