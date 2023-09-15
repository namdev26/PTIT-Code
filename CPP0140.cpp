#include <iostream>
#include <math.h>

using namespace std;
int main (){
	int t; cin >> t;
	while ( t--){
		long long n; cin >> n;
		long long tong = 0;
		for ( int i = 1; i <= sqrt(n); i ++){
			if( n % i == 0 && n / i != i){ // 22 + 3 +7
				tong = tong + i + n/i;
			}
			if( n % i ==0 && n / i == i){// 
				tong = tong + i ;
			}
		}
		cout << tong -n << endl;
	}
	return 0;
}
