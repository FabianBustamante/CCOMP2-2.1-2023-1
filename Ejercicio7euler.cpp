#include <iostream>
using namespace std;

bool es_primo(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int contador = 1;
    int num_primo = 2;
    
    while (contador < 10001) {
        num_primo++;
        if (es_primo(num_primo)) {
            contador++;
        }
    }
    
    cout << "El número primo 10001 es: " << num_primo << endl;
    
    return 0;
}