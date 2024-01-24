#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
bool check(string w){
	if(w[w.length()-1]=='0' ||w[w.length()-1]=='2' ||w[w.length()-1]=='4' ||w[w.length()-1]=='6' ||w[w.length()-1]=='8'){
		return true;
	}
	return false;
}
int main(){
	int t;cin>>t;
	cin.ignore();
	while(t--){
		string s;getline(cin,s);
		vector <string> v;
		string w;
		stringstream ss(s);
		int le=0;
		int chan=0;
		while(ss>>w){
			if(check(w)){//chan
				chan+=1;
			}else{
				le+=1;
			}
			v.push_back(w);
		}
		if(v.size()%2==0 && chan>le){
			cout<<"YES"<<endl;
		}else if(v.size()%2==1 && chan<le){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}