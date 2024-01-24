#include <bits/stdc++.h>
using namespace std;

int main (){
	fstream file;
	int n;
	map <int, int> mp;
	file.open ("DATA.in");
	while (file >> n){
		mp[n]++;
	}
	for ( auto x : mp){
		cout << x.first << " " << x.second << endl;
	}
}
