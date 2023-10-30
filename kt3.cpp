#include <bits/stdc++.h>
using namespace std;
struct SoPhuc {
    int thuc;
    int ao;
};
SoPhuc binh_phuong_tong(SoPhuc a, SoPhuc b){
    SoPhuc c;
    c.thuc = pow((a.thuc + b.thuc),2) +  (pow((a.ao + b.ao),2))*(-1);
    c.ao = (a.thuc + b.thuc) * (a.ao + b.ao)*2;
    return c;
}
void hien_thi(SoPhuc c){
    if (c.ao < 0) cout << c.thuc << " - " << c.ao<<"i";
    else if (c.ao==0) cout << c.thuc;
    else if (c.ao>0) cout << c.thuc << " + " <<c.ao<<"i";
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		SoPhuc A;
		SoPhuc B;
		cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
		SoPhuc C = binh_phuong_tong(A, B);
		hien_thi(C);
		cout << endl;
	}
}
