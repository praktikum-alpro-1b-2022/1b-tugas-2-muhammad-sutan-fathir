#include <iostream>
using namespace std;

int main(){
    int a, b, t;
    float luas;

    cout << "Masukkan Sisi Atas Trapesium: ";
    cin >> a;

    cout << "Masukkan Sisi Bawah Trapesium: ";
    cin >> b;

    cout << "Masukkan Tinggi Trapesium: ";
    cin >> t;

    luas = 0.5*(a+b)*t;
    cout << "Luas Trapesium: " << luas;

    return 0;
}
