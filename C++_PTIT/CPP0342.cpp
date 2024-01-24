#include <bits/stdc++.h>
using namespace std;
int main (){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		int sum =0;
		for (int i =0; i <s.size(); i++){
			if ( s[i] >='0' && s[i] <='9') sum = sum + (s[i]-'0');
		}
		multiset <char> ms;
		for (auto c : s) ms.insert(char(c));
		ms.erase('0');
		ms.erase('1');
		ms.erase('2');
		ms.erase('3');
		ms.erase('4');
		ms.erase('5');
		ms.erase('6');
		ms.erase('7');
		ms.erase('8');
		ms.erase('9');
		for (auto x : ms) cout << x ;cout <<sum <<endl;
	}
}
