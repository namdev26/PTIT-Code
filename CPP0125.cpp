#include <bits/stdc++.h>

using namespace std;

int isPrime(int n){
	int k=0;
	if (n < 2) return 0;
	for ( int i=2; i <= sqrt (n); i++){
		if ( n% i ==0) k++;
	}
	if ( k ==0) return 1;
	else return 0;
}

int main ( ){
	int n,m; cin >> n>>m;
	int solon = 0, sobe = 0;
	if ( n > m) {
		solon = n;
		sobe = m;
	}
	else {
		sobe =n;
		solon = m;
	}
	for ( int i =sobe; i<=solon; i++){
		if (isPrime(i)==1) cout << i<< " ";
	}
}
