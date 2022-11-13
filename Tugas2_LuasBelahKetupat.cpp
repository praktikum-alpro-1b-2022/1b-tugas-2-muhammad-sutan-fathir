#include <iostream>
using namespace std;

int main(){
    int d1, d2;
    float luas;

    cout << "Masukkan Diagonal Pertama Belah Ketupat: ";
    cin >> d1;

    cout << "Masukkan Diagonal Kedua Belah Ketupat: ";
    cin >> d2;

    luas = 0.5*d1*d2;
    cout << "Luas Belah Ketupat: " << luas;

    return 0;
}
