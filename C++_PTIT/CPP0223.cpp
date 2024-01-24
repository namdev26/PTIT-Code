#include<iostream>
using namespace std;
int min(int a,int b){
	if(a<b) return a;
	return b;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		int a[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		int tmp = min(n,m);
		if(tmp%2==0){
			tmp/=2;
		}else{
			tmp = (tmp/2)+1;
		}
		int l=0,r1=n-1,r2=m-1;
		while(tmp){
			for(int i=l;i<=r2;i++){
				cout<<a[l][i]<<" ";
			}
			for(int i=l+1;i<=r1;i++){
				cout<<a[i][r2]<<" ";
			}
			if(l!=r1){
				for(int i=r2-1;i>=l;i--){
					cout<<a[r1][i]<<" ";
				}
			}
			if(l!=r2){
				for(int i=r1-1;i>=l+1;i--){
					cout<<a[i][l]<<" ";
				}
			}
			l++;
			r1--;
			r2--;
			tmp--;
		}
		cout<<endl;
	}
}