#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
string chuanhoa(string s){
	for(int i=1;i<s.length();i++){
		s[i]=tolower(s[i]);
	}
	s[0]=toupper(s[0]);
	return s;
}
string toUpper(string s){
	for(int i=0;i<s.length();i++){
		s[i]=toupper(s[i]);
	}
	return s;
}
int main(){
	string s;getline(cin,s);
	stringstream ss(s);
	string w;
	vector<string> v;
	while(ss>>w){
		v.push_back(w);
	}
	for(int i=0;i<v.size()-1;i++){
		cout<<chuanhoa(v[i]);
		if(i==v.size()-2){
			cout<<", ";
		}else{
			cout<<" ";
		}
	}
	cout<<toUpper(v[v.size()-1]);
}