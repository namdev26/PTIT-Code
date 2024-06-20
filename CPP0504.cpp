#include <bits/stdc++.h>
using namespace std;
struct SinhVien {
    string hoten;
    string lop;
    string ngaysinh;
    double gpa;
};
void nhap(SinhVien &a){
    getline(cin, a.hoten);
    getline(cin, a.lop);
    getline(cin, a.ngaysinh);
    cin >> a.gpa;
    if (a.ngaysinh[1] == '/'){
        a.ngaysinh= "0" + a.ngaysinh;
    }
    if(a.ngaysinh[4] == '/'){
        a.ngaysinh.insert(3,"0");
    }
}
void in(SinhVien a){
    cout << "B20DCCN001" << " " << a.hoten <<" "<< a.lop << " "<< a.ngaysinh<< " "<< fixed <<setprecision(2)<< a.gpa<<endl;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}