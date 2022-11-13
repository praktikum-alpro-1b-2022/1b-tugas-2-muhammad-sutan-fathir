#include <iostream>
using namespace std;

int main(){
    int r;
    float phi = 3.14, luas;

    cout << "Masukkan Jari-Jari Lingkaran: ";
    cin >> r;

    luas = phi*r*r;
    cout << "Luas Lingkaran: " << luas;

    return 0;
}
