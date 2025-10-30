#include <iostream>
using namespace std;

int main(){
    int totalDetik;
    cout << "Masukkan waktu dalam detik: ";
    cin >> totalDetik;

    int hari;
    int jam;
    int menit;
    int detik;

    hari = totalDetik / 86400; //satu hari = 86400 detik
    jam = (totalDetik % 86400) / 3600; //satu jam = 3600  detik, sisa hasil bagi (%) dari hari kemudian dibagi 3600 detik.
    menit = (totalDetik % 3600) / 60; //satu menit = 60 detik, sisa hasil bagi (%) dari jam kemudian dibagi 60 detik.
    detik = totalDetik % 60;

    cout << totalDetik << " detik = "; 
    cout << hari << " Hari, "; 
    cout << jam << " Jam, "; 
    cout << menit << " Menit, "; 
    cout << detik << " Detik" << endl;

    return 0;
}
