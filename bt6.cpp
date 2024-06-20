#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    while ( t--){
        double l,r,w,s;
        cin >> l >> r >> w >> s;
        double dieml =0;
        if (l>= 3 && l <= 4) dieml = 2.5;
        else if (l>= 5 && l <= 6) dieml = 3.0;
        else if (l>= 7 && l <= 9) dieml = 3.5;
        else if (l>= 10 && l <= 12) dieml = 4.0;
        else if (l>= 13 && l <= 15) dieml = 4.5;
        else if (l>= 16 && l <= 19) dieml = 5.0;
        else if (l>= 20 && l <= 22) dieml = 5.5;
        else if (l>= 23 && l <= 26) dieml = 6.0;
        else if (l>= 27 && l <= 29) dieml = 6.5;
        else if (l>= 30 && l <= 32) dieml = 7.0;
        else if (l>= 33 && l <= 34) dieml = 7.5;
        else if (l>= 35 && l <= 36) dieml = 8.0;
        else if (l>= 37 && l <= 38) dieml = 8.5;
        else if (l>= 39 && l <= 40) dieml = 9.0;
        double diemr =0;
        if (r>= 3 && r <= 4) diemr = 2.5;
        else if (r>= 5 && r <= 6) diemr = 3.0;
        else if (r>= 7 && r <= 9) diemr = 3.5;
        else if (r>= 10 && r <= 12) diemr = 4.0;
        else if (r>= 13 && r <= 15) diemr = 4.5;
        else if (r>= 16 && r <= 19) diemr = 5.0;
        else if (r>= 20 && r <= 22) diemr = 5.5;
        else if (r>= 23 && r <= 26) diemr = 6.0;
        else if (r>= 27 && r <= 29) diemr = 6.5;
        else if (r>= 30 && r <= 32) diemr = 7.0;
        else if (r>= 33 && r <= 34) diemr = 7.5;
        else if (r>= 35 && r <= 36) diemr = 8.0;
        else if (r>= 37 && r <= 38) diemr = 8.5;
        else if (r>= 39 && r <= 40) diemr = 9.0;
        double tong = 0;
        tong = (dieml + diemr + w + s)/4;
        if (tong < (int)tong + 0.25) tong = (int) tong;
        if (tong >= (int)tong + 0.25 && tong < (int)tong + 0.75) tong = (int) tong+0.5;
        if (tong >= (int)tong + 0.75) tong = (int) tong + 1;
        cout << fixed << setprecision(1) << tong << endl;
    }
}
