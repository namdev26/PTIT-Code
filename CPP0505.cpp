#include <bits/stdc++.h>
using namespace std;
struct NhanVien {
    string hovaten;
    string gioitinh;
    string ngaysinh;
    string diachi;
    string masothue;
    string ngaydk;
};
void nhap(NhanVien &a){
    getline (cin , a.hovaten);
    getline (cin , a.gioitinh);
    getline (cin , a.ngaysinh);
    getline (cin , a.diachi);
    getline (cin , a.masothue);
    getline (cin , a.ngaydk);
}
void in (NhanVien a){
    cout << "00001" << " " << a.hovaten << " " << a.gioitinh << " "<< a.ngaysinh<<" "<< a.diachi<< " "<< a.masothue<<" "<< a.ngaydk << endl;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}