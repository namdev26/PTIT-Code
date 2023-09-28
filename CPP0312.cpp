#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        int k ; cin >> k;
        if(s.size() < 26 ) cout << "0" << endl;
        else {
            int cnt = 0;
            int arr[30]={0};
            for(int i =0; i <s.size(); i++){
                if(arr[s[i]-'a'] ==0){
                    cnt += 1;
                    arr[s[i]-'a'] = 1;
                }
            }
            if (cnt + k >=26) cout <<"1"<< endl;
            else cout << "0" << endl;
        }
    }
}