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
        sort(a, a+n,comp);
        for ( int i =0; i < k ; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}
