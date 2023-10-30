#include <bits/stdc++.h>
using namespace std;
int main (){
    int t; cin >> t;
    while ( t--){
        int n;
        cin >> n ;
        int a[n];
        for ( int i =0; i < n ; i++){
            cin >> a[i];
        }
        set <int> se;
        for (auto x : a){
            se.insert(x);
        }
        if ( se.size() == 1) cout << "-1" << endl;
        else {
        auto it = se.begin();
        cout << *it << " ";
        it ++;
        cout << *it << endl;
        }
    }
}
