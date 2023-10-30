#include <bits/stdc++.h>
using namespace std;
string chuyen56(string str1){
    for ( int i =0; i < str1.size(); i ++){
        if (str1[i] == '5')  str1[i] = '6';
    }
    return str1;
}
string chuyen65(string str2){
    for ( int i =0; i < str2.size(); i ++){
        if (str2[i] == '6')  str2[i] = '5';
    }
    return str2;
}
string findSum(string str1, string str2) 
{ 
   
    if (str1.length() > str2.length()) 
        swap(str1, str2); 
  
    string str = ""; 
  
    int n1 = str1.length(), n2 = str2.length(); 
  
    reverse(str1.begin(), str1.end()); 
    reverse(str2.begin(), str2.end()); 
  
    int carry = 0; 
    for (int i=0; i<n1; i++) 
    { 
        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 
  
        carry = sum/10; 
    } 
  
    for (int i=n1; i<n2; i++) 
    { 
        int sum = ((str2[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 
        carry = sum/10; 
    } 
  
    if (carry) 
        str.push_back(carry+'0'); 
  
    reverse(str.begin(), str.end()); 
  
    return str; 
}
int main (){
    int t; cin >> t;
    cin.ignore();
    while ( t--){
        string a,b;
        getline(cin ,a);
        getline(cin ,b);    
        cout << findSum(chuyen65(a) , chuyen65(b)) << " " << findSum(chuyen56(a) , chuyen56(b)) << endl;
    }
}