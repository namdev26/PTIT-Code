#include <bits/stdc++.h>
using namespace std;
int main (){
    int t; cin >> t;
    while (t--){
        int k , n;
        cin >> k >> n;
        int a[k*n];
        for (int i =0 ; i < k*n; i++) cin >> a[i];
        multiset<int> mse;
        for ( auto x : a){
            mse.insert(x);
        }
        for( auto x : mse){
            cout << x <<" ";
        }
        cout << endl;
    }   
}