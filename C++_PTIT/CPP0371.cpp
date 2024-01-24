#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool check(char c){
	if(c=='a'||c=='e'||c=='u'||c=='o'||c=='i'||c=='y') return false;
	return true;
}
int main(){
	string s;cin>>s;
	for_each(s.begin(),s.end(),[] (char &c){
		c = ::tolower(c);
	});
	
	for(int i=0;i<s.length();i++){
		if(check(s[i])){
			cout<<"."<<(char)tolower(s[i]);
		}
	}
}