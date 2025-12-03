#include <iostream>
using namespace std;

double pangkat(double a, int b) {
    if (b == 0){
     return 1;
    }
    else {
    return a * pangkat(a, b - 1);
    }
}

int main() {
    double num1;
    int num2;
    cout << "Masukkan nilai a untuk basis: "; cin >> num1;
    cout << "Masukkan nilai b untuk eksponen (bilangan bulat): "; cin >> num2;
    if (!cin) {
        cout << "Input tidak valid\n";
        return 1;
    }

    double hasil = pangkat(num1, num2);
    cout << "Hasil dari " << num1 << "^" << num2 << " = " << hasil << '\n';
    return 0;
}
