#include <iostream>

using namespace std;

int main() {
    int angka;

    // Meminta input angka dari pengguna
    cout << "Masukkan sebuah angka: ";
    cin >> angka;

    // Menentukan apakah angka ganjil atau genap
    if (angka % 2 == 0) {
        cout << angka << " adalah bilangan genap." << endl;
    }
    else {
        cout << angka << " adalah bilangan ganjil." << endl;
    }

    return 0;
}
