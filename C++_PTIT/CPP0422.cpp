#include <bits/stdc++.h>
using namespace std;
int main (){
    int t; cin >> t;
    while (t--){
        int n; cin >> n; 
        long long a[n];
        int cnt =0;
        for ( int i =0; i < n ; i++){
            cin >> a[i];
        }
        for(int i =0; i < n; i++){
            if (a[i] == 0 ) cnt ++;
        }
        for(int i =0; i < n; i++){
            if (a[i] != 0 ) cout << a[i]<< " ";
        }
        for(int i =0; i < cnt; i++){
            cout << "0" << " ";
        }
        cout << endl;
    }   
}