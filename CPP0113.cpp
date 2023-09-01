#include <bits/stdc++.h>

using namespace std;

int main (){
	int t; cin >> t;
	while (t--){
		int nho =0;int tmp=0;
		int n; cin >> n;
		for ( int i =1 ; i <=3; i++){
			tmp = n % 10;
			nho = nho *10 + tmp;
			n = n/ 10;
			i++;
		}
		if ( nho == 68) cout << "1"<<endl;
	else cout << "0"<<endl ;		
	}
}
