#include <bits/stdc++.h>

using namespace std;

int main (){
	int t; cin >>t;
	double tong =0;
	while (t--){
		double xa, ya, xb, yb;
		cin >> xa >> ya >> xb>> yb;
		tong = sqrt (pow (( xb - xa),2)+pow(( yb - ya),2));
		cout << fixed<< setprecision(4) <<tong<< endl;
	}
}
