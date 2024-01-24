#include<iostream>
#include<string>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		string ans="";
		for(int i=0;i<s.length();i++){
			int dem=1;
			cout<<s[i];
			int j=i+1;
			while(j<s.length()&&s[j]==s[i]){
				dem+=1;
				j++;
			}
			cout<<dem;
			i=j-1;
		}
		cout<<endl;
	}
}