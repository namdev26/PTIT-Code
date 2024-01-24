#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
	string name, classs, birthday;
	float gpa;	
};

void input ( SinhVien& a){
	getline (cin, a.name);
	cin >> a.classs;
	cin >> a.birthday ;
	cin >> a.gpa ;
	cin.ignore() ;
}


void nhap(SinhVien ds[], int n){
	cin.ignore() ;
	for ( int i =0; i <n ; i++){
		input(ds[i]);
	}
}

//     01/1/2022
void in(SinhVien ds[], int n){
	for ( int i =0; i < n; i++){
		if (ds[i].birthday[1] == '/')
			ds[i].birthday.insert(0,"0"); 
		if (ds[i].birthday[4] == '/')
			ds[i].birthday.insert(3,"0");
			string s;
		if (i<9) s = "B20DCCN00";
		else s = "B20DCCN0";
		cout << s << i+1<< " " << ds[i].name << " " << ds[i].classs << " " << ds[i].birthday << " " << fixed << setprecision(2) << ds[i].gpa << endl;
		
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
