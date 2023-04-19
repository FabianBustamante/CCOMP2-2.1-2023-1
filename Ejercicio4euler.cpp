#include <iostream>
using namespace std;

bool esPalindromo(int num) {
    int numInverso = 0, numOriginal = num;
    while (num > 0) {
        numInverso = numInverso * 10 + num % 10;
        num /= 10;
    }
    return numOriginal == numInverso;
}

int main() {
    int mayorPalindromo = 0;

    for (int i = 100; i <= 999; i++) {
        for (int j = i; j <= 999; j++) {
            int producto = i * j;
            if (esPalindromo(producto) && producto > mayorPalindromo) {
                mayorPalindromo = producto;
            }
        }
    }

    cout << "El palíndromo más grande hecho del producto de dos números de 3 dígitos es: " << mayorPalindromo << endl;

    return 0;
}