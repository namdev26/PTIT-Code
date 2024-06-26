#include<iostream>
#include<string>
using namespace std;
class NhanVien {
private:
    string a, b, c, d, e, f, g;
public:
    NhanVien() {
       a = b = c = d = e = f = g = "";
    }
    friend istream& operator>>(istream& mycin, NhanVien&);
    friend ostream& operator<<(ostream& mycout, NhanVien);
};
int coun = 0;
istream& operator>>(istream& mycin, NhanVien&x) {
    if (coun == 0)mycin.ignore();
    coun++;
    x.a = string(5 - to_string(coun).length(), '0') + to_string(coun);
    getline(mycin, x.b);
    getline(mycin, x.c);
    getline(mycin, x.d);
    getline(mycin, x.e);
    getline(mycin, x.f);
    getline(mycin, x.g);
    return mycin;
}
ostream& operator<<(ostream& mycout, NhanVien x)  {
    mycout << x.a << " " << x.b << " " << x.c << " " << x.d << " " << x.e << " " << x.f << " " << x.g << endl;
    return mycout;
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}