#include <bits/stdc++.h>
#include <vector>

using namespace std;
int main (){
    int t; cin >> t;
    while (t--){
        int n, k; cin >> n >> k;
        vector<int> v;
        for ( int i =2 ; i <= sqrt(n); i ++){
            while ( n % i ==0){
                v.push_back(i);
                n = n / i;
            }
        }
        if ( n != 1) v.push_back(n);
        if ( k > v.size()) cout << "-1" << endl;
        else cout << v[k-1] << endl;
    }
    return 0;
}