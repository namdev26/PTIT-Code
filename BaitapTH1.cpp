#include <bits/stdc++.h>
using namespace std;

int main (){
	int t; cin >> t;
	while ( t--){
		int n, m ; cin >> n >> m;
		int a[n]; 
		for ( int i =0 ; i < n; i ++){
			cin >> a[i];
		}
		for ( int i = 0 ; i < n; i++){
			for ( int j = i +1; j < n;  j++){
				if ( a[i] < a[j]) swap (a[i], a[j]);
			}
		}
		for ( int i =0; i < m; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
