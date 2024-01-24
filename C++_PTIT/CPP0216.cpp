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
		int l,r;cin>>l>>r;
		int tmpl=l,tmpr=r;
		while(l+1<=tmpr && a[l]<=a[l+1]){
			l+=1;
		}
		while(r-1>=tmpl && a[r]<=a[r-1]){
			r-=1;
		}
		if(r-l==1 || r-l==0){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}
}