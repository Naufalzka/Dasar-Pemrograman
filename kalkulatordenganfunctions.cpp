#include <iostream>
using namespace std;

// Fungsi-fungsi dengan nilai kembalian
double tambah(double a, double b) {
    return a + b;
}

double kurang(double a, double b) {
    return a - b;
}

double kali(double a, double b) {
    return a * b;
}

double bagi(double a, double b) {
    if (b == 0) {
        cout << "Error: Tidak dapat dibagi dengan 0\n";
        return 0;
    }
    return a / b;
}

// Fungsi untuk menampilkan menu
void tampilkanMenu() {
    cout << "\n===== KALKULATOR SEDERHANA =====\n";
    cout << "1. Penjumlahan\n";
    cout << "2. Pengurangan\n";
    cout << "3. Perkalian\n";
    cout << "4. Pembagian\n";
    cout << "5. Keluar\n";
    cout << "Pilih operasi (1-5): ";
}

int main() {
    int pilihan;
    char ulang;
    double num1, num2, hasil;

    do {
        tampilkanMenu();
        cin >> pilihan;

        if (pilihan == 5) {
            cout << "Terima kasih! Program selesai.\n";
            break;
        }

        else if (pilihan < 1 || pilihan > 5) {
            cout << "Pilihan tidak valid!\n";
            continue;
        }

        cout << "Masukkan angka pertama: ";
        cin >> num1;
        cout << "Masukkan angka kedua: ";
        cin >> num2;

        switch (pilihan) {
            case 1:
                hasil = tambah(num1, num2);
                cout << num1 << " + " << num2 << " = " << hasil << endl;
                break;
            case 2:
                hasil = kurang(num1, num2);
                cout << num1 << " - " << num2 << " = " << hasil << endl;
                break;
            case 3:
                hasil = kali(num1, num2);
                cout << num1 << " * " << num2 << " = " << hasil << endl;
                break;
            case 4:
                hasil = bagi(num1, num2);
                cout << num1 << " / " << num2 << " = " << hasil << endl;
                break;
        }

        cout << "Ingin melakukan operasi lain? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');
    
    cout << "Terima kasih! Program selesai.\n";

    return 0;
}
