#include <bits/stdc++.h>

using namespace std;
bool snt ( int n){
	if ( n <=1) return false;
	for ( int i =2 ; i < sqrt(n); i ++){
		if ( n % i == 0) return false;
	}
	return true;
}
int main (){
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		for ( int i = 2; i <= n; i ++){
			if (snt(i) && n % i ==0){
				int dem = 0;
				while (n % i ==0){
					dem = dem + 1;
					n = n/ i;
				}
				cout << i <<" " << dem << " " ;
			}
		}
		cout << endl;	
	}
}
