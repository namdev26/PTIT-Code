#include <bits/stdc++.h>
using namespace std;

// bool snt(int n){
//     if ( n <= 1) return false;
//     for ( int i =2 ; i <=sqrt(n); i++){
//         if( n % i ==0) return false;
//     }
//     return true;

int main(){
    int n; cin >> n;
    for(int i =2 ; i * i <= n; i ++){
        int cnt=0;
        while( n % i ==0){
            cnt ++;
            n = n / i;
        }
        if ( cnt > 0) cout << i << " " << cnt << endl;
    }
    if (n > 1) cout << n << " "<< "1" << endl;
}