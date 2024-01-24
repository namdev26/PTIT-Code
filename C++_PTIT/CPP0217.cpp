#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while ( t--){
        int n;
        cin >> n;
        int k ; cin >> k;
        int c = n * n;
        int a[c];
        for ( int i =0; i < c ; i ++){
            cin >> a[i];
        }
        sort ( a, a+ c);
        cout << a[k-1] << endl;       
    }
}
