#include <bits/stdc++.h>
using namespace std;

void del(){
	string str;
	cin>>str;
	if(str.length()==4){
		if(str[0]=='0'&&str[1]=='8'&&str[2]=='4'){
			str=str[3];
		}
		else if (str[1]=='0'&&str[2]=='8'&&str[3]=='4'){
			str=str[0];
		}
	}
	else{
		
		for(int i=0;i<str.length()-2;i++){
			if(str[i]=='0'&&str[i+1]=='8'&&str[i+2]=='4'){
				str.erase(str.begin() + i, str.begin() +(i+3));
			}
		}
	}
	cout<<str<<endl;
}
int main() {
	int t;
    cin>>t;
    while(t--) {
        del();
    }
    return 0;
}

