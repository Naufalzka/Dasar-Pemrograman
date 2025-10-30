#include <iostream>
using namespace std;

int main(){
    int d;
    cout << "Masukkan waktu dalam detik: ";
    cin >> d;

    int jam;
    int menit;
    int detik;

    jam = (d / 3600); // satu jam = 3600 detik
    menit = (d % 3600) / 60; // satu menit = 60 detik, sisa hasil bagi (%) dari jam kemudian dibagi 60 detik.
    detik = d % 60;


    cout << d << " detik = "; 
    cout << jam << " Jam, "; 
    cout << menit << " Menit, "; 
    cout << detik << " Detik" << endl;

    return 0;
}