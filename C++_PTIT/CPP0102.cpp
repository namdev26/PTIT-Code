#include <iostream>
using namespace std;
	int main (){
		int t; cin >> t;
		while (t--){
		char a;
		cin >> a;
		if ( a >= 'a' && a <= 'z'){
		char	b = a - 32;
			cout << b << endl;
		}
		if ( a >= 'A' && a <= 'Z'){
		char	c = a + 32;
			cout << c << endl;
		}
	}
}

