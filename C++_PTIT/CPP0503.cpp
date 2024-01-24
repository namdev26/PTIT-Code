#include <bits/stdc++.h>
using namespace std;
struct PhanSo {
    long long tuso;
    long long mauso;
};
void nhap (PhanSo &a){
    cin >> a.tuso >> a.mauso;
}
long long uocchungmax(long long a, long long b){
    if (b ==0) return a;
    return uocchungmax(b, a%b);
}
void rutgon (PhanSo &a){
    long long l = uocchungmax(a.tuso,a.mauso);
    a.tuso = a.tuso / l;
    a.mauso = a.mauso / l;
}
void in(PhanSo a){
    cout << a.tuso <<"/" << a.mauso << endl;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}