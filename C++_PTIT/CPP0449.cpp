#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while ( t--){
        int n; int k;
        cin >> n >> k;
        set<int> se;
        for ( int i =0; i < n; i++){
            int x; cin >> x;
            se.insert(x);
        }
        bool tim = false;
        for ( auto x : se){
            if(se.count(x + k)){
                tim = true;
                break;
            }
        }
        if (tim) cout << "1" << endl;
        else cout << "-1" << endl;
    }      
}

