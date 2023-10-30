#include <bits/stdc++.h>
using namespace std;
struct ThiSinh{
    string hoten;
    string ngaysinh;
    float diemm1, diemm2, diemm3;
};
void nhap(ThiSinh &a){
    getline ( cin , a.hoten);
    getline (cin , a.ngaysinh);
    cin >> a.diemm1 >> a.diemm2 >> a.diemm3;
}
void in(ThiSinh a){
    cout << a.hoten << " " << a.ngaysinh << " "<< fixed << setprecision(1) <<a.diemm1 + a.diemm2 + a.diemm3<< endl;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}