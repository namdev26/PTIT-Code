#include <bits/stdc++.h>
using namespace std;
int main (){
    int t; cin >> t;
    while ( t--){
        int n,k;
        cin >> n >> k;
        int a[n];
        for ( int i =0; i < n ; i++){
            cin >> a[i];
        }
        multiset <int> se;
        for (auto x : a){
            se.insert(x);
        }
        for (auto x : se){
            cout << x << " ";
        }
        cout << endl;
    }
}
