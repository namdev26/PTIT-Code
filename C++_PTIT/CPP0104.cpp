#include <bits/stdc++.h>

using namespace std ;
long long gt(long long n){
	if (n == 1) return 1;
	else return n * gt(n - 1);
}
	
int main (){
	int n; cin >> n;
	long long tong = 0;
	for ( int i = 1; i <= n ; i++){
		tong = tong + gt(i);
	}
	cout << tong;
}

