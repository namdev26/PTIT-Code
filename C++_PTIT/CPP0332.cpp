#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
int main(){
	string s;getline(cin,s);
	for_each(s.begin(),s.end(),[](char &c){
		c = ::tolower(c);
	});
    stringstream ss(s);
    string w;
    vector <string> v;
    while(ss>>w){
    	v.push_back(w);
	}
	string ans="";
	ans+=v[v.size()-1];
	for(int i=0;i<v.size()-1;i++){
		ans+=v[i][0];
	}
	cout<<ans<<"@ptit.edu.vn";
}