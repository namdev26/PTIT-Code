#include <bits/stdc++.h>
using namespace std;
int main (){
	int t; cin >> t;
	while ( t--){
		int a,m; cin >>a>>m;
		int ok =0;
		//a =3; b=11
		for ( int i = 0; i <=m-1; i++){
			//ok = (3*0) % 11=0;
			if ( (a *i ) % m ==1 ) {
				cout << i << endl;
				ok =1;
			}
		}
		if ( ok ==0) cout << "-1" << endl;
	}
	return 0;
}
