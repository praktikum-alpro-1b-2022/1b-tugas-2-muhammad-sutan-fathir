#include <iostream>
using namespace std;

int main(){
    int d1, d2;
    float luas;

    cout << "Masukkan Diagonal Pertama Layang-Layang: ";
    cin >> d1;

    cout << "Masukkan Diagonal Kedua Layang-Layang: ";
    cin >> d2;

    luas = 0.5*d1*d2;
    cout << "Luas Layang-Layang: " << luas;

    return 0;
}
