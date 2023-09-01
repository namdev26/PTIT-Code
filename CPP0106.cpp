#include <bits/stdc++.h>

using namespace std ;

bool kiemtrasodao(long long n){
	long long sodao = 0;
	long long sobandau = n;
	while ( n > 0){
		int nho;
		nho = n% 10;
		sodao = sodao * 10 + nho;
		n = n / 10;
	}
	if ( sodao == sobandau) {
		return true;
	}
	else {
		return false;
	}
}

int main ( ){
	int t; cin >> t;
	while ( t-- ){
		long long n; cin >> n;
		if (kiemtrasodao(n)) cout << "YES\n";
		else cout << "NO\n";
	}
}

