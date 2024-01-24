#include <bits/stdc++.h>

using namespace std;

int main (){
	int n; cin >> n;
	if ( n == 0 || n == 1){
		cout << "NO";
		return 0;
	}
	int nho = 0;
	for ( int i = 2; i <= sqrt(n) ; i++){
		if ( n % i == 0){
			nho = nho + 1;
		}
	}
	if (nho == 0) cout << "YES";
	else cout << "NO";
	return 0;
}

