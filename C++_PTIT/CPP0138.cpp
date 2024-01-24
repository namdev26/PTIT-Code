#include <bits/stdc++.h> 
 
using namespace std; 

bool snt(int n){
	if(n<2) return false;
	else for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}

int main() { 
	int t;
	int ok = 0;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i=0;i<n;i++){
			if(snt(i)==true&&snt(n-i)==true){
				cout << i << " "<<n-i<<endl;
				ok = 1;
				break;
			}
			
		}
	}
}


