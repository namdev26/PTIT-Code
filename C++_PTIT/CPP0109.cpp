#include <bits/stdc++.h> 
 
using namespace std; 

int test(int n){ 
	int ok=0; 
	while(n>0){ 
		int i=n%10; 
		if(i%2==0) ok++; 
		else ok--; 
		n/=10; 
	} 
		if(ok==0) return 0; 
		else return 1; 
	} 
int main() { 
	int n,tmp=0; 
	cin>>n; 	
	for(int i=pow(10,n-1); i<pow(10,n);i++){ 
		if(test(i)==0){ 
			cout<<i<<" "; 
			tmp++; 
		} 
		if(tmp==10){ 
			cout<<endl; 
			tmp=0; 
		} 
	} 
}
