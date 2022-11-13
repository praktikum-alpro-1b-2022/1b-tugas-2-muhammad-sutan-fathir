#include <iostream>
using namespace std;

int main(){
    int a, t;
    float luas;

    cout << "Masukkan Alas Segitiga: ";
    cin >> a;

    cout << "Masukkan Tinggi Segitiga: ";
    cin >> t;

    luas = 0.5*a*t;
    cout << "Luas Segitiga: " << luas;

    return 0;
}
