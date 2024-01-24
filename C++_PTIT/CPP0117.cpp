#include <bits/stdc++.h>

using namespace std;
int n;
void tong(){
	int tong =0;
	while ( n> 0){
		tong = tong + n % 10;
		n = n/10;
	}
	n = tong;
}
int main (){
	int t; cin >> t;
	while ( t--){
		cin >>n;
		while ( n> 9) tong();
		cout << n<< endl;
	}
	return 0;
}

