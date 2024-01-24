#include <bits/stdc++.h>
using namespace std;
long long check (long long a){
	 long long b =0;
	while(a>0){
		b = b + a%10;
		a=a/10;
	}
	return b;
}
int main (){
	int t; cin >> t;
	while(t--){
		string a;
		cin >> a;
		long long tong =0;
		for ( int i =0; i<a.size(); i ++){
			tong = tong + a[i] - '0';
		}
		while(tong>10){
			tong=check(tong);
		}
		if (check(tong) == 9) cout << "1" << endl;
		else cout << "0" << endl;
	}
}
