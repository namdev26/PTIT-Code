#include <bits/stdc++.h>

using namespace std ;

int ktra ( string s){
	for (int i =0 ; i < s.size(); i++){
		if (s[i] > '9' || s[i] < '0'){
			return 0;
		}
	}
	if (s.size() > 10 ) return 0;
	return 1;
}

int main (){
	long long res =0;
	fstream file;
	file.open ("DATA.in");
	while (1){
		string s;
		file >> s;
		if (file.eof()){
			break;
		}
		if (ktra(s)){
			res = res + stoi(s);
		}
	}
	file.close();
	cout << res << endl;
}
