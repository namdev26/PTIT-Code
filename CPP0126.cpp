#include <bits/stdc++.h>

using namespace std;

int isPrime(int n){
	int k = 0;
	if (n < 2 ) return 0;
	for ( int i =2; i <= sqrt(n); i++){
		if ( n % i ==0) k++;
	}
	if ( k ==0) return 1;
	else return 0;
}

int main (){
	int t; cin >> t;
	while (t--){
		int n,m; cin >> n >> m;
		for ( int i =n; i<=m; i++){
			if (isPrime(i) == 1) cout << i << " ";
		}
		cout << endl;
	}
}
