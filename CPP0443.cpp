#include <bits/stdc++.h>
using namespace std;
int main (){
    int t; cin >> t;
    while ( t--){
        int n;
        cin >> n ;
        int a[n];
        for ( int i =0; i < n-1 ; i++){
            cin >> a[i];
        }
        int ok =1;
        for (int i =0; i < n-1 ; i ++){
            if (a[i] == ok){
                ok++; 
            }
        }
        cout << ok << endl;
    }
}
