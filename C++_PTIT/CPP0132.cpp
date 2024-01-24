#include<iostream>
#include<cmath>
using namespace std;
bool snt(long n){
	if(n<=3){
		return n>1;
	}else if(n%2==0||n%3==0){
		return false;
	}
	int i=5;
	while(i*i<=n){
		if(n%i==0||n%(i+2)==0){
			return false;
		}
		i+=6;
	}
	return true;
}
int main(){
	int t;cin>>t;
	while(t--){
		long n;cin>>n;
		long ans=0;
		for(long i=2;i<=sqrt(n);i++){
			while(snt(i) && n%i==0){
				ans=i;
				n/=i;
			}
		}
		if(n>1) ans=n;
		cout<<ans<<endl;
	}
}