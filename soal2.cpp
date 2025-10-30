#include <iostream>
using namespace std;

int main(){
    int d;
    cout << "Masukkan waktu dalam detik: ";
    cin >> d;

    int hari;
    int jam;
    int menit;
    int detik;

    hari = d / 86400; //satu hari = 86400 detik
    jam = (d % 86400) / 3600; //satu jam = 3600  detik, sisa hasil bagi (%) dari hari kemudian dibagi 3600 detik.
    menit = (d % 3600) / 60; //satu menit = 60 detik, sisa hasil bagi (%) dari jam kemudian dibagi 60 detik.
    detik = d % 60;

    cout << d << " detik = "; 
    cout << hari << " Hari, "; 
    cout << jam << " Jam, "; 
    cout << menit << " Menit, "; 
    cout << detik << " Detik" << endl;

    return 0;
}