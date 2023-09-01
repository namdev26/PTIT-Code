#include <iostream>
#include <iomanip>
using namespace std ;

int main (){
	int a;
	double tong=0 ;
	cin >> a;
	for (int i = 1; i <= a; i++){
		tong = tong +1.0/i;
	}
	cout << setprecision(4) << fixed<< tong ;
}
