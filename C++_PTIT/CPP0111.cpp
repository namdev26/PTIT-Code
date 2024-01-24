#include <bits/stdc++.h> 
using namespace std; 

int abs(int a, int b){
	if (a>b) return a-b;
	else return b-a;
}

int main() { 
	int t;
	cin >> t;
	while(t--){
		char a[18];
		int ok = 0;
		cin >> a;
		for(int i=0;i<strlen(a)-1;i++){
			if(abs(a[i],a[i+1])==1){
				ok = 1;
			}else{
				ok = 0;
				break;
			}
		}
		if(ok == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}


