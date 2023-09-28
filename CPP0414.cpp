#include <bits/stdc++.h>
using namespace std;
int main (){
    int t; cin >> t;
    cin.ignore();
    while (t--){
        int n; cin >> n;
        cin.ignore();
        string s;
        getline(cin, s);
        set<char> se;
        for ( auto x : s){
            se.insert(x);
        }
        for ( auto x : se){
            cout << x << " ";
        }
        cout << endl;
    }
}