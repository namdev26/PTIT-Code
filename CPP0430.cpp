#include<bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int &x : a){
            cin >> x;
        }
        sort(a, a+n);
        set <int> se;
        for (auto x : a){
            se.insert(x);
        }
        cout << a[n-1]-a[0]+1-se.size() << endl;
    }
}