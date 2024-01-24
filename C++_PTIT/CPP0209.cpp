#include <bits/stdc++.h> 
using namespace std; 

int main() { 
	int t;
	cin >> t;
	while(t--){
		int n,q,l,r;
		cin >> n >> q;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		while(q--){
			long long sum = 0;
			cin >> l >> r;
			for(int i=l-1;i<r;i++){
				sum += a[i];
			}
			cout << sum << endl;
		}
	}
}
