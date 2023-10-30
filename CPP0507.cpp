#include <bits/stdc++.h>
using namespace std;
struct PhanSo {
    long long tuso;
    long long mauso;
};
void nhap(PhanSo &a){
    cin >> a.tuso >> a.mauso;
}
long long uocchungmax(long long a, long long b){
    if ( b==0) return a;
    return uocchungmax(b, a%b);
}
long long boichungmin(long long a, long long b){
    return (a * b) / uocchungmax(a,b);
}
void rutgon(PhanSo &a){
    long long l = uocchungmax(a.tuso,a.mauso);
    a.tuso = a.tuso / l;
    a.mauso = a.mauso / l;
}
PhanSo tong(PhanSo a, PhanSo b){
    long long bc = boichungmin(a.mauso,b.mauso);
    PhanSo c;
    a.tuso = (boichungmin(a.mauso, b.mauso)/a.mauso) * a.tuso;
    b.tuso = (boichungmin(a.mauso, b.mauso)/b.mauso) * b.tuso;
    c.tuso = a.tuso + b.tuso;
    c.mauso = boichungmin(a.mauso, b.mauso);
    rutgon(c);
    return c;
}
void in(PhanSo c){
    cout << c.tuso << "/" << c.mauso<<endl;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}