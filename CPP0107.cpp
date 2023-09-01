#include <bits/stdc++.h> 
using namespace std; 
int n; 
void tong() { 
	int k=0; 
	while (n>0) { 
		k+=n%10; 
		n/=10; 
	} 
	n=k; 
} 
int main() { 
	int t; 
	cin >> t; 
	while(t--) { 
		cin >> n; 
		while (n>9) tong(); 
		cout<<n<<endl; 
	} 
}
