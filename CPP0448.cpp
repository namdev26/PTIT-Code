#include <bits/stdc++.h>
using namespace std;
bool comp (const int c, const int d){
    return c> d;
}
int main (){
    int t; cin >> t;
    while ( t--){
        int n , k;
        cin >> n >> k;
        int a[n];
        for ( int i =0; i < n ; i++){
            cin >> a[i];
        }
        int cnt =0;
        for ( int i =0; i < n ; i++){
            if (a[i] == k) cnt ++;
        }
        if ( cnt ==0) cout << "-1" << endl;
        else cout << cnt<< endl;
    }
}
