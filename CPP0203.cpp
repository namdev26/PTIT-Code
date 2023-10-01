#include <bits/stdc++.h>
using namespace std;
int main (){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        long long a[n];
        for(int i =0; i < n; i ++){
            cin >> a[i];
        }
        int x =1;
        while(1){
            int ok = 1;
            for ( int i =0; i < n; i++){
                if ( a[i] == x){
                    ok = 0;
                    break;
                }
            }
            if (ok ==0) x++;
            else break;
        }
        cout << x << endl;
    }
}