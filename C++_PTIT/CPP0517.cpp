#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct NhanVien {
    string hoten, gioitinh, ngaysinh, diachi, masothue, ngaykyhopdong;
};

void nhap(NhanVien& nv) {
    cin.ignore();
    getline(cin, nv.hoten);
    getline(cin, nv.gioitinh);
    getline(cin, nv.ngaysinh);
    getline(cin, nv.diachi);
    getline(cin, nv.masothue);
    cin >> nv.ngaykyhopdong;
}

void inds(NhanVien ds[], int N) {
    for (int i = 0; i < N; i++) {
        cout << setfill('0') << setw(5) << i + 1  << " "; // Tạo mã nhân viên tự động
        cout << ds[i].hoten <<" ";
        cout << ds[i].gioitinh << " ";
        cout << ds[i].ngaysinh << " ";
        cout << ds[i].diachi << " ";
        cout << ds[i].masothue << " ";
        cout << ds[i].ngaykyhopdong << endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}