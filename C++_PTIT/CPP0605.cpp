#include <bits/stdc++.h>
using namespace std;
int ucln ( int a, int b){
    if (b ==0) return a;
    return ucln(a, a%b);
}
class PhanSo{
    private :
        int tuso;
        int mauso;
    public :
    PhanSo (int tu=1,int mau=1) : tuso (tu), mauso(mau){}
    
}
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}