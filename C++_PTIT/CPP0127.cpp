#include<iostream>
#include<math.h>
using namespace std;
bool snt(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		bool check=true;
		for(int i=2;i<=n/2;i++){
			if(snt(i)&&snt(n-i)){
				cout<<i<<" "<<n-i<<endl;
				check=false;
				break;
			}
		}
		if(check) cout<<"-1"<<endl;
	}
}