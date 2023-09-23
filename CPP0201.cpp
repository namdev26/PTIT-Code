#include <bits/stdc++.h>

using namespace std;

// void sapxep(int a[], long long n){
//     for (int i = 0; i < n; i++){
//         for (int j = i+1; j < n; j++){
//             if (a[i] > a[j])
//                 swap(a[i], a[j]);
//         }
//     }
// }
int main()
{
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n];
        for( int i =0 ; i < n; i++){
            cin >> a[i];
        }
        sort(a, a+n);
        double min = 1e10;
        for ( int i =0; i < n-1; i++){// n =7
            if (a[i+1] - a[i] < min){
                min = a[i+1] - a[i];
            }
        }
        cout << min << endl ;
    }
    return 0;
}