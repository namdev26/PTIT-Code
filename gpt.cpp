using namespace std;

bool isDivisibleByFour(string str) {
    int n = str.length();
  
    // Nếu chuỗi có ít hơn 2 ký tự
    if (n < 2)
        return (stoi(str) % 4 == 0);
  
    // Kiểm tra 2 ký tự cuối cùng
    if (stoi(str.substr(n - 2)) % 4 == 0)
        return true;
  
    return false;
}

int main() {
    string input;
    cout << "Nhập chuỗi: ";
    getline(cin, input);

    if (isDivisibleByFour(input)) {
        cout << "Chuỗi chia hết cho 4." << endl;
    } else {
        cout << "Chuỗi không chia hết cho 4." << endl;
    }

    return 0;
}