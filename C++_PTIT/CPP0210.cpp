#include<iostream>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int l=0,r=n-1;
		while(l+1<n && a[l]>a[l+1]){
			l+=1;
		}
		while(r-1>=0 && a[r]<a[r-1]){
			r-=1;
		}
		if(l>=r){
			cout<<"-1"<<endl;
		}else{
			int ans = a[r]-a[l];
			for(int i=l;i<r-1;i++){
				for(int j=i+1;j<r;j++){
					if(a[j]-a[i]>ans){
						ans = a[j]-a[i];
					}
				}
			}
			cout<<ans<<endl;
		}
	}
}