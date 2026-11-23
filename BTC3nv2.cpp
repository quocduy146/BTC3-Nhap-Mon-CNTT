#include <iostream>
#include <algorithm>
using namespace std;

long long tongSoChan(long long a, long long b) {
    if (a > b) swap(a, b);
    long long tong = 0;
    for (long long x = a; x <= b; x++) {
        if (x % 2 == 0) tong += x;
    }
    return tong;
}

int main() {
    long long a, b;

    cout << "Nhap so nguyen a: ";
    if (!(cin >> a)) {
        cout << "Vui long nhap hai so nguyen hop le!" << endl;
        return 0;
    }

    cout << "Nhap so nguyen b: ";
    if (!(cin >> b)) {
        cout << "Vui long nhap hai so nguyen hop le!" << endl;
        return 0;
    }

    long long ketQua = tongSoChan(a, b);
    cout << "Tong cac so chan trong doan [" << a << ", " << b << "] la: " << ketQua << endl;

    return 0;
}
