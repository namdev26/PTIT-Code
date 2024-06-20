#include<bits/stdc++.h>
using namespace std;
int cnt[100000001] = {0};
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
        int ok =0;
		for (int i=1;  i < n; i++){
            for ( int j =i-1; j >=0 ; j--){
                if ( a[i] == a[j]) {
                    cout << a[i] << endl;
                    ok = 1;
                    break;
                }
            }
            if (ok == 1) break;
        }
        if (ok ==0) cout << "-1" << endl;
    }
}