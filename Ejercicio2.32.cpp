#include <iostream>
using namespace std;

int main() {
   
    int edad;

    cout << "Ingresa tu edad: ";
    cin >> edad;

    int mhr1 = 220 - edad;
    int mhr2 = 208 - 0.7 * edad;
    int mhr3 = 211 - 0.64 * edad;

    cout << "MHR utilizando 220 - edad: " << mhr1 << endl;
    cout << "MHR utilizando 208 - 0.7(edad): " << mhr2 << endl;
    cout << "MHR utilizando 211 - 0.64(edad): " << mhr3 << endl;

    int mas_pequeno = mhr1;
    int mas_grande = mhr1;

    if (mhr2 < mas_pequeno) {
        mas_pequeno = mhr2;
    }
    if (mhr3 < mas_pequeno) {
        mas_pequeno = mhr3;
    }

    if (mhr2 > mas_grande) {
        mas_grande = mhr2;
    }
    if (mhr3 > mas_grande) {
        mas_grande = mhr3;
    }

    cout << "Rango de valores de la MHR: " << mas_pequeno << " a " << mas_grande << endl;

    return 0;
}