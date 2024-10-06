#include <iostream>
using namespace std;

int find_minimum(int x, int y) {
    if (x < y)
        return x;
    else
        return y;
}

int main() {
    int x, y;

    // Meminta input dari pengguna
    cout << "Masukkan nilai x: ";
    cin >> x;
    cout << "Masukkan nilai y: ";
    cin >> y;

    int minimum = find_minimum(x, y);

    cout << "Nilai terkecil antara " << x << " dan " << y << " adalah: " << minimum << endl;

    return 0;
}
