#include <bits/stdc++.h>
using namespace std;
int main (){
    int t; cin >> t;
    cin.ignore();
    while (t--){
        string a;
        getline(cin,a);
        for (int i = 0; i<a.size(); i++){
            int cnt =0;
            for (int j =0; j < a.size(); j ++){
                if (i != j && a[i] == a[j]) cnt ++;
            }
            if (cnt == 0) cout << a[i];
        }
        cout << endl;
    }
}