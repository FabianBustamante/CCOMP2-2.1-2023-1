#include <iostream>
using namespace std;

int main() {
    long long numero = 600851475143;
    int factorPrimoMasGrande = 2;

    while (numero > 1) {
        if (numero % factorPrimoMasGrande == 0) {
            numero = numero / factorPrimoMasGrande;
        } 
        else {
            factorPrimoMasGrande++;
        }
    }

    cout << "El factor primo más grande de 600851475143 es: " << factorPrimoMasGrande << endl;

    return 0;
}