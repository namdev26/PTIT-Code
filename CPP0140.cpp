#include <iostream>
#include <math.h>

using namespace std;
int main (){
	int t; cin >> t;
	while ( t--){
		long long n ;
		cin >> n;
		if (n > 1e12 ) {
			cout << "0" << endl;
		}
		else if ( n < 1e12){
			long long tong = 0;
			for ( int i = 1; i <= sqrt(n); i ++){
				if( n % i == 0 && n / i != i){ 
					tong = tong + i + n/i;
				}
				if( n % i ==0 && n / i == i){ 
					tong = tong + i ;
				}
			}
			if ((tong - n) == n) cout << "1" << endl;
			else cout << "0" << endl;
			}
		else if (n <= 2) cout << "0"<< endl;
		}
	return 0;
}
