#include <bits/stdc++.h>
using namespace std;
int main (){
    fstream file;
    file.open ("VANBAN.in");
    string stoken;
    set < string > se;
    vector < string > ve;
    while ( file >> stoken){
        for (char& c : stoken){
            if ( isalpha(c)){
                c = tolower(c);
            }
        }
        ve.push_back(stoken);
    }
    for (auto x : ve){
        se.insert(x);
    }
    for ( auto x : se){
        cout << x << endl;
    }
}